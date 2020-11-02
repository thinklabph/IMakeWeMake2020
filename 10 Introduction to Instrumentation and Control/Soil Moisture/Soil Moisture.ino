int moisture;
 
void setup()
{
    Serial.begin(9600);
}
 
void loop()
{
    moisture = analogRead(0);
    Serial.println(moisture);
    delay(50);
}
