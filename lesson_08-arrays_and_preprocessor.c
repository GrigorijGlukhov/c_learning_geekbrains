/*
 * Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 * Lesson 8: Arrays and preprocessor
 * Percentage of appearance of number in array
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_LENGTH 10 // alias define
#define NUMBERS_AMOUNT 1000000
#define boolean int
#define true 1
#define false 0

int main( int argc, const char* argv[] )
{
    int amount = ARRAY_LENGTH; // alias use

    int array1[ARRAY_LENGTH];
    array1[0] = 10;
    array1[1] = 20;
    // ...
    // array1[100] = 100; // out of array range

    int array2[5] = {0, 1, 2, 3, 4};

    srand(time(NULL));
    int frequency[ARRAY_LENGTH] = {0}; // initialization with 0
    int a, i;
    for (i = 0; i < NUMBERS_AMOUNT; i++) {
        a = rand() % ARRAY_LENGTH;
        frequency[a]++;
    }

    for (i = 0; i < ARRAY_LENGTH; i++) {
        printf("Number %d generated %6d (%5.2f%%) times \n", i, frequency[i], ((float)frequency[i] / NUMBERS_AMOUNT * 100));
    }
    return 0;
}
