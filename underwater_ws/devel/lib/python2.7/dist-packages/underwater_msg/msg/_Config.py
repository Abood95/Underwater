# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from underwater_msg/Config.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Config(genpy.Message):
  _md5sum = "d545f84ec040b08d5bf2fc0f795d8d0a"
  _type = "underwater_msg/Config"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool imu
bool barometer
bool encoder1
bool encoder2
bool encoder3
int16 encoder1_offset
int16 encoder2_offset
int16 encoder3_offset

"""
  __slots__ = ['imu','barometer','encoder1','encoder2','encoder3','encoder1_offset','encoder2_offset','encoder3_offset']
  _slot_types = ['bool','bool','bool','bool','bool','int16','int16','int16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       imu,barometer,encoder1,encoder2,encoder3,encoder1_offset,encoder2_offset,encoder3_offset

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Config, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.imu is None:
        self.imu = False
      if self.barometer is None:
        self.barometer = False
      if self.encoder1 is None:
        self.encoder1 = False
      if self.encoder2 is None:
        self.encoder2 = False
      if self.encoder3 is None:
        self.encoder3 = False
      if self.encoder1_offset is None:
        self.encoder1_offset = 0
      if self.encoder2_offset is None:
        self.encoder2_offset = 0
      if self.encoder3_offset is None:
        self.encoder3_offset = 0
    else:
      self.imu = False
      self.barometer = False
      self.encoder1 = False
      self.encoder2 = False
      self.encoder3 = False
      self.encoder1_offset = 0
      self.encoder2_offset = 0
      self.encoder3_offset = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_5B3h().pack(_x.imu, _x.barometer, _x.encoder1, _x.encoder2, _x.encoder3, _x.encoder1_offset, _x.encoder2_offset, _x.encoder3_offset))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 11
      (_x.imu, _x.barometer, _x.encoder1, _x.encoder2, _x.encoder3, _x.encoder1_offset, _x.encoder2_offset, _x.encoder3_offset,) = _get_struct_5B3h().unpack(str[start:end])
      self.imu = bool(self.imu)
      self.barometer = bool(self.barometer)
      self.encoder1 = bool(self.encoder1)
      self.encoder2 = bool(self.encoder2)
      self.encoder3 = bool(self.encoder3)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_5B3h().pack(_x.imu, _x.barometer, _x.encoder1, _x.encoder2, _x.encoder3, _x.encoder1_offset, _x.encoder2_offset, _x.encoder3_offset))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 11
      (_x.imu, _x.barometer, _x.encoder1, _x.encoder2, _x.encoder3, _x.encoder1_offset, _x.encoder2_offset, _x.encoder3_offset,) = _get_struct_5B3h().unpack(str[start:end])
      self.imu = bool(self.imu)
      self.barometer = bool(self.barometer)
      self.encoder1 = bool(self.encoder1)
      self.encoder2 = bool(self.encoder2)
      self.encoder3 = bool(self.encoder3)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_5B3h = None
def _get_struct_5B3h():
    global _struct_5B3h
    if _struct_5B3h is None:
        _struct_5B3h = struct.Struct("<5B3h")
    return _struct_5B3h
