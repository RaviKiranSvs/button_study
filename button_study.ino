//  BUTTON_STUDY
//  Shows how to use a keypad without keypad.h
//  You can replace the keypad with pushbuttons(singlestate)
//  The horizontal wires should be connected to dig.pins 2,3,4
//  Vertical -> A0,A1,A2(can be connected to digital pins)
//  Principle of working:
//  Every digital pin goes high one after other.
//  Depending on which analog pin gets a 5V input,
//  the key is determined
//  delay is used to avoid bebouncing
//  Rest is self-explainatory

char c;

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(5,1);
  {
    if(analogRead(0)>1020)
    {Serial.println("1");delay(300);}
    else if(analogRead(1)>1020)
    {Serial.println("2");delay(300);}
    else if(analogRead(2)>1020)
    {Serial.println("3");delay(300);}
    else if(analogRead(3)>1020)
    {Serial.println("A");delay(300);}
  }
  digitalWrite(5,0);

  digitalWrite(4,1);
  {
    if(analogRead(0)>1020)
    {Serial.println("4");delay(300);}
    else if(analogRead(1)>1020)
    {Serial.println("5");delay(300);}
    else if(analogRead(2)>1020)
    {Serial.println("6");delay(300);}
    else if(analogRead(3)>1020)
    {Serial.println("B");delay(300);}
  }
  digitalWrite(4,0);

  digitalWrite(3,1);
  {
    if(analogRead(0)>1020)
    {Serial.println("7");delay(300);}
    else if(analogRead(1)>1020)
    {Serial.println("8");delay(300);}
    else if(analogRead(2)>1020)
    {Serial.println("9");delay(300);}
    else if(analogRead(3)>1020)
    {Serial.println("C");delay(300);}
  }
  digitalWrite(3,0);

  digitalWrite(2,1);
  {
    if(analogRead(0)>1020)
    {Serial.println("*");delay(300);}
    if(analogRead(1)>1020)
    {Serial.println("0");delay(300);}
    if(analogRead(2)>1020)
    {Serial.println("#");delay(300);}
    if(analogRead(3)>1020)
    {Serial.println("D");delay(300);}
  }
  digitalWrite(2,0);
}

