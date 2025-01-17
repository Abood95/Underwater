from __future__ import print_function
import requests
import argparse
import json


def get_data(url):
    try:
        r = requests.get(url)
    except requests.exceptions.RequestException as exc:
        print("Exception occured {}".format(exc))
        return None

    if r.status_code != requests.codes.ok:
        print("Got error {}: {}".format(r.status_code, r.text))
        return None

    return r.json()

def get_acoustic_position(base_url):
    return get_data("{}/api/v1/position/acoustic/filtered".format(base_url))


def get_global_position(base_url):
    return get_data("{}/api/v1/position/global".format(base_url))


def main():
    parser = argparse.ArgumentParser(description="Push position and orientation of master to Underwater GPS")
    parser.add_argument('-u', '--url', help='Base URL to use', type=str, default='http://demo.waterlinked.com')
    args = parser.parse_args()
    
    base_url = args.url
    base_url = "http://192.168.2.94"    
    print("Using base_url:", base_url)

    data = get_acoustic_position(base_url)
    if data:
        #print(data)
        print("Current acoustic position {},{},{}".format(data["x"], data["y"], data["z"]))

    pos = get_global_position(base_url)
    if pos:
        #print(pos)
        print("Current global position lat:{} lon:{}".format(pos["lat"], pos["lon"]))



if __name__ == "__main__":
    main()
