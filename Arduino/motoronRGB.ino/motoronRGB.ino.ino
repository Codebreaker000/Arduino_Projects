int sensor=A2;
int rmp=3;
int led1=9;
int led2=10;


void setup() {
  pinMode(A2,INPUT);
  pinMode(3,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  int x=analogRead(A2);
  
float per=(100-(x/1023.00)*100);
Serial.println(per);

if(per<=40)
{
  digitalWrite(3,1);
  analogWrite(led1,250);
  analogWrite(led2,0);
  }
  else
  {
    digitalWrite(3,0);
    
    analogWrite(led2,250);
    analogWrite(led1,0);
    }




}
