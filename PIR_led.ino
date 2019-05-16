int ledPin = 5;             
int PIR = 2;               
int value = 0;                 
 
void setup() {
  pinMode(ledPin, OUTPUT);     
  pinMode(PIR, INPUT);     
}
 
void loop(){
  value = digitalRead(PIR); 
  if (value == HIGH) {     
    digitalWrite(ledPin, HIGH);  
    }
   else {
    digitalWrite(ledPin, LOW); 
  }
}
