/* Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 */
 
#include <stdio.h> // In/Out lib
#include <stdlib.h>
#include <string.h>

int main( int argc, const char* argv[] )
{
    // Homeworks
    // 1. Uo = Ui * (R1 / (R2 + R1))
  /*int Ui;
    int Uo;
    int R1;
    int R2;
    Ui = Uo * (R1 + R2) / R1;
    R1 = R2 * Uo / (Ui - Uo);
    R2 = (Ui - Uo) * R1 / Uo;*/

    // 2. Terms 0..100 Chack if number match range 
    printf("Tier 2\n");
    const int RANGE_MIN = 0;
    const int RANGE_MAX = 100;
    int input;
    printf("Enter number from %d to %d: ", RANGE_MIN, RANGE_MAX);
    scanf("%d", &input);
    if (input >= RANGE_MIN && input <= RANGE_MAX)
        printf("Number %d in renge from 0 to %d\n", input, RANGE_MAX);
    else if ( input < RANGE_MIN )
        printf("Less than %d\n", RANGE_MIN);
    else
        printf("Bigger than %d\n", RANGE_MAX);

    // 3. Loops. Calculate mean of 10 numbers from user input
    printf("Tier 3\n");
    int result = 0;
    int counter = 0, count = 10;
    while((counter++) < count) {
        printf("Enter number %d: ", counter);
        scanf("%d", &input);
        result += input;
    }
    printf("Result is :%.2f\n", (float)(result / count));

    // 4. Star. Build triangle with lines form user input
    printf("Tier 4\n");
    int lines;
    printf("Enter a number of lines: ");
    scanf("%d", &lines);
    int i, j;
    for (i = 0; i < lines; i++) {
        for (j = 1; j < lines - i; j++)
            printf(" ");

        for (j = lines - i * 2; j <= lines; j++)
            printf("^");

        printf("\n");
    }

    return 0;
}
