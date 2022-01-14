/* inputs of L298N module */
#define ENA 11
#define IN1 10
#define IN2 9
#define IN3 8
#define IN4 7
#define ENB 6

void setup(){
	pinMode(ENA, OUTPUT);
	pinMode(IN1, OUTPUT);
	pinMode(IN2, OUTPUT); 
	pinMode(IN3, OUTPUT);
	pinMode(IN4, OUTPUT);
	pinMode(ENB, OUTPUT);
	setMotorAForward();
	setMotorBBackward();	

}

void loop(){
	digitalWrite(ENA, HIGH);
	digitalWrite(ENB, HIGH);
	delay(1000);
	digitalWrite(ENA, LOW);
	digitalWrite(ENB, LOW);
	delay(1000);
}

void setMotorAForward(){
	digitalWrite(IN1, HIGH);
	digitalWrite(IN2, LOW);
}

void setMotorABackward(){
	digitalWrite(IN1, LOW);
	digitalWrite(IN2, HIGH);
}

void setMotorBForward(){
	digitalWrite(IN3, HIGH);
	digitalWrite(IN4, LOW);
}

void setMotorBBackward(){
	digitalWrite(IN3, LOW);
	digitalWrite(IN4, HIGH);	
}


