// Define o pino analógico onde o potenciômetro está conectado
const int PinoPotenciometro = A0;

// Define o pino digital PWM onde o LED está conectado
const int Led = 11;

// Variável que vai armazenar o valor lido do potenciômetro
int ValorPot = 0;

// Variável que vai armazenar o valor mapeado para o PWM
int pwm = 0;

void setup() {
  // Configura o pino do LED como saída
  pinMode(Led, OUTPUT);
}

void loop() {
  // Lê o valor do potenciômetro (entre 0 e 1023)
  ValorPot = analogRead(PinoPotenciometro);

  // Mapeia o valor lido (0–1023) para a faixa de PWM (0–255)
  pwm = map(ValorPot, 0, 1023, 0, 255);

  // Envia o valor PWM para o pino do LED, controlando seu brilho
  analogWrite(Led, pwm);
}