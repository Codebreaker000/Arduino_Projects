int lir=7;
int rir=8;
int rmp=3;
int rmn=5;
int lmp=6;
int lnm=9;
void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
}
void loop() {
  int lvalue=digitalRead(7);
  int rvalue=digitalRead(8);

  if (lvalue==0 & rvalue==0)
  {
  digitalWrite(3,1);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(9,0);
    }
    else if (lvalue==0 & rvalue==1)
    {
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(9,0);
      }
    else if(lvalue==1 & rvalue==1)
    {
   digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,0);
      }
      else if(lvalue==1 & rvalue==0)
      {
  digitalWrite(3,180);
  digitalWrite(5,0);
  digitalWrite(6,0);  
  
  digitalWrite(9,0);
  }
    

 

}
