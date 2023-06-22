int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int push1=9;
int push2=10;
int count=0;
 void setup() {
  for(int i=2;i<=8;i++)
  pinMode(i,OUTPUT);
  
  pinMode(push1,INPUT);
  pinMode(push2,INPUT);
  Serial.begin(9600);

 

}
void loop() {
  int value=digitalRead(9);
  int value1=digitalRead(10);
  Serial.println(value);
  Serial.println(value1);
  if(value==1){
   count++;
  delay(200);
  }
  if (value1==1)
{
  count--;
  delay(200);
  }
 
  if(count==0)
 {
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
 }
  
  else if(count==1)
  {
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);

 
}
  else if(count==2)
  {
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,0);
  }
  else if(count==3)
  
  {
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
 }
    else if (count==4)
    {
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
  
 }
 else if(count==5)
 {
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
 }
    else if(count==6)
    {
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
 }
 else if(count==7)
 {
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
 }
 else if(count==8)  
 {
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
 }

 



else if (count>8)
{
 count=0;
  }

}
