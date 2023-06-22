int rmp=3;
int rmn=5;
int lmp=6;
int lnm=9;
void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  

}

void loop() {
  digitalWrite(3,1);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(9,0);
  delay(2000);
  digitalWrite(3,0);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(9,1);
  delay(2000);
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,0);
  delay(2000);
  digitalWrite(3,0);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(9,0);
  delay(2000);
  digitalWrite(3,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(9,0);
  delay(2000);
}
