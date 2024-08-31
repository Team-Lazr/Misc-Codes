import pygatt
from binascii import hexlify

adapter = pygatt.GATTToolBackend()

def handle_data(handle, value):
    """
    handle -- integer, characteristic read handle the data was received on
    value -- bytearray, the data returned in the notification
    """
    print("Received data: %s" % hexlify(value))

try:
    adapter.start()
    device = adapter.connect('00:A0:50:5C:CB:AF')

    device.subscribe("49535343-1e4d-4bd9-ba61-23c647249616",
                     callback=handle_data)
finally:
    adapter.stop()