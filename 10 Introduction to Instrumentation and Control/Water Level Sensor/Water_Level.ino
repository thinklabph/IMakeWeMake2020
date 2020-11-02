#define floatswitch 3
 
void setup() { 
  pinMode(floatswitch, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(floatswitch), dofloat, FALLING); 
  Serial.begin (9600);
} 
 
void loop(){
}

void dofloat() {
  Serial.println("Switch is triggered"); 
  }
