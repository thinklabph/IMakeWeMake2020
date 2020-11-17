# This code will send a random number from 0 to 1023 Adafruit IO

from time import sleep
import random

from Adafruit_IO import Client

ADAFRUIT_IO_USERNAME = 'iot_thinklab'
ADAFRUIT_IO_KEY = 'aio_EltT94njPNxBDt6XiKcvKVeyIJhf'

aio_client = Client(ADAFRUIT_IO_USERNAME, ADAFRUIT_IO_KEY)

while True:
    data = random.randint(0, 1023)
    
    print('send data:', data)
    aio_client.send_data(feed='imakewemake2020.raspberry-pi-iot-feed', value=data)
    
    sleep(2)

