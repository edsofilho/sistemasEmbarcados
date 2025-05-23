const int ledVermelho = 5;
const int ledAmarelo = 6;
const int pinoPot = A5;
int valormed = 0;
byte valordigitado;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  Serial.begin(9600); // para depuração
}

void loop() {
  int leitura = analogRead(pinoPot);
  int valormed = map(leitura, 0, 1023, 0, 270);
  
  
  // Mostra o ângulo no monitor serial
  Serial.print("Angulo: ");
  Serial.println(valormed);

  analogWrite(ledVermelho, valormed);
  delay(100);
  Serial.println(valormed);
  
  if(Serial.available())
  {
    Serial.write(valordigitado);
      }
      valordigitado = Serial.read();
  if (valordigitado == 'E'){
  	digitalWrite(ledAmarelo,HIGH);
  }
  if (valordigitado == 'D'){
  	digitalWrite(ledAmarelo,LOW);
  }
}
