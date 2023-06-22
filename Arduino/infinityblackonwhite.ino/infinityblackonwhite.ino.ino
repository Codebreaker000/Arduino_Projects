int ir1=2;
int ir2=3;
int rmp=4;
int rmn=5;
int lmp=6;
int lmn=7;
int x;
int y;
int i;
void setup() {
  for(i=4;i<=7;i++)
  {
    pinMode(i,OUTPUT);
    }
    pinMode(2,INPUT);
    pinMode(3,INPUT);

}

void loop() {
  x=digitalRead(2);
  y=digitalRead(3);

  if (x==1 & y==1)
  {
    digitalWrite(4,1);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    
    }

    else if(x==0 & y==1)
    {
      digitalWrite(4,0);
      digitalWrite(5,0);
      digitalWrite(6,1);
      digitalWrite(7,1);
      }

      else if(x==1 & y==0)
    {
      digitalWrite(4,1);
      digitalWrite(5,1);
      digitalWrite(6,0);
      digitalWrite(7,0);
      }

     
        
}
