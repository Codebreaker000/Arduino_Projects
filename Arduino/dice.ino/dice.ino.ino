int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int push1=9;
int x;
void setup() {
  for(int i=2;i<=8;i++)
  pinMode(i,OUTPUT);
  
  pinMode(push1,INPUT);
  Serial.begin(9600);
}
void loop() {
  int value=digitalRead(9);
  if(value==1)
  {
    x=random(1,7);
  }
  Serial.println(x);
  if(x==1) 
{ 
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);  }
  else if(x==2){
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,0);
  }
  else if(x==3){
  digitalWrite(a,0);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
 }
  else if(x==4){
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
  
  }
  else if(x==5){
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,0);
  }
  else if(x==6){
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
    
    }
    

}
