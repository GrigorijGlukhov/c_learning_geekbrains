/*
 * Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 * Lesson 10: Homework
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define ARRAY_LENGTH 10

int calculateSquareEquation(int _a, int _b, int _c, float* _x1, float* _x2);
void arrayPrint(int* _array, int _length);
void arrayRandom(int* _array, int _length);
int doubleArrayElementIfOdd(int* _array, int _length);
void displayIntArrayAsShort(int* _array, int _length);

int main( int argc, const char* argv[] )
{
    srand(time(NULL));
    // Square equation
    int a = 3, b = 5, c = 10;
    float x1, x2;
    calculateSquareEquation(a, b, c, &x1, &x2);

    // Array's odd elements doubler
    int array[ARRAY_LENGTH];
    int i;
    for (i = 0; i < ARRAY_LENGTH; i++)
        *(array+i)=i;//array[i];
    arrayPrint(array, ARRAY_LENGTH);
    printf("\n");
    printf("Array is %s changed: ", doubleArrayElementIfOdd(array, ARRAY_LENGTH) ? "" : "not" );
    arrayPrint(array, ARRAY_LENGTH);
    printf("\n");
    printf("Array is %s changed: ", doubleArrayElementIfOdd(array, ARRAY_LENGTH) ? "" : "not" );
    arrayPrint(array, ARRAY_LENGTH);

    // * Show ints as short
    printf("\n");
    int intArray[ARRAY_LENGTH];
    arrayRandom(intArray, ARRAY_LENGTH);
    printf("Random int array: ");
    arrayPrint(intArray, ARRAY_LENGTH);
    printf("\n");
    printf("As short is: ");
    displayIntArrayAsShort(intArray, ARRAY_LENGTH);
    return 0;
}

int calculateSquareEquation(int _a, int _b, int _c, float* _x1, float* _x2) {
    double D; // discriminant
    D = _b * _b - 4 * _a * _c;
    if ( _a == 0 ){
        *_x1 = -_c / _b;
        return 0;
    } else if ( D > 0 ) {
        *_x1 = (-_b + sqrt(D)) / 2 * _a;
        *_x2 = (-_b - sqrt(D)) / 2 * _a;
        return 1;
    } else if ( D == 0 ) {
        *_x1 = -_b / (2 * _a);
        return 0;
    } else {
        return -1;
    }
}
void arrayPrint(int* _array, int _length) {
    int i;
    for (i = 0; i < _length; i++)
        printf("%d ", *(_array+i));
}

int doubleArrayElementIfOdd(int* _array, int _length) {
    int i, result = 0;
    for (i = 0; i < _length; i++)
        if (*(_array+i) % 2 != 0 ) {
            *(_array+i) *= 2;
            result = 1;
        }
    return result;
}

void arrayRandom(int* _array, int _length) {
    srand(time(NULL));
    int i;
    for(i = 0; i < _length; i++)
        *(_array+i) = rand() % 1000000;
}

void displayIntArrayAsShort(int* _array, int _length) {
    int i;
    unsigned short* out = _array;
    for (i = 0; i < _length * 2; i++)
        printf("%d ", *(out+i));
}






