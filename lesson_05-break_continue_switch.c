/*
 * Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 * Lesson 5: Break, Continue and Switch
 */
 
#include <stdio.h> // In/Out lib
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main( int argc, const char* argv[] )
{

// ---------------------------------------------------------------
// Power of number
// ---------------------------------------------------------------

    int number;
    printf("Input, a number, please ");
    scanf("%d", &number);
    printf("\n");
    int d = 0, i = 1; // dividers count and iterators
    while (i <= number) {
        if (number % i++ == 0) // increment iterator i in i++ after modulo
            d++; // number of dividers
        else
            continue; // return from loop to logical structure
        if (d == 3) break; // leave loop
    }
    printf("Number %d is%s prime. \n\n", number, (d==2) ? "" : " not");

// ---------------------------------------------------------------
// Power of number
// ---------------------------------------------------------------
    
    int significative = 10; //power of number
    int base = 2; // base of power
    int result = 1;
    for (i = 0; i < significative; i++) {
        result *= base;
    }
    printf("%d powered by %d is %d \n", base, significative, result);

// ---------------------------------------------------------------
// Multiple Choises: Calculator
// ---------------------------------------------------------------
    
   float first, second;
   int operator;
   printf("\nEnter first operand: ");
   scanf("%f", &first);
   printf("\nEnter 1 for '+', 2 for '-', 3 for '*', 4 for '/' operations: ");
   scanf("%d", &operator);
   if(operator == 4) {
       do {
           printf("\nEnter second operand: ");
           scanf("%f", &second);
       } while (second == 0);
   } else {
       printf("\nEnter second operand: ");
       scanf("%f", &second);
   }
   float result_calc;
   char c;
   switch (operator) {
        case 1:
            c = '+';
            result_calc = first + second;
            break;
        case 2:
            c = '-';
            result_calc = first - second;
            break;
        case 3:
            c = '*';
            result_calc = first * second;
            break;
        case 4:
            c = '/';
            result_calc = first / second;
            break;
   }
    printf("%f %c %f = %f", first, c, second, result_calc);

   return 0;
}
