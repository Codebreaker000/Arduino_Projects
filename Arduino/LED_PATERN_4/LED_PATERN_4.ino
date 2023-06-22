const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;
void setup() 
{
  
 for (int i=2;i<=8;i++)
 {
 pinMode(i,OUTPUT);
 }  
}

void loop() 
{
 
  for(int i=2;i<8;i++)
 {
   digitalWrite(i,HIGH);
    digitalWrite(i+1,HIGH);
    delay(500);
    digitalWrite(i,LOW);
   digitalWrite(i+1,LOW);
 } 
  for(int j=8;j>2;j--)
  {
   digitalWrite(j,HIGH);
    digitalWrite(j-1,HIGH);
    delay(500);
    digitalWrite(j,LOW);
    digitalWrite(j-1,LOW);
   }
   
 
 }
