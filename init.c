#include "defs.h"

int sq120ToSq64[BRD_SQ_NUM];
int sq64ToSq120[64];
U64 setMask[64];
U64 clearMask[64];

void initBitMasks() {
  int index = 0;

  for (index=0; index<64; index++) {
    setMask[index]=0ULL;
    clearMask[index]=0ULL;
    
  }
  
  for (index=0; index<64; index++) {
    setMask[index] |= (1ULL << index);
    clearMask[index]= ~setMask[index];
    
  }
}

void initSq120to64() {
  int index = 0;
  int file = FILE_A;
  int rank = RANK_1;
  int sq = A1;
  int sq64 = 0;

  for (index = 0; index < BRD_SQ_NUM; index++) {
    sq120ToSq64[index] = 65;
  }

  for (index = 0; index < 64; index++) {
    sq64ToSq120[index] = 120;
  }

  for (rank = RANK_1; rank <= RANK_8; rank++) {
    for (file = FILE_A; file <= FILE_H; file++) {
      sq = FR2SQ(file, rank);
      sq64ToSq120[sq64] = sq;
      sq120ToSq64[sq] = sq64;
      sq64++;
    }
  }
};

void allInit() {
  initSq120to64();
  initBitMasks();
  }
