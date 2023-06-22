int sensor=A2;
void setup() {
  pinMode(A2,INPUT);
  
 Serial.begin(9600);
}

void loop() {
  int x=analogRead(A2);
  
float per=(100-(x/1023.00)*100);
Serial.println(per);


}
