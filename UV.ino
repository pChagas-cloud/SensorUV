#include <LiquidCrystal.h>


#define uvPin A3

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int leituraUV=0;
byte indiceUV=0;


float constHeli = 0.670;

void setup() {

Serial.begin(9600);

lcd.begin(16,2);

pinMode(uvPin, INPUT);




}

void loop() {


  delay(1000);

  //---------------------------------------------//

  leituraUV = analogRead(uvPin);
  indiceUV = map(leituraUV, 0,203,0,10);


  Serial.println("Indice UV:");
  Serial.println(indiceUV);
  Serial.println();
  Serial.println("------------------------------");
  Serial.println();
  Serial.println();
  Serial.println();

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Indice UV:");
  lcd.print(indiceUV);
  delay(500);

  
  


}
