int led=11;
void setup() {
 pinMode(A0,INPUT);
 Serial.begin(9600); 
 pinMode(led,OUTPUT);
}

void loop() {
  int var=analogRead(A0);
  Serial.println(var);
  if(var<=300)
  digitalWrite(led,1);
  else
  digitalWrite(led,0);
 

}  
