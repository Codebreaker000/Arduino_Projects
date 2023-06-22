int led=5;
void setup() {
  pinMode(5,OUTPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(5,255);
  delay(200);
  analogWrite(5,155);
  delay(2000);

}
