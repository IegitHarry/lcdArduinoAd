# 🚌 Humane Transportation LCD Scroller

Prosty program dla platformy Arduino (C++), który wyświetla animowany, przewijany tekst na wyświetlaczu LCD (z wykorzystaniem biblioteki **Adafruit_LiquidCrystal**). Projekt symuluje tablicę informacyjną dla firmy transportowej "Humane Transportation" z danymi adresowymi oraz prostą grafiką tekstową (ASCII art).

## 🚀 Funkcje
* **Dwuliniowy komunikat**: Wyświetla nazwę firmy oraz adres (`Plac Borek 18`).
* **Animacja ASCII**: Zawiera proste ludziki/pojazdy tekstowe (`o   ~_o`, `/|\    |\`).
* **Płynne przewijanie**: Tekst automatycznie przesuwa się w lewą stronę w regularnych odstępach czasu (**200 ms**).
* **Brak blokowania kodu**: Zamiast funkcji `delay()`, do odmierzania czasu użyto funkcji `millis()`, co pozwala na zachowanie responsywności programu.

## 🛠️ Wymagania sprzętowe i programowe

### Sprzęt
* Płytka zgodna z **Arduino** (np. Uno, Nano, Mega)
* Wyświetlacz **LCD 16x2** z pleckami I2C (lub rozszerzaczem MCP23008) obsługiwany przez protokół Adafruit

### Biblioteki
Przed uruchomieniem programu upewnij się, że w swoim IDE masz zainstalowaną bibliotekę:
* **Adafruit LiquidCrystal**

## ⚙️ Jak uruchomić projekt

1. Pobierz i zainstaluj [Arduino IDE](https://arduino.cc).
2. W menedżerze bibliotek (*Szkic -> Dołącz bibliotekę -> Zarządzaj bibliotekami*) wyszukaj i zainstaluj **Adafruit LiquidCrystal**.
3. Podłącz swój wyświetlacz LCD do płytki Arduino zgodnie ze schematem magistrali I2C (SDA -> A4, SCL -> A5 dla Arduino Uno).
4. Sklonuj to repozytorium, otwórz główny plik projektu w Arduino IDE i kliknij **Wgraj (Upload)**.
