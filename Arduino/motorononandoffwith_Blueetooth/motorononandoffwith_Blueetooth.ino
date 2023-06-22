
int rmp=3;
char value;


void setup() {
 
  pinMode(3,OUTPUT);
Serial.begin(9600);
}

void loop() {
  
  if(Serial.available()>0)
  {
    value=Serial.read();
    Serial.println(value);
    }
    if(value=='1')
     {
    digitalWrite(3,1);
    }
    
    else
    {
    digitalWrite(3,0);
    }





}
