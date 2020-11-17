from time import sleep

from Adafruit_IO import Client

ADAFRUIT_IO_USERNAME = 'iot_thinklab'
ADAFRUIT_IO_KEY = 'aio_EltT94njPNxBDt6XiKcvKVeyIJhf'

aio_client = Client(ADAFRUIT_IO_USERNAME, ADAFRUIT_IO_KEY)

while True:
    data = aio_client.receive(feed='imakewemake2020.raspberry-pi-iot-feed')     # Gets the latest data from Adafruit IO Feed
    
    print(data.value)   # Prints the value of the data
    
    sleep(2)
