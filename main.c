/* Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 */
 
#include <stdio.h> // In/Out lib
#include <stdlib.h>
#include <string.h>

int main( int argc, const char* argv[] )
{
    int a = 10;
    int b = 20;
    int even = 0;
    while ( a < b ) {
        if ( a % 2 == 0 )
            even++;
        a++;
    }
    printf("There are %d even numbers in sequence\n", even);

    int input;
    do {
        printf("Enter a divider for 100 (not zero)\n");
        scanf("%d", &input);
    } while ( input == 0 );
    printf("100 / %d = %d\n", input, 100 / input);
    printf("and the reminder will be %d, by the way\n",100 % input);
    return 0;
}
