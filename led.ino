int LEDpin = 13;
int delayT = 1000;

void setup()
{
  pinMode(LEDpin,OUTPUT);
}

void loop()
{
  digitalWrite(LEDpin,LOW);
  delay(delayT);
   digitalWrite(LEDpin,HIGH);
  delay(delayT);
}