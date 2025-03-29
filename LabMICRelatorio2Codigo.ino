// Definição dos pinos
const int PinoPotenciometro = A0; // Pino analógico A0 conectado ao potenciômetro
const int Led = 13; // Pino digital 13 conectado ao LED

int ValorPot = 0; // Variável para armazenar a leitura do potenciômetro

void setup() {
  // Configuração inicial dos pinos:
  pinMode(Led, OUTPUT); // Configura o pino do LED como saída
}

void loop() {
  // Leitura do valor do potenciômetro:
  ValorPot = analogRead(PinoPotenciometro); // Lê o valor analógico do potenciômetro (0 a 1023)

  // Acende o LED por um tempo proporcional ao valor lido
  digitalWrite(Led, HIGH); 
  delay(ValorPot); 

  // Apaga o LED pelo mesmo tempo antes de repetir o ciclo
  digitalWrite(Led, LOW); 
  delay(ValorPot); 
   
  // O código repete continuamente, ajustando o tempo do LED conforme o potenciômetro.
}
