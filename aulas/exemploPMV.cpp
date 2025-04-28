int pot = A5;
int led = 13;
int valormed = 0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valormed = map(analogRead(pot), 0, 1023, 0, 255);
  
  // Ajustar o brilho do led 
  analogWrite(led, valormed);
  delay(100);
  Serial.println(valormed);
}
