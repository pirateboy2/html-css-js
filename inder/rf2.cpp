#include <LiquidCrystal.h>
#include <stdio.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

const int RedLED = 5;
const int GreenLED = 6;
const int Buzzer = 7;

int count = 0;
char c;
String id;

int wait = 5000;
String password = "1234"; // Set your password here

bool isAuthenticated = false;

void setup() {
  Serial.begin(9600);
  pinMode(RedLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  Serial.println("Please enter the password:");

  lcd.begin(20, 6);
  lcd.setCursor(0, 0);
  lcd.print("  PETROL DISPENSING ");
  lcd.setCursor(0, 1);
  lcd.print(" RFID BASED SYSTEM");
  lcd.setCursor(0, 2);
  lcd.print(" Enter Password: ");
  lcd.setCursor(0,3)
  lcd.print(" CARD:   ");
  lcd.setCursor(0, 4);
  lcd.print(" BALANCE:   ");
}

void loop() {
  while (!isAuthenticated) {
    while (Serial.available() > 0) {
      c = Serial.read();
      if (c != '\n') {
        id += c;
        lcd.setCursor(id.length() + 16, 2);
        lcd.print('*'); // Display asterisks for each character entered
      } else {
        if (id == password) {
          isAuthenticated = true;
          lcd.clear();
          lcd.print(" Password accepted ");
          delay(2000);
          lcd.clear();
          lcd.print("Please scan your");
          lcd.setCursor(0, 1);
          lcd.print("RFID Card");
        } else {
          lcd.clear();
          lcd.print("Invalid Password");
          delay(2000);
          lcd.clear();
          lcd.print("Enter Password:");
        }
        id = "";
      }
    }
  }

  // Rest of the RFID code (after authentication)
  // ...
}

