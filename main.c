#include <stdio.h>
#include "defs.h"

int main() {

  allInit();
  
  U64 playBitboard = 0ULL;
  int index=0;

  for (index=0; index<64; index++) {
    printf("Index: %d\n", index);
    printingBitboard(setMask[2]);
    printf("\n");
      }

  
}
