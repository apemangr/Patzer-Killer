#include <stdio.h>
#include "defs.h"

int main() {

  allInit();

  U64 playBitboard = 0ULL;

  printf("\nStart here\n\n");
  playBitboard |= (1ULL << SQ64(D2));
  playBitboard |= (1ULL << SQ64(H8));
  playBitboard |= (1ULL << SQ64(A2));
  printingBitboard(playBitboard);

  int sq64=0;

  while (playBitboard) {
    sq64= POP(&playBitboard);
    printf("Popped: %d\n", sq64);
    printingBitboard(playBitboard);
  }

  
}
