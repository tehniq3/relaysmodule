/*
 * 16 relays module test by Nicu FLORICA (niq_ro)
 */

int n[16] = { 2, 10, 3, 11, 4, 12, 5, 13, 6, 14, 7, 15, 8, 16, 9, 17 } ;
// rel1, rel2, rel3, rel4....rel16

#define repaus 1
#define atras 0
byte j = 0;

void setup() {
 for ( int i = 0; i < 16; ++i ) 
   {
    pinMode(n[i],OUTPUT);
    digitalWrite(n[i], repaus);  
   }
delay(2000);
}

void loop() {
 for ( int i = 0; i < 16; ++i ) 
   {
    digitalWrite(n[i], repaus);  
   }
   
    digitalWrite(n[j], atras);  
    j++;
    if (j>15) j =0;
 delay (2000);
}  // end main loop
