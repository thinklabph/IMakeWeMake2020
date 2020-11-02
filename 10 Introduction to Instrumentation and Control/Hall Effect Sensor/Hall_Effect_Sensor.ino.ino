#define HALL  3
 
void setup() { 
 
  pinMode(HALL, INPUT);   
  attachInterrupt(digitalPinToInterrupt(HALL), doHall, FALLING);
  Serial.begin (9600);
  Serial.print("Begin:");
} 
 
void loop(){

}

void doHall() {
  Serial.println("Hall Effect Sensor Triggered"); 
}
