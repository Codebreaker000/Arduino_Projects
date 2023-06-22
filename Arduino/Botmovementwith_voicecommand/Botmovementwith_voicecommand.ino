String value=" ";
int rmp=3;
int rmn=5;
int lmp=6;
int lmn=9;
void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0)
  {
    value=Serial.readString();
    
    }
    Serial.println(value);
    if(value=="forward")
    {
      digitalWrite(3,1);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(9,0);
  delay(2000);
      }

     else if(value=="backward")
     {
      digitalWrite(3,0);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(9,1);
      }

      else if (value=="right")
      {
         digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(9,1);
  delay(200);
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,0);
  
        }

        else if (value=="left")
        {
          digitalWrite(3,1);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(9,0 );
  delay(1000);
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,0);
          }

         else if(value=="stop")
         digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,0);
     

}
