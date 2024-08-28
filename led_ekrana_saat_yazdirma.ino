#include <LiquidCrystal.h>
#include <RealTimeClockDS1307.h>

int CLK_PIN = 6, DAT_PIN = 7, RST_PIN = 8;
virtuabotix myRTC(CLK_PIN, DAT_PIN, RST_PIN); // LED EKRAN AYARLAMASI

int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, ex, d4, d5, d6, d7); // SAAT MODÜLÜNÜN AYARLANMASI

void setup() {
   lcd.begin(16,2); // EKRANIN SATIR VE SÜTUN GENİŞLİĞİNİN BELİRTİLMESİ
}

void loop() {
  myRTC.updateTime(); // ZAMANIN UPDATE EDİLMESİ
  lcd.clear(); // EKRANIN TEMİZLENMESİ

  lcd.setCursor(0,0); // 1. SATIR VE 1. SÜTUNA GEÇİLMESİ
  lcd.print(myRTC.dayofmonth); // AYIN GÜNÜNÜN YAZDIRILMASI
  lcd.print("/");
  lcd.print(myRTC.month); // AYIN YAZDIRILMASI
  lcd.print("/");
  lcd.print(myRTC.year); // YILIN YAZDIRILMASI

  lcd.setCursor(0,1); // 0. SATIR VE 2. SÜTUNA GEÇİLMESİ
  lcd.print(myRTC.seconds); // SANİYENİN YAZDIRILMASI
  lcd.print(":");
  lcd.print(myRTC.minutes); // DAKİKANIN YAZDIRILMASI
  lcd.print(":");
  lcd.print(myRTC.hours); // SAATİN YAZDIRILMASI
}
