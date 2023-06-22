int r=3;
int g=6;
int b=5;

void setup() {
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);

}

void loop() {
  analogWrite(r,148);
  analogWrite(g,0);
  analogWrite(b,211);
  // put your main code here, to run repeatedly:

}
