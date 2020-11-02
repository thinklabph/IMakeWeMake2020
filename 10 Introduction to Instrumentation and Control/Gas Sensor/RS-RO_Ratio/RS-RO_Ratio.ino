#define R0 2094.00

void setup() {
    Serial.begin(9600);
}
 
void loop() {
 
    float sensor_volt;
    float RS_gas; // Get value of RS in a GAS
    float ratio; // Get ratio RS_GAS/RS_air
    float sensor_value;
    
    sensor_value = analogRead(A0);
    
    sensor_volt=(float)sensor_value*(5.0/1023);
    RS_gas = ((5.0-sensor_volt)/sensor_volt)*1000; // RL is 1k from the circuit module
    ratio = RS_gas/R0;  // ratio = RS/R0

    Serial.print(" sensor_value = ");
    Serial.print(sensor_value);
    Serial.print(" sensor_volt = ");
    Serial.print(sensor_volt);
    Serial.print("  RS_gas = ");
    Serial.print(RS_gas);
    Serial.print("  RS/R0 = ");
    Serial.println(ratio);
 
    delay(1000);
 
}
