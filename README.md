# Real-Time Clock Display Project / Gerçek Zamanlı Saat Gösterimi Projesi

## Overview / Genel Bakış

This project uses an Arduino microcontroller, a LiquidCrystal display, and a RealTimeClockDS1307 module to display the current date and time. The LCD screen shows the date in `DD/MM/YYYY` format on the first line and the time in `SS:MM:HH` format on the second line.

Bu proje, bir Arduino mikrodenetleyici, bir LiquidCrystal ekran ve bir RealTimeClockDS1307 modülü kullanarak mevcut tarihi ve saati görüntüler. LCD ekran, tarihi ilk satırda `GG/AA/YYYY` formatında ve zamanı ikinci satırda `SS:DD:SS` formatında gösterir.

## Components Used / Kullanılan Bileşenler

- **Arduino Board** (e.g., Arduino Uno) / **Arduino Kartı** (ör. Arduino Uno)
- **LiquidCrystal Display** (16x2 character display) / **LiquidCrystal Ekranı** (16x2 karakter ekran)
- **RealTimeClockDS1307 Module** (RTC module for keeping accurate time) / **RealTimeClockDS1307 Modülü** (Doğru zamanı tutmak için RTC modülü)
- **Jumper Wires** (for connections) / **Jumper Kabloları** (bağlantılar için)

## Circuit Diagram / Devre Şeması

1. **LiquidCrystal Display**:
   - `RS` pin: Arduino pin 12
   - `EN` pin: Arduino pin 11
   - `D4` pin: Arduino pin 5
   - `D5` pin: Arduino pin 4
   - `D6` pin: Arduino pin 3
   - `D7` pin: Arduino pin 2

2. **RealTimeClockDS1307 Module**:
   - `CLK` pin: Arduino pin 6
   - `DAT` pin: Arduino pin 7
   - `RST` pin: Arduino pin 8

1. **LiquidCrystal Ekranı**:
   - `RS` pini: Arduino pini 12
   - `EN` pini: Arduino pini 11
   - `D4` pini: Arduino pini 5
   - `D5` pini: Arduino pini 4
   - `D6` pini: Arduino pini 3
   - `D7` pini: Arduino pini 2

2. **RealTimeClockDS1307 Modülü**:
   - `CLK` pini: Arduino pini 6
   - `DAT` pini: Arduino pini 7
   - `RST` pini: Arduino pini 8

## Software Requirements / Yazılım Gereksinimleri

- **Arduino IDE** (for writing and uploading code to the Arduino) / **Arduino IDE** (Arduino'ya kod yazmak ve yüklemek için)
- **Libraries**:
  - `LiquidCrystal` (for LCD control) / `LiquidCrystal` (LCD kontrolü için)
  - `RealTimeClockDS1307` (for RTC control) / `RealTimeClockDS1307` (RTC kontrolü için)

## Installation / Kurulum

1. **Library Installation** / **Kütüphane Kurulumu**:
   - Open the Arduino IDE. / Arduino IDE'yi açın.
   - Go to `Sketch` -> `Include Library` -> `Manage Libraries`. / `Sketch` -> `Include Library` -> `Manage Libraries` seçeneğine gidin.
   - Search for and install `LiquidCrystal` and `RealTimeClockDS1307` libraries. / `LiquidCrystal` ve `RealTimeClockDS1307` kütüphanelerini aratın ve yükleyin.

2. **Wiring** / **Bağlantılar**:
   - Connect the LCD display and RTC module to the Arduino as per the pin configuration mentioned above. / LCD ekranı ve RTC modülünü yukarıda belirtilen pin konfigürasyonuna göre Arduino'ya bağlayın.

3. **Upload the Code** / **Kodu Yükleyin**:
   - Copy the provided code into a new sketch in the Arduino IDE. / Sağlanan kodu Arduino IDE'de yeni bir skete kopyalayın.
   - Connect the Arduino to your computer using a USB cable. / Arduino'yu bir USB kablosuyla bilgisayarınıza bağlayın.
   - Select the correct board and port in the Arduino IDE. / Arduino IDE'de doğru kart ve portu seçin.
   - Upload the sketch to the Arduino. / Kodu Arduino'ya yükleyin.

## License / Lisans

This project is licensed under the MIT License. See the LICENSE file for details. / Bu proje MIT Lisansı altında lisanslanmıştır. Detaylar için LICENSE dosyasına bakın.
