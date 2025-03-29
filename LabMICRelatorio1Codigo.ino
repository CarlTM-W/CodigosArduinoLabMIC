// Definição dos pinos
int led1 = 10;          // Pino digital 10 conectado ao LED (indicador visual)
int botao = 2;          // Pino digital 2 conectado ao push button (entrada)
int valorLido = 0;      // Variável para armazenar o valor lido do botão (HIGH ou LOW)

void setup() {
  // Configuração inicial dos pinos:
  pinMode(botao, INPUT);   // Configura o pino do botão como entrada
  pinMode(led1, OUTPUT);   // Configura o pino do LED como saída
}

void loop() {
  // Leitura do estado do botão:
  valorLido = digitalRead(botao); // Lê o valor lógico do botão (HIGH ou LOW, Alto ou Baixo, 0 ou 1)

  // Verifica se o botão foi pressionado:
  if (valorLido == HIGH) {
    digitalWrite(led1, HIGH);     // Se o botão estiver pressionado, acende o LED
  } else {
    digitalWrite(led1, LOW);      // Caso contrário, apaga o LED
  }
  
  // O código repete constantemente a leitura e a verificação
  // para manter o funcionamento dinâmico do circuito.
}
