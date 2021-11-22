#ifndef KENDALLSALGEBRA_H
#define KENDALLSALGEBRA_H
#include "matrix.h"
#include <vector>

class KendallsAlgebra // matrix class
{
public:
    KendallsAlgebra();
    void printMatrix(int * matrix);
    void generateAndPrintRandomMatrix();
    int** genRandomMatrix(unsigned int height, unsigned int width);
    int* getDeterminants(unsigned int height, unsigned int width);

protected:
    void print2dVector(std::vector<std::vector<int>>);
};


#endif // KENDALLSALGEBRA_H

