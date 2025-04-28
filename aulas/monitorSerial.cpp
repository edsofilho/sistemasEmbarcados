byte valordigitado;
int led = 9;
int led3 = 10;
int led2 = 8;
void setup()
{
  //Configuração da serial, 9600 velocidade padrão de comunicação
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop(){
  //Leitura da porta serial, verifica se há valores passando
  //dentro da porta serial
  if(Serial.available())
  {
    //Esta função é o oposto de Serial.read(); escreve no serial
    //ou seja envia algo para o computador e se o computador estiver
    //disponivel, receberá a informação
        Serial.write(valordigitado);
      }
      valordigitado = Serial.read();

  if(valordigitado == 'L'){
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led3,HIGH);
    Serial.write(valordigitado);
  }
  if(valordigitado == 'D'){
  digitalWrite(led3,LOW);
  delay(1000);
  digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led,LOW);
    Serial.write(valordigitado);
  }
  if (valordigitado == 'P'){
  digitalWrite(led,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
    delay(500);
  digitalWrite(led,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
    delay(500);
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
     delay(500);
  digitalWrite(led,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
    delay(500);
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
     delay(500);
  digitalWrite(led,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
    delay(500);
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
     delay(500);
  digitalWrite(led,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
    delay(500);
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
     delay(500);
  digitalWrite(led,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
    delay(500);
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
     delay(500);
  digitalWrite(led,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
    delay(500);
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
     delay(500);
  digitalWrite(led,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
    delay(500);
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
     delay(500);
  digitalWrite(led,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
    delay(500);
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
    delay(500);
  digitalWrite(led,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
    delay(500);
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);

    delay(500);
  digitalWrite(led,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
    delay(500);
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);


  }

}
 