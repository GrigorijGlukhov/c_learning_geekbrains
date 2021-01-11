/*
 * Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 * Lesson 10: Advanced arrays.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

// return pointer to char
void helloFunction(char* _name, char* _out) {
    char welcome[256] = "Hello, ";
    _name[0] = tolower(_name[0]);
    if (strcmp("alex", _name) == 0)
        strcpy(_name, "Master!");
    _name[0] = toupper(_name[0]);
    // Append SRC onto DEST: char *strcat (char* dest, const char* src)
    strcat(welcome, _name); 
    // Copy SRC to DEST: char* strcpy (char* dest, const char* src)
    strcpy(_out, welcome);
}

// isalpha() - 1 if char is letter
// isdigit() - 1 if char is digit
// isspace() - 1 if char is space
// isupper()
// islower()

int main( int argc, const char* argv[] )
{
    char string1[256] = "This is a string!";
    char* string2 = "This is also a string!";

    printf("%s \n", string1);
    printf("%s \n", string2);

    string1[5] = 'X';
    printf("%s \n", string1);

    char name[255];
    char result[255];
    // gets(name); <- Don't use 'gets' it's unsafe! Use fgets(name, sizeof(name), stdin);
    fgets(name, sizeof(name), stdin);
    helloFunction(name, result);
    // puts gets char*(string) without any other arguments and adds "\n" at the end of line
    puts(result);

    // atoi()
    // atof()
    char num[64];
    puts("Enter a number to string ");
    fgets(num, sizeof(num), stdin);
    int number = atoi(num);
    printf("Number is %d ", number);
    number *= number;
    printf("and multiplied by itself is %d!", number);
    return 0;
}

