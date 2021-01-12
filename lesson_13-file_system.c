/*
 * Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 * Lesson 13: File system
 */

#include <stdio.h>
#include <stdlib.h>

int main( int argc, const char* argv[] )
{
    FILE *f;
    f = fopen("filename.txt", "w"); // r = read, w = write, a = append, rb, wb, ab
    if (f == NULL) return 1;
    fprintf(f, "Hello, file system! %s", "we did it!");
    fclose(f);

    char word[256];
    f = fopen("filaname.txt", "r");
    while(!feof(f)) {
        fscanf(f, "%s", &word);
        printf("%s ", word);
    }
    fclose(f);
    puts("");

    return 0;
}

