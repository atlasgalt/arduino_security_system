#define pirPin 2
#define BuzPin 11
void setup()
{
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(BuzPin,OUTPUT);
}

void loop()
{
  int pirVal = digitalRead(pirPin);
  int frequency = map(pirVal, LOW , HIGH, 0, 4500);
  tone (BuzPin, frequency, 10);
}
