#include "Wire.h"
extern "C" {
#include "utility/twi.h"  // from Wire library, so we can do bus scanning
}

byte start_address = 0;
byte end_address = 127;

// standard Arduino setup()
void setup()
{
  pinMode(13, OUTPUT);
  while (!Serial);
  delay(1000);
  Wire.begin();
  Serial.begin(9600);
  Serial.println("\nI2CScanner ready!");
}

// standard Arduino loop()
void loop()
{
  Serial.print("starting scanning of I2C bus from ");
  Serial.print(start_address,DEC);
  Serial.print(" to ");
  Serial.print(end_address,DEC);
  Serial.println("...");

  // start the scan, will call "scanFunc()" on result from each address
  //scanI2CBus( start_address, end_address, scanFunc );
  uint8_t data;
  for (uint8_t addr = start_address; addr<=end_address; addr++) {
    Serial.print("addr: 0x");
    Serial.print(addr,HEX);
    if (! twi_writeTo(addr, &data, 0, 1, 1)) {
      Serial.print(": found!");
    } else {
      Serial.print("\t");
    }
    Serial.print( (addr%4 == 3) ? "\n":"\t");
  }
  Serial.println("\ndone");
  delay(2000);
}
