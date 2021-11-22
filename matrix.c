#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int* getDeterminants(unsigned int height, unsigned int width){
     int* array2D = 0;
     return array2D;

}

int** genRandomMatrix(unsigned int height, unsigned int width){
    int** array2D = 0;
    //array2D = new int*[height]; // takes an pointer(array of ints)
    array2D = (int*)malloc(height*sizeof(int));

         for (int h = 0; h < height; h++)
         {
               //array2D[h] = new int[width];
               array2D = (int*)malloc(width*sizeof(int));

               for (int w = 0; w < width; w++)
               {
                     // randoms
                     array2D[h][w] = w + width * h;
               }
         }
    return array2D;
}

void printMatrix(int * matrix){
    int i = 1;
};



