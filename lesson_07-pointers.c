/*
 * Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 * Lesson 7: Pointers
 */

#include <stdio.h>

void swap_variables(int* _x, int* _y);

int main( int argc, const char* argv[] )
{
    int a = 50;
    printf("values of a is %d \n", a);
    printf("address of a is %p \n", &a);
    int * pointer;
    pointer = &a;
    printf("value of pointer is %p \n", pointer);
    printf("address of pointer is %p \n", &pointer);

    printf("variable 'pointer' points at: %d \n", *pointer);
    *pointer = 70;
    printf("value of a is %d \n", a);

    int first = 50;  // BIN: 110010
    int second = 40; // BIN: 101000
    printf("first = %d, second = %d \n", first, second);
    swap_variables(&first, &second);
    printf("first = %d, second = %d \n", first, second);

    return 0;
}
// XOR
// 0 ^ 0 = 0
// 1 ^ 0 = 1
// 0 ^ 1 = 1
// 1 ^ 1 = 0
void swap_variables(int* _x, int*  _y) {
    *_x ^= *_y;
    *_y ^= *_x;
    *_x ^= *_y;
}
