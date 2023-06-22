int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
 void setup() {
  for(int i=2;i<=8;i++)
  pinMode(i,OUTPUT);
 

}

void loop() {
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
