#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define sensorOut 8
int frequency = 0;
void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
 
  digitalWrite(S0,LOW);
  digitalWrite(S1,HIGH);
  
  Serial.begin(9600);
}
void loop() {
  
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  delay(100);
  frequency = pulseIn(sensorOut, LOW);

  Serial.print("R= ");
  Serial.print(frequency);
  Serial.print("  ");
  
  
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  delay(100);
  frequency = pulseIn(sensorOut, LOW);
 
  Serial.print("G= ");
  Serial.print(frequency);
  Serial.print("  ");
  
  
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  delay(100);
  frequency = pulseIn(sensorOut, LOW);
  
  Serial.print("B= ");
  Serial.print(frequency);
  Serial.println("  ");

}
