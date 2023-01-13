#include <LiquidCrystal.h>

int rs = 2;
int en = 3;
int d0 = 4;
int d1 = 5;
int d2 = 6;
int d3 = 7;

LiquidCrystal lcd (rs, en, d0, d1, d2, d3);

void setup() {

  lcd.begin(16, 2);

}

void loop() {
  
    lcd.setCursor(0, 0);
    lcd.print("soil moisture: ");
    delay(200);
//  lcd.clear();

    lcd.setCursor(0, 1);
    lcd.print("water level: ");
    delay(200);
  }
