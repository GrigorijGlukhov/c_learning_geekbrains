/* Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 */
 
#include <stdio.h> // In/Out lib
#include <stdlib.h>
#include <string.h>

int main( int argc, const char* argv[] )
{
    // screen symbols: \n \t \\ \0
    printf("Hello, World!\n"); // regular string with new line
    printf("This is a new \trow with tab. "); // tab symbol
    printf("This is a new row with \\ symbol \n"); // screened "\"
    // warning! printf("Rest of this row is kipped \0 More strings \n"); // string termination with \0 
    printf("\n");

    // fillers: %d %f %c %s %p %lf %x for types (int, float, char, string, pointer, double/lfloat)
    // %.2f - numbers of decimals
    // %5d - numbers in integer; %05d - same with zeroes
    // %% - percent symbol
    int a = 50;
    printf("%05d %5d%%\n", a, a);

    short sh = 345;      // 2 bytes -32768..32767
    int number = -56;    //4 bytes = -2.147.000000..2.147.000000
    unsigned int uint = 40000000; // 0..4.294.000000
    char symbol = 'A';   // 
    unsigned char unsignedsymbol = 'B'; 
    float real = 5.345f; // 4 bytes 
    double realdouble = 5.345; // 8 bytes long float 
    // no boolean type
    int true = 1;
    int false = 0;
    char sym = 75; // 1 byte -128..127

    printf("Variable a value: %d\n", a);
    printf("Variable a pointer: %p\n", &a);
/*
    int input;
    printf("Enter some number: ");
    scanf("%d", &input);
    printf("You entered %d and doubled is %d\n", input, input*2);
*/
    int variable = 70;
    printf("Var 'variable' is %d\n", variable);
    variable = variable + 50;
    variable += 50;
    printf("We added 50 twice: %d\n", variable);
    variable = variable / 4; // decimal part ignared 
    printf("Integer devide without decimal reminder %d\n", variable);

    int reminder = variable % 4;
    printf("170 / 4: reminder %d\n",  reminder);

    return 0;
}
