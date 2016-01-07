#include <stdlib.h>
#include "matrixdef.h"
#include "memory_mat.h"
#include "core.h"

int main(int argc, char * argv[]) {
  size_t i, j;
  int r = atoi(argv[1]);
  int c = atoi(argv[2]);

  matrixPtr A = init_matrix(r, c);

  for (i=0; i<r; i++) {
    for (j=0; j<c; j++) {
      (A->array)[i][j] = 2 + i*j;
    }
  }

  big_print(A);

  return 0;
}
