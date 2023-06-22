int led=6;
int ir=7;
void setup() {
 pinMode(led,OUTPUT);
 pinMode(ir,INPUT);
 Serial.begin(9600);

}

void loop() {
 int value=digitalRead(7);
 if(value==0)
 {
  digitalWrite(led,1);
  }
  else
  {
  digitalWrite(led,0);
  }
 
 Serial.println(value);
 

}
