#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();
const int sensorPin = 34; // Pino ADC do ESP32 conectado ao divisor de tensão

void setup() {
  tft.init();
  tft.setRotation(2);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE);
  tft.drawCentreString("Leitura de Pressão", 160, 30, 4);
}

void loop() {
  int leituraADC = analogRead(sensorPin);
  
  // Converte ADC para tensão medida no ESP32 (0 a 3.3V)
  float tensaoESP = (leituraADC * 3.3) / 4095.0;
  
  // Ajusta a tensão para refletir a real (multiplica por 2 por causa do divisor)
  float tensaoSensor = tensaoESP * 2.0; 

  // Calcula a pressão em kPa com a equação corrigida
  float pressao_kPa = (tensaoSensor - 0.5) / 0.0064; 

  // Converte para Bar
  float pressao_Bar = pressao_kPa / 100.0;

  // Limpa a área do display antes de exibir o novo valor
  tft.fillRect(70, 100, 200, 70, TFT_BLACK);

  tft.setTextColor(TFT_GREEN);
  tft.drawCentreString(String(pressao_Bar, 2), 160, 120, 6);

  delay(500); // Atualiza a cada 500ms
}
