#ifndef CORE_H
#define CORE_H

/* from genmatrices.c */
matrixPtr zeros(unsigned long, unsigned long);
matrixPtr ones(unsigned long, unsigned long);
matrixPtr eye(unsigned long);
matrixPtr randmat(unsigned long, unsigned long, int, unsigned long);

/* from algebra.c */
matrixPtr add(matrixPtr, matrixPtr);
matrixPtr scale(double, matrixPtr);
matrixPtr multiply(matrixPtr, matrixPtr);
matrixPtr transpose(matrixPtr);

/* from views.c */
void simple_print(matrixPtr);
void big_print(matrixPtr);

#endif
