#include <Arduino.h>

#define leftA 2
#define leftB 3
#define leftPWM 4
#define rightA 5
#define rightB 6
#define rightPWM 7

void setup() {
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(7, OUTPUT);

	delay(100);

	digitalWrite(leftA, HIGH);
	digitalWrite(leftB, LOW);
	analogWrite(leftPWM, 200);
	delay(1000);
	analogWrite(leftPWM, 0);
}

void loop() {

}
