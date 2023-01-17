int WATER = A1;
int RAIN = A2;
int FIRE = A3;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  Serial.begin(9600);
}

void loop()
{
  WATER = digitalRead(A1); //reading coming signal from soil sensor
  RAIN = digitalRead(A2); //reading coming signal from rain sensor
  FIRE = digitalRead(A3); //reading coming signal from flame sensor
  water();
  rain();
  fire();
}
void water()
{
  if (WATER == HIGH)      //IF WATER LEVEL IS FULL THEN CUT THE RELAY
  {
    digitalWrite(13, LOW);   //LOW IS TO CUT THE RELAY
  }
  else
  {
    digitalWrite(13, HIGH);   //HIGH TO CONTINUE PROVING SIGNAL AND WATER SUPPLY
  }
  delay(400);
}
void rain()
{
  if (RAIN == LOW)
  {
    digitalWrite(9,HIGH);
  }
  else
  {
    digitalWrite(9, LOW);
  }
  delay(1000);
}
void fire()
{
  if (FIRE == LOW)
  {
    digitalWrite(9, HIGH);
  }
  else
  {
    digitalWrite(9, LOW);
  }
  delay(600);

}
