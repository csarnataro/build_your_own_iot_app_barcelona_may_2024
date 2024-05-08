void playTone(uint8_t buzzerPin, unsigned int freq, unsigned long length) {
  tone(buzzerPin, freq);
  delay(length);
  tone(buzzerPin, 0);
}

void playStartTone(uint8_t buzzerPin) {
  playTone(buzzerPin, 3 * 440, 100);
  delay(100);
  playTone(buzzerPin, 4 * 440, 100);
}

void playConnectionTone(uint8_t buzzerPin) {
  playTone(buzzerPin, 4 * 440, 100);
  delay(100);
  playTone(buzzerPin, 3 * 440, 100);

}

void playDisconnectionTone(uint8_t buzzerPin) {
  playTone(buzzerPin, 2 * 440, 400);
  delay(100);
  playTone(buzzerPin, 1 * 440, 400);
  
}