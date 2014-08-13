#define pirPin 2
#define LedPin 9
void setup()
{
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(LedPin,OUTPUT);
}

void loop()
{
  int pirVal = digitalRead(pirPin);
    //Если обнаружили движение
  if(pirVal == HIGH)
  {
    analogWrite(LedPin, HIGH);
    delay(2000);
  }
  else
  {
    analogWrite(LedPin,LOW);
  }
}  
