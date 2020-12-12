#include <stdio.h>
#include "defs.h"
#include <stdlib.h>

int main() {

  allInit();

  int pieceone = rand();
  int piecetwo= rand();
  int piecethree= rand();
  int piecefour=rand();


  printf("Piece One: %X   \n", pieceone);
  printf("Piece two: %X   \n", piecetwo);
  printf("Piece three: %X \n", piecethree);
  printf("Piece four: %X  \n", piecefour);

  int key = pieceone ^ piecetwo ^ piecethree ^ piecefour;
  int tempKey = pieceone;
  tempKey ^= piecethree;
  tempKey ^= piecefour;
  tempKey ^= piecetwo;

  printf("Key: %X\n", key);
  printf("TempKey: %X\n", tempKey);
}
