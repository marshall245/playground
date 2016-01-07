#include <stdio.h>
#include "matrixdef.h"
#include "memory_mat.h"

int main(int argc, char * argv[]) {
  
  size_t i, j;
  int r = atoi(argv[1]);
  int c = atoi(argv[2]);

  matrixPtr m = init_matrix(r, c);

  for (i=0; i<r; i++) {
    for (j=0; j<c; j++) {
      (m->array)[i][j] = 2;
    }
  }

  return 0;
}
