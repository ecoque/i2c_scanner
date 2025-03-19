#include <Wire.h>

void setup() {
  Serial.begin(115200);
  while (!Serial);  
  Serial.println("\nI2C Cihaz Taramasi Basliyor...");

  Wire.begin();
}

void loop() {
  Serial.println("I2C adresleri taraniyor...");

  byte error, address;
  int cihaz_sayisi = 0;

  for (address = 1; address < 127; address++) {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0) {
      Serial.print("I2C cihaz bulundu: 0x");
      Serial.println(address, HEX);
      cihaz_sayisi++;
    }
  }

  if (cihaz_sayisi == 0) {
    Serial.println("Bagli I2C cihaz bulunamadi!");
  } else {
    Serial.print("Toplam ");
    Serial.print(cihaz_sayisi);
    Serial.println(" cihaz bulundu.");
  }

  Serial.println("\nBir sonraki tarama icin bekleniyor...\n");
  delay(5000); 
}
