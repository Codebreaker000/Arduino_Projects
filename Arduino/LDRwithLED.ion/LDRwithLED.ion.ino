int led=5;
void setup() {
  pinMode(5,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  int ldr = analogRead(A0);
  int x=map(ldr,40,700,0,255);
  analogWrite(5,x);
  Serial.println(ldr);
}
