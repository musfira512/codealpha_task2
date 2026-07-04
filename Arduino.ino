int ldr = A0;

void setup()
{
  for(int i = 1; i <= 5; i++)
    pinMode(i, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int light = analogRead(ldr);

  Serial.println(light);

  if(light < 500)   // Dark
  {
    for(int i = 1; i <= 5; i++)
    {
      digitalWrite(i, HIGH);
      delay(200);
      digitalWrite(i, LOW);
    }
  }
  else              // Bright
  {
    for(int i = 1; i <= 5; i++)
      digitalWrite(i, LOW);
  }
}