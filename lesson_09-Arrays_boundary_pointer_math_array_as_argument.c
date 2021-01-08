/*
 * Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 * Lesson 9: Arrays, pointer math and arrays as function argument.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_LENGTH 10 // alias define

void printArray( int* _array, int _length );
float average( int* _array, int _length );

int main( int argc, const char* argv[] )
{
    int arr[ARRAY_LENGTH];

    int i = 0;
    float result = 0;
    while (i < ARRAY_LENGTH) {
        printf("Enter value no %d: ", i);
        scanf("%d", arr + i);
        //printf("\n");
        i++;
    }
    printf("Our array is: ");
    printArray( arr, ARRAY_LENGTH );

    printf("\n And the average is: ");
    result = average( arr, ARRAY_LENGTH );
    printf("%f \n", result);

    return 0;
}

void printArray( int* _array, int _length ) {
    int i;
    for (i = 0; i < _length; i++)
        printf("%d ", _array[i]);
}

float average( int* _array, int _length ) {
    float result = 0;
    int i;
    for (i = 0; i < _length; i++)
        result += *(_array + i);
    return result / _length;
}
