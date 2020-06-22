int i=0;
void setup()
{
  for(i=0;i<8;i++)
  {
  pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=0;i<8;i=i+2)
  {
  digitalWrite(i, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
  for(i=7;i>=0;i=i-2)
  {
  digitalWrite(i, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
}