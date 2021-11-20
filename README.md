# KendallsAlgebra library

- This is a linear algebra library built in C/C++ with the QT environment. Lightweight and built for basic use. It includes all popular Matrix and vector operations.

### How to use this library:
- Download the .o and .h files and add them into your project
- Create a main.cpp file and inside, include the .h file and create an instance of Kendall

```cpp
// main.cpp

#include <iostream>
#include "KendallsAlgebra.h" // assuming you did not change the name of the header files

int main(){
        KendallsAlgebra kalb;
        kalb.printMatrix();
        return 0;
}
```
Compile and run your code this way:
```
g++ main.cpp kendallsAlgebra.o

```

```
./a.out
```

- The above code should print the matrix that your have just created in a properly formatted way

## About this library:
<p>This library comprises of KendallsAlgebra and KendallsVector. KendallsAlgebra is the matrix version of the library and simmilary: KendallsVector is the vector version of the library. You can import both the libraries this way:</p>

```cpp
#include "KendallsAlgebra.h"
#include "KendallsVector.h"

int main(){
        // The vectors use templates, therefore you have to specify the type type per instance created
        KendallsAlgebra kalb<int>; // create instance of kAlgebra with a int type 
        KendallsVector kvec<short>; // create instance of kVector with a short type
        return 0;
}
```

### KendallsAlgebra
#### Get the Determinant, Minors, Cofactors & Transpose of a matrix
```cpp
#include "KendallsAlgebra.h"

int main(){
        KendallsAlgebra kalb<int>; 

        // creating a random 3x3 matrix
        int mymatrix[3][3] = [[1,1,1], [2,2,2], [3,3,3]];

        // get the determinant of a matrix:
        int myDeterminant = kalb.getDeterminant(mymatrix); // takes one paramater

        return 0;
}
```
#### Get Minors & Cofactors of a matrix
```cpp
#include "KendallsAlgebra.h"

int main(){
        KendallsAlgebra kalb<int>; 

        int mymatrix[3][3] = [[1,1,1], [2,2,2], [3,3,3]];

        // get the minors of a matrix:
        int myMinors[];
        myMinors = kalb.getMinors(mymatrix); // returns an array of the type specified when instantiating the class, in this case: int.

        // get the cofactors of a matrix:


        return 0;
}
```
- In the above example, `kalb.getMinors` will return a varying array size depending on size of the 'mymatrix'
- the method will return an array of the type that was specified when instantiation the class