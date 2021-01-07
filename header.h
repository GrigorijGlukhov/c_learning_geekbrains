/*
 * Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 * Lesson 6: Functions
 */
 
#ifndef HEADER_H
#define HEADER_H

#include <stdio.h> // In/Out lib

// Prototypes
//int sum(int _x, int _y); // simple sum
//int isPrime(int _number);

// ----------------
// Sum
// ----------------
int sum(int _x, int _y) {
    int _result = _x + _y;
    return _result;
}
// ----------------
// Prime number
// ----------------
int isPrime(int _number) {
    int d = 0, i = 1;
        while (i <= _number) {
            if (_number % i++ == 0)
                d++;
            else
                continue;
            if (d == 3) return 0;
        }
    return 1;
}

#endif // HEADER_H
