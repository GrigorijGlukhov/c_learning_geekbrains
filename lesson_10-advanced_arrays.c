/*
 * Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 * Lesson 10: Advanced arrays.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void advancedArrays();

int main( int argc, const char* argv[] )
{
    advancedArrays();
    return 0;
}

void advancedArrays() {
    printf("Multi-dimension Arrays! \n");

    const int rows = 10, cols = 10;
    int table[rows][cols];
    int r, c;
    for (r = 0; r < rows; r++)
        for (c = 0; c < cols; c++)
            table[r][c] = (r + 1) * (c + 1);

    for (r = 0; r < rows; r++) {
        for (c = 0; c < cols; c++) 
            printf("%3d ", table[r][c]);
        printf("\n");
    }

    char* stringArray[3] = {"Hello", "C", "World!"};
    for (c = 0; c < 3; c++)
        printf("%s, ", stringArray[c]);

    int twoDimension[5][5];
    // [][][][][]
    // [][][][][]
    // [][][][][]
    // [][][][][]
    // [][][][][]
    int threeDimension[3][3][3];
    // [[][][]] [[][][]] [[][][]]
    // [[][][]] [[][][]] [[][][]]
    // [[][][]] [[][][]] [[][][]]
}
