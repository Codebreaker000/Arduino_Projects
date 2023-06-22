#include <Servo.h>
#include <Keypad.h>
Servo ServoMotor;
char * password = "953A";  // change the password here, pick any 3 numbers
int position = 0;
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}
};
byte rowPins[ROWS] = { 8, 7, 6, 9 };
byte colPins[COLS] = { 5, 4, 3, 2 };
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


void setup()
{
ServoMotor.attach(11);
LockedPosition(true);
Serial.begin(9600);
}

void loop()
{
char key = keypad.getKey();
Serial.print(key);
if (key == '*' || key == '#')
{
position = 0;
LockedPosition(true);

}
if (key == password[position])
{
position ++;

}
if (position == 4)
{
LockedPosition(false);
}
delay(100);
}
void LockedPosition(int locked)
{
if (locked)
{

ServoMotor.write(11);
}
else
{
ServoMotor.write(90);
}
}
