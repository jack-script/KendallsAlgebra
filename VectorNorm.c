#include <stdio.h>
#include <math.h>

#include "VectorNorm.h"

int getNorm( int sizeOfVector, int vector[] )
{
    double size = 0;
    int sum = 0;

    for(short i = 0; i < sizeOfVector;++i){
        sum+= vector[i];
    }
    size = sqrt(sum);

    return size;
}
