#ifndef MATRIXDEF_H
#define MATRIXDEF_H

typedef struct matrix {
  unsigned long rows;
  unsigned long cols;
  double ** array;
} Matrix;

typedef Matrix * matrixPtr;

#endif
