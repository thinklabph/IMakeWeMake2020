from time import sleep

from Adafruit_IO import Client

ADAFRUIT_IO_USERNAME = 'iot_thinklab'
ADAFRUIT_IO_KEY = 'aio_EltT94njPNxBDt6XiKcvKVeyIJhf'

aio_client = Client(ADAFRUIT_IO_USERNAME, ADAFRUIT_IO_KEY)

previous_id = ''

while True:
    data = aio_client.receive(feed='imakewemake2020.raspberry-pi-iot-feed')
    
    # print(data)
    
    if previous_id != data.id:
        # print(data.value, data.id, data.created_at)
        print(data.value)
        
        previous_id = data.id
    
    sleep(2)