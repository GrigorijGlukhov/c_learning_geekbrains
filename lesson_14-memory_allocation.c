/*
 * Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 * Lesson 14: Memory allocation
 */

#include <stdio.h>
#include <stdlib.h>

int main( int argc, const char* argv[] )
{
    const int SIZE = 10;
    const int REALLOCATED_SIZE = 20;
    // void malloc(<memory size>);
    //int* area = (int*) malloc(sizeof(int) * SIZE); // reserve some memory of type int(4byte)
    int* area = (int*) calloc(SIZE, sizeof(int)); // reserve clear memory of type int(4byte)
    // malloc is like array ^^^
    int array[SIZE];
    int i;
    for (i = 0; i < SIZE; i++) array[i] = i * 10;
    for (i = 0; i < SIZE; i++) printf("%d ", array[i]);
    puts("");
    //for (i = 0; i < SIZE; i++) *(area+i) = i * 10;
    for (i = 0; i < SIZE; i++) printf("%d ", *(area+i));

    puts("");
    // dynamic reallocation
    area = realloc(area, sizeof(int)*(REALLOCATED_SIZE));
    for (i = 0; i < REALLOCATED_SIZE; i++) *(area + i) = i * 10;
    for (i = 0; i < REALLOCATED_SIZE; i++) printf("%d ", *(area + i));

    free(area); // release memory
    return 0;
}

