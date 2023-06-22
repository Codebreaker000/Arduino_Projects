#include <NewPing.h>

 
int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int ir1=A2;
int ir2=A3;
int a1=9;
int b2=10;
int c3=11;
int d4=12;
int f5=13;
int g6=A1;
int count=0;
 void setup() {
  for(int i=2;i<=8;i++)
  {
  
  pinMode(i,OUTPUT);
  }
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
 Serial.begin(9600);


}

void loop() {
  int value1=digitalRead(A2);
  int value2=digitalRead(A3);
  Serial.println(value1);
  Serial.println(value2);
  

if (value1==1)
{
  
  if(value2=1)
  {
    count++;
    }
  }

 if (value2==1 & value1==1)
 {
  count--;
  delay(200);
  } 

  
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
  delay(1000);
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
 delay(1000);
 digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,0);
 delay(1000);
 digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
 delay(1000);
 digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
 delay(1000);
 digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
 delay(1000);
 digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
 delay(1000);
 digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
 delay(1000);
 digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
 delay(1000);
}
