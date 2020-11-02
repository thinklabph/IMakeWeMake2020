#define UV_Sensor A0

void setup() 
{
  Serial.begin(9600);
}
 
void loop() 
{
  float sensorVoltage; 
  float sensorValue;
  float UV_index;
 
  sensorValue = analogRead(UV_Sensor);
  sensorVoltage = sensorValue/1024*5.0;
  UV_index = sensorVoltage * 1.64;
  
  Serial.print("Sensor voltage = ");
  Serial.print(sensorVoltage);
  Serial.println(" V");

  Serial.print("UV Index = ");
  Serial.println(UV_index);
  
  delay(1000);
}
