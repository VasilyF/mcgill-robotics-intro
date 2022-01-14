#include <HCSR04.h>
#define TRIG 4
#define ECHO 5

UltraSonicDistanceSensor sensor(TRIG, ECHO);

void setup(){
	Serial.begin(9600);
}

void loop(){
	float dist = sensor.measureDistanceCm();
	Serial.println(dist);
	delay(500);
}
