int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int trig=7;
int echo=8;
long duration;
long distance;
int i;
void setup() {
  for(i=2;i<=6;i++)
  {
    pinMode(i,OUTPUT);
    }
  pinMode(7,OUTPUT);
  pinMode(8,INPUT);
  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH);
  distance = duration*0.034/2;
  Serial.println(distance);

  if (distance<=50)
  {
    
   for(i=2;i<=6;i++)
   {
    digitalWrite(i,HIGH);
    delay(200);
    digitalWrite(i,LOW);
    }

    }
else if(distance<=150)
{
   for( i = 2; i<=6 ; i=1+2){
    digitalWrite(1, HIGH);
    delay(100);
    digitalWrite(1, LOW);
    delay(100);}
  for(int i = 6; i>=2 ; i=i-2){
    digitalWrite(1, HIGH);
    delay(100);
    digitalWrite(1, LOW);
    delay(100);}

  }
  else
  {
    for(i=2;i<4;i++)
    {
      digitalWrite(i,HIGH);
      delay(100);
      digitalWrite(i,LOW);
      }
   for(i=6;i>4;i--)
   {
    digitalWrite(i,HIGH);
    delay(100);
    digitalWrite(i,LOW);
    }
    digitalWrite(4,HIGH);
    delay(100);
    digitalWrite(i,LOW);
    }
    
}
