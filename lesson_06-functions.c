/*
 * Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 * Lesson 6: Functions
 */
 
#include "header.h"

int main( int argc, const char* argv[] )
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("\nSum of 50 and %d is %d\n", a, sum(50, a));
    int prime = isPrime(a);
    printf("The number %d is%s prime.\n", a, prime ? "" : " not");
    return 0;
}
