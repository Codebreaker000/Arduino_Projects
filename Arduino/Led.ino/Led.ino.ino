 
const int abc=13;
const int edf=12
;
void setup() {
   
   pinMode(abc,OUTPUT);
   pinMode(edf,OUTPUT);
 


}

void loop() {
  digitalWrite(abc,1);
  digitalWrite(edf,1);
  delay(1000);
  digitalWrite(abc,0);
  digitalWrite(edf,0);
  delay(1000);
  
  

}
