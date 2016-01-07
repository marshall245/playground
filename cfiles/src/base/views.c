#include <stdio.h>
#include "matrixdef.h"

void simple_print(matrixPtr aPtr) {
  size_t i, j;
  puts("");
  for (i=0; i<(aPtr->rows); i++) {
    for (j=0; j<(aPtr->cols); j++) {
      printf("%8.2g ", (aPtr->array)[i][j]);
    }
    puts("");
  }
  puts("");
}

void big_print(matrixPtr aPtr) {
  if ((aPtr->rows<7) && (aPtr->cols<7)) {
    simple_print(aPtr);
    return;
  }
  size_t i, j;
  unsigned long rmax, cmax;
  rmax = aPtr->rows;
  cmax = aPtr->cols;
  puts("");
  for (i=0; i<aPtr->rows; i++) {
    for (j=0; j<aPtr->cols; j++) {
      if ((i < 3) || (i > rmax - 4)) {
	if ((j < 3) || (j > cmax - 4)) {
          printf("%8.2g ", (aPtr->array)[i][j]);
        } else if ((j > 2) && (j < 6)) {
          printf("%s", " . ");
        }
      } else if (((i > 2) && (i < 6)) && ((j == 0))) {
        printf("%s", "          .                               .\n");
      }
      if ((j == cmax-1) && ((i < 6) || (i > rmax - 4))) {
        puts("");
      }
    }
    
  }
} 
