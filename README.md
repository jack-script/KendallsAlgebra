# KendallsAlgebra library

- This is a linear algebra library built in C/C++ with the QT environment. Lightweight and built for basic use. It includes all popular Matrix and vector operations.

### How to use this library:
- Download the .o and .h files and add them into your project
- Create a main.cpp file and inside, include the .h file and create an instance of Kendall

```
// main.cpp

#include <iostream>
#include "main.h"

int main(){
        KendallsAlgebra kalb;
        kalb.printMatrix();
        return 0;
}
```
- compile and run your code this way:
```
g++ main.cpp kendallsAlgebra.o

```

```
./a.out
```

- The above code should print the matrix that your have just created in a properly formatted way
