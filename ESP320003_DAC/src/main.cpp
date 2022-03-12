#include <Arduino.h>

//formula A * Sin (2*PI*f*(j*PI/180)) + B)

double j = 0;
#define A 127
#define f 50 
#define B 128
#define Salida 26


void setup() {
  // put your setup code here, to run once:
}

void loop() {
  
  for(j=0; j<360; j+=0.00120){
    dacWrite(Salida, A*sin(2*PI*f*(j*PI/180)) + B);
  }


}