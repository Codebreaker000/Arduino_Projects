int pushbutton=2;
int led=3;
int led_1=4;
void setup() {
  pinMode(pushbutton,INPUT);
  pinMode(led,OUTPUT);
  

}

void loop() {
  if(digitalRead(pushbutton)==HIGH)
  {
  digitalWrite(led,HIGH);
  digitalWrite(led_1,LOW);
  }

  else
  {
  
  digitalWrite(led_1,HIGH);
  digitalWrite(led,LOW);
  }

}
