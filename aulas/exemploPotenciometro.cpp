int pot = A5;
int led = 13;
int valormed = 0;

void setup(){
pinMode(led, OUTPUT);
}

void loop(){
	valormed = analogRead(pot);
  	digitalWrite(led, HIGH);
  	delay (valormed);
  	digitalWrite(led, LOW);
  	delay (valormed);
  	Serial.println(valormed);
  	delay(500);
}