const int buzzer = 8;
const int flamePin = 2;
int Flame = LOW; 

void setup() 
{ 
pinMode(buzzer, OUTPUT); 
pinMode(flamePin, INPUT);
 Serial.begin(9600);
 }
 
void loop() 
{
  Flame = digitalRead(flamePin);
  if (Flame== HIGH)
  { Serial.println("Fire is Detected");
   tone(buzzer, 1000); 
   delay(1000);
   tone(buzzer, 2000); 
   delay(1000);
   tone(buzzer, 1000); 
   delay(1000);
   tone(buzzer, 2000); 
   delay(1000);
  } 
  else
  { 
   Serial.println("No Fire is Detected");
   noTone(buzzer);
  }
  delay(1000);
}