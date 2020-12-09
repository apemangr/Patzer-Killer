#include <stdio.h>
#include "defs.h"

int main() {

  allInit();

  U64 playBitboard = 0ULL;

  printf("\nStart here\n\n");
  printingBitboard(playBitboard);



  playBitboard |= (1ULL << SQ64(D2));
  
  printf("\nStart here\n\n");
  printingBitboard(playBitboard);


  playBitboard |= (1ULL << SQ64(H8));
  
  printf("\nStart here\n\n");
  printingBitboard(playBitboard);


  
 
}
