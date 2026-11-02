// C++ code
//
#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

unsigned long counter = millis();

void phase1() {
  lcd.print("Humane Transportation    o   ~_o    |   ");
  lcd.setCursor(0, 1);
  lcd.print("    Plac Borek 18       /|\\    |\\   |   ");
}
void setup() {
  lcd.begin(16, 2);
  lcd.setBacklight(1);
  
  phase1();
}

void loop() {
  for (int positionCounter = 0; positionCounter < 100; positionCounter++) {
    if(millis() - counter >= 200) {
    	lcd.scrollDisplayLeft();
      	counter = millis();
    }
  }
}
