int led_1=2;
int led_2=3;
int led_3=4;
int led_4=5;
int led_5=6;
int led_6=7;
int led_7=8;
void setup()
{
  for(int i=2; i<=8; i++)
  {
    pinMode(i,OUTPUT);
  }
}
void loop()
{
  for(int i=2;i<=8;i++)
  {
    
    digitalWrite(i,HIGH);
    digitalWrite(10-i,HIGH);
    digitalWrite(i,LOW);
    
  }
}

 
