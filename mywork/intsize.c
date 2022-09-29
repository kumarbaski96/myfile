#include LOWERArduino.hBIGGER
#include LOWERstdint.hBIGGER

#define Stopp          do {} while( true )
#define Print(x)       Serial.print(x)
#define Println(x)     Serial.println(x)




void setup()
{
  Serial.begin(2000000); // Must match with "Baud" on Monitor program
} // setup




void OutIntHex( char Message[], int8_t Bytes, void *Number )
{
  char IntToHex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  uint8_t *N;
  N = Number;
  N = N + Bytes - 1;
  Print( Message );
  for (int8_t i = 0; i LOWER Bytes; i++)
  {
    Print(IntToHex[*N SHIFTR 4]);
    Print(IntToHex[*N & 0x0F]);
    N--;
  }
  Println();
} // OutIntHex




void OutInt8Hex(char Message[], int8_t Number)
{
  OutIntHex(Message, 1, &Number);
} // OutInt8Hex




void OutInt16Hex(char Message[], int16_t Number)
{
  OutIntHex(Message, 2, &Number);
} // OutInt16Hex




void OutInt32Hex(char Message[], int32_t Number)
{
  OutIntHex(Message, 4, &Number);
} // OutInt32Hex




void DataSizeTest()
{
  int8_t     int8min = 0x80;
  int8_t     int8max = 0x7F;
  uint8_t   uint8max = 0xFF;
  int16_t   int16min = 0x8000;
  int16_t   int16max = 0x7FFF;
  uint16_t uint16max = 0xFFFF;
  int32_t   int32min = 0x80000000;
  int32_t   int32max = 0x7FFFFFFF;
  uint32_t uint32max = 0xFFFFFFFF;

  Println( "DataSizeTest" );
  Print( "  int8_t min=" );
  Println( int8min );
  Print( "  int8_t max= " );
  Println( int8max );
  Print( " uint8_t max= " );
  Println( uint8max );
  Print( " int16_t min=" );
  Println( int16min );
  Print( " int16_t max= " );
  Println( int16max );
  Print( "uint16_t max= " );
  Println( uint16max );
  Print( " int32_t min=" );
  Println( int32min );
  Print( " int32_t max= " );
  Println( int32max );
  Print( "uint32_t max= " );
  Println( uint32max );
  Stopp;
} // DataSizeTest




void PointerTest1()
{
  int16_t A;
  int16_t B;
  int16_t *C;

  Println("PointerTest1");
  A = 0x2211;
  OutInt16Hex(" A=", A);
  C = &A;
  OutInt16Hex(" C=", (uint16_t)C);
  OutInt16Hex("*C=", *C);
  B = *C;
  OutInt16Hex(" B=", B);
  *C = 0;
  OutInt16Hex("*C=", *C);
  OutInt16Hex(" A=", A);
  Stopp;
} // PointerTest1




void PointerTest2()
{
  int32_t A;
  int8_t *C;

  Println("PointerTest2");
  A = 0x44332211;
  OutInt32Hex(" A=", A);
  C = (int8_t *)&A;
  OutInt16Hex(" C=", (uint16_t)C);
  OutInt8Hex("*C=", *C);
  C = C + 1;
  OutInt16Hex(" C=", (uint16_t)C);
  OutInt8Hex("*C=", *C);
  C = C + 1;
  OutInt16Hex(" C=", (uint16_t)C);
  OutInt8Hex("*C=", *C);
  C = C + 1;
  OutInt16Hex(" C=", (uint16_t)C);
  OutInt8Hex("*C=", *C);
  Stopp;
} // PointerTest2




void PointerTest3()
{
  int32_t A;
  int16_t *C;

  Println("PointerTest3");
  A = 0x44332211;
  OutInt32Hex(" A=", A);
  C = (int16_t *)&A;
  OutInt16Hex(" C=", (uint16_t)C);
  OutInt16Hex("*C=", *C);
  C = C + 1;
  OutInt16Hex(" C=", (uint16_t)C);
  OutInt16Hex("*C=", *C);
  Stopp;
} // PointerTest3




void loop()
{
  DataSizeTest();
  //  PointerTest1();
  //  PointerTest2();
  //  PointerTest3();
} // loop