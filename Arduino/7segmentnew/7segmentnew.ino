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
  for(int i=2;i<9;i++)//zero
  {
    if(i==8)
    {
      digitalWrite(i,HIGH);
      }
      else
      {
      digitalWrite(i,LOW);
    }
  }
  delay(1000);

  
  for(int i=2;i<9;i++)//one
  {
    if(i==3 | i==4)
    {
      digitalWrite(i,LOW);
      }
      else
      {
      digitalWrite(i,HIGH);
    }
  }
  delay(1000);

  
  for(int i=2;i<9;i++)//two
  {
    if(i==2 | i==3 | i==8 | i==6 | i==5 )
    {
      digitalWrite(i,LOW);
      }
      else
      {
      digitalWrite(i,HIGH);
    }
  }
  delay(1000);

  
  for(int i=2;i<9;i++)//three
  {
    if(i==6 | i==7)
    {
      digitalWrite(i,HIGH);
      }
      else
      {
      digitalWrite(i,LOW);
    }
  }
  delay(1000);


  for(int i=2;i<9;i++)//four
  {
    if(i==6 | i==7)
    {
      digitalWrite(i,HIGH);
      }
      else
      {
      digitalWrite(i,LOW);
    }
  }
  delay(1000);


  for(int i=2;i<9;i++)
  {
    if(i== | i==7)
    {
      digitalWrite(i,HIGH);
      }
      else
      {
      digitalWrite(i,LOW);
    }
  }
  delay(1000);


  
    
    


}
