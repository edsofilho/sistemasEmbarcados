const int ledVermelho = 3;
const int ledVerde = 2;
const int ledAmarelo = 4;
const int pinoPot = A5;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  Serial.begin(9600); // para depuração
}

void loop() {
  int leitura = analogRead(pinoPot);
  int angulo = map(leitura, 0, 1023, 0, 270);
  
  // Mostra o ângulo no monitor serial
  Serial.print("Angulo: ");
  Serial.println(angulo);

  // Lógica dos LEDs
  if (angulo >= 130 && angulo<=140) {
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW); 
  }

  if (angulo >= 180 && angulo<185) {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledAmarelo, LOW); 
  }

  if (angulo >=45 && angulo <= 55) {
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, LOW); 
}
} 