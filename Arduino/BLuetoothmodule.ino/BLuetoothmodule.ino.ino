 int led=11;
 char value;
 void setup() {
  pinMode(11,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {   
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    value=Serial.read();
    Serial.println(value);
    }
    if(value=='1')
     {
     digitalWrite(11,HIGH); 
    }
    
    else
    {
    digitalWrite(11,LOW);
    }

}
