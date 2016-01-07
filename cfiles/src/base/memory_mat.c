#include <stdlib.h>
#include "matrixdef.h"

matrixPtr init_matrix(unsigned long rows, unsigned long cols) {
  size_t i;
  matrixPtr R = (matrixPtr) malloc(sizeof(matrixPtr));

  (R->rows) = rows;
  (R->cols) = cols;
  (R->array) = (double **) malloc(rows * sizeof(double *));
  for (i=0; i<rows; i++) {
    (R->array)[i] = malloc(cols * sizeof(double));
  }
  return R;
}

void free_matrix(matrixPtr A) {
  size_t i;
  for (i=0; i<A->rows; i++) {
    free((A->array)[i]);
  }
  free(A);
}
