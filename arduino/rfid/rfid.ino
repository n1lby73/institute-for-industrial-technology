/*
 * 
 * Typical pin layout used:
 * -----------------------------------------------------------------------------------------
 *             MFRC522      Arduino       Arduino   Arduino    Arduino          Arduino
 *             Reader/PCD   Uno/101       Mega      Nano v3    Leonardo/Micro   Pro Micro
 * Signal      Pin          Pin           Pin       Pin        Pin              Pin
 * -----------------------------------------------------------------------------------------
 * RST/Reset   RST          9             5         D9         RESET/ICSP-5     RST
 * SPI SS      SDA(SS)      10            53        D10        10               10
 * SPI MOSI    MOSI         11 / ICSP-4   51        D11        ICSP-4           16
 * SPI MISO    MISO         12 / ICSP-1   50        D12        ICSP-1           14
 * SPI SCK     SCK          13 / ICSP-3   52        D13        ICSP-3           15
 *
 */

#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN         9           // Configurable, see typical pin layout above
#define SS_PIN          10          // Configurable, see typical pin layout above

MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
int dt = 1000;
String key;

void setup() {
    Serial.begin(9600);         // Initialize serial communications with the PC
    while (!Serial);            // Do nothing if no serial port is opened (added for Arduinos based on ATMEGA32U4)
    SPI.begin();                // Init SPI bus
    mfrc522.PCD_Init();         // Init MFRC522 card

    pinMode(7,OUTPUT);
    pinMode(6, OUTPUT);
    }

void dump_byte_array(byte *buffer, byte bufferSize) {
  String card;
  for (byte i = 0; i < bufferSize; i++) {
//    Serial.print(buffer[i] < 0x10 ? " 0" : " ");
//    Serial.print(buffer[i], HEX);
    card+=String(buffer[i],HEX);
  }
  card.toUpperCase();
  Serial.println("");
//  Serial.println(card);
  key = card;
//  Serial.println(bufferSize);
//  char bufferCard[20];
//  card.toCharArray(bufferCard,9);
} 
void loop() {
    // Reset the loop if no new card present on the sensor/reader. This saves the entire process when idle.
    if ( ! mfrc522.PICC_IsNewCardPresent())
        return;

    // Select one of the cards
    if ( ! mfrc522.PICC_ReadCardSerial())
        return;


// mfrc522.PICC_DumpToSerial(&(mfrc522.uid));
dump_byte_array(mfrc522.uid.uidByte, mfrc522.uid.size);
Serial.print("key is: ");
Serial.println(key);

// if(key == "FAE1AB0"){
//
//  digitalWrite(6, HIGH);
//  delay(dt);
//  digitalWrite(6, LOW);
//  
//  }
//
//  else{
//    
//    digitalWrite(7, HIGH);
//    delay(dt);
//    digitalWrite(7, LOW);
//    }

}
