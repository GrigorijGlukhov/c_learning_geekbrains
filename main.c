/* Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 */
 
#include <stdio.h> // In/Out lib
#include <stdlib.h>
#include <string.h>

int main( int argc, const char* argv[] )
{
    char answer;
    printf("Do you want to salute you? (y/n)");
    scanf("%c", &answer); // scanf uses pointer for char
    if ( answer == 'y' ) {
        printf("\nHello, user!\n");
    } else if ( answer == 'n' ) {
        printf("\nI didn't want to salute you anyway!\n");
    } else {
        printf("\nI can't understand your input!\n");
    }

    int a = 10, b = 15;
    a = ( a > b ) ? b : a;
    if ( a > b )
        a = b;
    else
        a = 0;

    printf("\n");
    printf("%s", (1>0) ? "true\n" : "false\n");

    // > < >= <= == 
    // && || ! ^
    if ( 1 && 0 ) printf("false\n");
    if ( 1 || 0 ) printf("true\n");
    if ( !(1) ) printf("false\n");
    if ( 1 ^ 1 ) printf("false\n");

    printf("\n");
    int x = 7;
    if ( (x >= 0) && (x <= 10) ) {
        printf("X Fits!\n");
    }

    return 0;
}
