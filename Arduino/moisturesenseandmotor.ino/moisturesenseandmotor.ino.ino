int sensor=A2;
int rmp=3;

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
  
  }
  else
  {
    digitalWrite(3,0);
    }




}
