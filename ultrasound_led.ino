int TrgPin = A0;
int EcoPin = A1;
int ledPin = 13;
int dist;
void setup()
{   
Serial.begin(9600);
pinMode(TrgPin, OUTPUT);
pinMode(EcoPin, INPUT);
pinMode(ledPin, OUTPUT);
}
void loop()
{
digitalWrite(TrgPin, LOW);
delayMicroseconds(8);
digitalWrite(TrgPin, HIGH);
delayMicroseconds(10);
digitalWrite(TrgPin, LOW);
dist = pulseIn(EcoPin, HIGH) / 58.00;
Serial.print("Distance:");
Serial.print(dist);
Serial.println("cm");
delay(200);

if (dist < 100 ){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
    }
}
