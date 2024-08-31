import binascii
import struct
import time
from bluepy.bluepy.btle import UUID, Peripheral

temp_uuid = UUID(0x2221)

p = Peripheral("00:A0:50:5C:CB:AF", "random")

try:
    ch = p.getCharacteristics(uuid="49535343-1e4d-4bd9-ba61-23c647249616")[0]
    if (ch.supportsRead()):
        while 1:
            val = binascii.b2a_hex(ch.read())
            val = binascii.unhexlify(val)
            val = struct.unpack('f', val)[0]
            print(val)
            # print str(val) + " deg C"
            time.sleep(1)

finally:
    p.disconnect()