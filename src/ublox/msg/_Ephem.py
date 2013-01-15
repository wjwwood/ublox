"""autogenerated by genpy from ublox/Ephem.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import ublox.msg
import std_msgs.msg

class Ephem(genpy.Message):
  _md5sum = "d32a65187ce4c5054346cf4bf47b3233"
  _type = "ublox/Ephem"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header

# Ephem Data

svephdata ParsedEphemData
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.secs: seconds (stamp_secs) since epoch
# * stamp.nsecs: nanoseconds since stamp_secs
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: ublox/svephdata
# ParsedEphemData

float64 prn				#PRN number
float64 tow				#time stamp of subframe 0 (s)
float64 health		#health status, defined in ICD-GPS-200
float64 iode1		#issue of ephemeris data 1
float64 iode2		#issue of ephemeris data 2
float64 week			#GPS week number
float64 zweek		#z count week number
float64 toe					#reference time for ephemeris (s)
float64 majaxis				#semi major axis (m)
float64 dN					#Mean motion difference (rad/s)
float64 anrtime				#mean anomoly reference time (rad)
float64 ecc					#eccentricity
float64 omega				#arguement of perigee (rad)
float64 cuc					#arugument of latitude - cos (rad)
float64 cus					#argument of latitude - sine (rad)
float64 crc					#orbit radius - cos (rad)
float64 crs					#orbit radius - sine (rad)
float64 cic					#inclination - cos (rad)
float64 cis					#inclination - sine (rad)
float64 ia					#inclination angle (rad)
float64 dia					#rate of inclination angle (rad/s)
float64 wo					#right ascension (rad)
float64 dwo					#rate of right ascension (rad/s)
float64 iodc			#issue of data clock
float64 toc					#SV clock correction term (s)
float64 tgd					#estimated group delay difference
float64 af0					#clock aiging parameter 0
float64 af1					#clock aiging parameter 1
float64 af2					#clock aiging parameter 2
float64 cmot				#corrected mean motion
float64 ura			#user range accuracy variance (value 0-15)
"""
  __slots__ = ['header','ParsedEphemData']
  _slot_types = ['std_msgs/Header','ublox/svephdata']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,ParsedEphemData

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Ephem, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.ParsedEphemData is None:
        self.ParsedEphemData = ublox.msg.svephdata()
    else:
      self.header = std_msgs.msg.Header()
      self.ParsedEphemData = ublox.msg.svephdata()

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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_31d.pack(_x.ParsedEphemData.prn, _x.ParsedEphemData.tow, _x.ParsedEphemData.health, _x.ParsedEphemData.iode1, _x.ParsedEphemData.iode2, _x.ParsedEphemData.week, _x.ParsedEphemData.zweek, _x.ParsedEphemData.toe, _x.ParsedEphemData.majaxis, _x.ParsedEphemData.dN, _x.ParsedEphemData.anrtime, _x.ParsedEphemData.ecc, _x.ParsedEphemData.omega, _x.ParsedEphemData.cuc, _x.ParsedEphemData.cus, _x.ParsedEphemData.crc, _x.ParsedEphemData.crs, _x.ParsedEphemData.cic, _x.ParsedEphemData.cis, _x.ParsedEphemData.ia, _x.ParsedEphemData.dia, _x.ParsedEphemData.wo, _x.ParsedEphemData.dwo, _x.ParsedEphemData.iodc, _x.ParsedEphemData.toc, _x.ParsedEphemData.tgd, _x.ParsedEphemData.af0, _x.ParsedEphemData.af1, _x.ParsedEphemData.af2, _x.ParsedEphemData.cmot, _x.ParsedEphemData.ura))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.ParsedEphemData is None:
        self.ParsedEphemData = ublox.msg.svephdata()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 248
      (_x.ParsedEphemData.prn, _x.ParsedEphemData.tow, _x.ParsedEphemData.health, _x.ParsedEphemData.iode1, _x.ParsedEphemData.iode2, _x.ParsedEphemData.week, _x.ParsedEphemData.zweek, _x.ParsedEphemData.toe, _x.ParsedEphemData.majaxis, _x.ParsedEphemData.dN, _x.ParsedEphemData.anrtime, _x.ParsedEphemData.ecc, _x.ParsedEphemData.omega, _x.ParsedEphemData.cuc, _x.ParsedEphemData.cus, _x.ParsedEphemData.crc, _x.ParsedEphemData.crs, _x.ParsedEphemData.cic, _x.ParsedEphemData.cis, _x.ParsedEphemData.ia, _x.ParsedEphemData.dia, _x.ParsedEphemData.wo, _x.ParsedEphemData.dwo, _x.ParsedEphemData.iodc, _x.ParsedEphemData.toc, _x.ParsedEphemData.tgd, _x.ParsedEphemData.af0, _x.ParsedEphemData.af1, _x.ParsedEphemData.af2, _x.ParsedEphemData.cmot, _x.ParsedEphemData.ura,) = _struct_31d.unpack(str[start:end])
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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_31d.pack(_x.ParsedEphemData.prn, _x.ParsedEphemData.tow, _x.ParsedEphemData.health, _x.ParsedEphemData.iode1, _x.ParsedEphemData.iode2, _x.ParsedEphemData.week, _x.ParsedEphemData.zweek, _x.ParsedEphemData.toe, _x.ParsedEphemData.majaxis, _x.ParsedEphemData.dN, _x.ParsedEphemData.anrtime, _x.ParsedEphemData.ecc, _x.ParsedEphemData.omega, _x.ParsedEphemData.cuc, _x.ParsedEphemData.cus, _x.ParsedEphemData.crc, _x.ParsedEphemData.crs, _x.ParsedEphemData.cic, _x.ParsedEphemData.cis, _x.ParsedEphemData.ia, _x.ParsedEphemData.dia, _x.ParsedEphemData.wo, _x.ParsedEphemData.dwo, _x.ParsedEphemData.iodc, _x.ParsedEphemData.toc, _x.ParsedEphemData.tgd, _x.ParsedEphemData.af0, _x.ParsedEphemData.af1, _x.ParsedEphemData.af2, _x.ParsedEphemData.cmot, _x.ParsedEphemData.ura))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.ParsedEphemData is None:
        self.ParsedEphemData = ublox.msg.svephdata()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 248
      (_x.ParsedEphemData.prn, _x.ParsedEphemData.tow, _x.ParsedEphemData.health, _x.ParsedEphemData.iode1, _x.ParsedEphemData.iode2, _x.ParsedEphemData.week, _x.ParsedEphemData.zweek, _x.ParsedEphemData.toe, _x.ParsedEphemData.majaxis, _x.ParsedEphemData.dN, _x.ParsedEphemData.anrtime, _x.ParsedEphemData.ecc, _x.ParsedEphemData.omega, _x.ParsedEphemData.cuc, _x.ParsedEphemData.cus, _x.ParsedEphemData.crc, _x.ParsedEphemData.crs, _x.ParsedEphemData.cic, _x.ParsedEphemData.cis, _x.ParsedEphemData.ia, _x.ParsedEphemData.dia, _x.ParsedEphemData.wo, _x.ParsedEphemData.dwo, _x.ParsedEphemData.iodc, _x.ParsedEphemData.toc, _x.ParsedEphemData.tgd, _x.ParsedEphemData.af0, _x.ParsedEphemData.af1, _x.ParsedEphemData.af2, _x.ParsedEphemData.cmot, _x.ParsedEphemData.ura,) = _struct_31d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_31d = struct.Struct("<31d")
