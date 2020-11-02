void setup() {
    Serial.begin(9600);
}
 
void loop() {
    float sensor_volt;
    float RS_air;
    float R0;
    float sensor_value=0;

    Serial.println("Reading average");
    // measure 100 times, get the average
    for(int x = 0 ; x < 100 ; x++)
    {
        sensor_value = sensor_value + analogRead(A0);
        delay(10);
    }
    sensor_value = sensor_value/100.0; //averagev
 
    sensor_volt = sensor_value*(5.0/1023);
    RS_air = ((5.0-sensor_volt)/sensor_volt)*1000; // RL is 1k based on the module
    R0 = RS_air/6.5; // The ratio of RS/R0 is 6.5 in a clear air from the datasheet/graph shown

    Serial.print("sensor_value = ");
    Serial.print(sensor_value);
        
    Serial.print(" sensor_volt = ");
    Serial.print(sensor_volt);
 
    Serial.print(" R0 = ");
    Serial.println(R0);
    delay(1000);
}
