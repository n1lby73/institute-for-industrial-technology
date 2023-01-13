#include <LiquidCrystal.h>

int rs = 2;
int en = 3;
int d0 = 4;
int d1 = 5;
int d2 = 6;
int d3 = 7;
int i = 0;

LiquidCrystal lcd (rs, en, d0, d1, d2, d3);

void setup() {

  lcd.begin(16, 2);

}

void loop() {

  for (i; i <= 31; i++ ) {

    lcd.setCursor(0, 0);
    lcd.scrollDisplayLeft();
    lcd.print("Introduction to embedded system");
    delay(200);
    lcd.noAutoscroll();

  }
  lcd.clear();

  int names = 0;

  while (names <= 1) {

    lcd.setCursor(0, 0);
    lcd.print("BY.....");
    lcd.setCursor(0, 1);
    lcd.scrollDisplayLeft();
    lcd.print("Stanley,Josiah,Gabriel");
    delay(200);
  }


}
