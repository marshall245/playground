#include <stdlib.h>
#include "matrixdef.h"
#include "memory_mat.h"

matrixPtr zeros(unsigned long rows, unsigned long cols) {
  matrixPtr R = init_matrix(rows, cols);
  size_t i, j;
  
  for (i=0; i<rows; i++) {
    for (j=0; j<cols; j++) {
      (R->array)[i][j] = 0;
    }
  }
  return R;
}

matrixPtr ones(unsigned long rows, unsigned long cols) {
  matrixPtr R = init_matrix(rows, cols);
  size_t i, j;

  for (i=0; i<rows; i++) {
    for (j=0; j<cols; j++) {
      (R->array)[i][j] = 1;
    }
  }
  return R;
}

matrixPtr eye(unsigned long n) {
  matrixPtr R = init_matrix(n, n);
  size_t i, j;

  for (i=0; i<(R->rows); i++) {
    for (j=0; j<(R->cols); j++) {
      if (i == j) {
	(R->array)[i][j] = 1;
      } else {
	(R->array)[i][j] = 0;
      }
    }
  }
  return R;
}

matrixPtr randmat(unsigned long rows, unsigned long cols, int modulus, unsigned long seed) {
  matrixPtr R = init_matrix(rows, cols);
  size_t i, j;
  srand(seed);

  for (i=0; i<rows; i++) {
    for (j=0; j<cols; j++) {
      (R->array)[i][j] = (double) (rand() % modulus);
    }
  }
  return R;
}
