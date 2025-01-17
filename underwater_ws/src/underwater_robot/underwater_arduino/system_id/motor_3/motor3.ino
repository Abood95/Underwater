/* Motor2 : Motors, Encoder and Barometer*/

#include <Servo.h>
#include "Underwater_Motor.h"

#include "Underwater_Encoder.h"
#include <SPI.h>

#include <Wire.h>
#include "Underwater_Barometer.h"

#include <ros.h>
#include <underwater_msgs/Cmd.h>
#include <underwater_msgs/Encoder.h>
#include <underwater_msgs/Baro.h>

/* Our actuators and senesor */
Motor myMotor;
Encoder myEncoder;
Barometer myBarometer;

ros::NodeHandle nh;

/* Set up motor */
int mode, spinning_speed, flipping_angle, flipping_speed;
/* Read the motor control command */
void motor_command(const underwater_msgs::Cmd& cmd_msg){
    mode = cmd_msg.mode;
    spinning_speed = cmd_msg.spinning_speed;
    flipping_angle = cmd_msg.flipping_angle;
    flipping_speed = cmd_msg.flipping_speed;
}
ros::Subscriber<underwater_msgs::Cmd> motor_sub("motor_3", motor_command);

/* Set up Encoder */
underwater_msgs::Encoder encoder_msg;
ros::Publisher encoder_pub("encoder_3", &encoder_msg);

/* Set up Barometer */
underwater_msgs::Baro baro_msg;
ros::Publisher baro_pub("barometer", &baro_msg);


/* Set up Config 
 * Imu Baro Enc1 Enc2 Enc3 Enc1_off Enc2_off Enc3_off 
 */

bool enable_baro, enable_encoder3;

int total_error, last_error;
void setup(){
    nh.initNode();
    nh.advertise(encoder_pub);
    nh.advertise(baro_pub);
    nh.subscribe(motor_sub);
    
    //read_configs();
    int configs[8];
    configs[0] = 0;
    configs[1] = 0;
    configs[2] = 0;
    configs[3] = 0;
    configs[4] = 0;
    configs[5] = 0;
    configs[6] = 0;
    configs[7] = 0;
    
    while(!nh.getParam("arduino_configs", configs, 8)){
        delay(10);
        nh.spinOnce();
    }
    int encoder_offset3;
    //enable_imu = configs[0];
    enable_baro = configs[1];
    //enable_encoder1 = configs[2];
    //enable_encoder2 = configs[3];
    enable_encoder3 = configs[4];
    //encoder_offset1 = configs[5];
    //encoder_offset2 = configs[6];
    encoder_offset3 = configs[7];
    
    nh.spinOnce();
    
    /* Motor settings */
    myMotor.attach(3);
    mode = 0;
    spinning_speed = 0;
    flipping_angle = 0;
    flipping_speed = 0;
    total_error = 0;
    last_error = 0;

    /* Encoder settings, make sure to set offset everytime */
    if(enable_encoder3){
        myEncoder.attach(2);
        myEncoder.set_offset(encoder_offset3);
        myEncoder.initialize_speed();
    } 
    
    /* Barometer settings */
    if(enable_baro){
        myBarometer.setup();
    }
}

void loop(){

    int error, del_error;
    switch(mode){
        case MOTOR_STOP:
            // Brake
            myMotor.brake();
            break;
        case MOTOR_SPIN:
            // Spinning Mode
            /* PID spinning 
            int motor_cmd;
            if(enable_encoder2){
                // PID    
                float Kp, Ki, Kd;
                Kp = 0.2;
                Ki = 0.1;
                Kd = 0;
                error = spinning_speed - encoder_msg.encoder_speed;
                total_error += error;
                del_error = error - del_error;
                
                motor_cmd = Kp*error + Ki*total_error + Kd*del_error;
                last_error = error;
            }
            else{
                // Use experimental correlation
                motor_cmd = 0.3*(spinning_speed + 10);
            }
            */
            myMotor.set_speed(spinning_speed);
            break;
        case MOTOR_FLIP:
            // Flipping Mode, don't flip if no encoder info
            if(enable_encoder3){
                /*
                int motor_cmd;
                motor_cmd = 0.3*(flipping_speed + 10);
                */
                myMotor.flip(flipping_angle, flipping_speed, myEncoder);
            }
            else myMotor.brake();
            break;
        default:
            /* Unknown command type */
            myMotor.brake();
    }
    nh.spinOnce();
    
    if(enable_encoder3){
        encoder_msg.encoder_angle = myEncoder.read_angle();
        encoder_msg.encoder_speed = myEncoder.read_speed();
        encoder_pub.publish(&encoder_msg);
    }
    
    nh.spinOnce(); // prevent ros node from timing out
    if(enable_baro){
        /* Read baro data */
        myBarometer.display_data();
        float depth = myBarometer.depth();
        float temp = myBarometer.temperature();
        
        baro_msg.depth = depth;
        baro_msg.temp = temp;
        baro_pub.publish(&baro_msg);

    }
    

    nh.spinOnce();
    delay(1);
}

