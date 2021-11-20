#ifndef KENDALLSVECTOR_H
#define KENDALLSVECTOR_H

#include <vector>
#include "VectorNorm.h"

template<class T>
class KendallsVector
{
public:
    KendallsVector();
   T generateRandomVector(T param);
   int getNorm(int sizeOfVector, int vector[]);
};

#endif // KENDALLSVECTOR_H

#include "kendallsvector.tpp"
