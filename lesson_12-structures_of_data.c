/*
 * Copyright (C) Grigorij Glukhov. 2020. All rigths reserved
 * For learning purposes
 * Lesson 12: Structures of data
 */

#include <stdio.h>

struct fraction {
    int integer;
    int divisible;
    int divisor;
};
typedef struct fraction Fraction;

void printFraction(Fraction);
void fractionsMultiply(Fraction, Fraction, Fraction*);

int main( int argc, const char* argv[] )
{
    Fraction f1, f2, result;
    f1.integer = -1;
    f2.integer = 1;
    f1.divisible = 1; // -1 | 1 / 5
    f1.divisor = 5;
    f2.divisible = 1; // 1 | 1 / 5
    f2.divisor = 5;

    printFraction(f1);
    puts("");
    printFraction(f2);
    puts("");

    fractionsMultiply(f1, f2, &result);
    printFraction(result);
    return 0;
}

void printFraction(Fraction _f) {
        if (_f.divisible != 0)
            if (_f.integer == 0)
                printf("%d / %d", _f.divisible, _f.divisor);
            else
                printf("%d %d / %d", _f.integer, _f.divisible, _f.divisor);
        else
            printf("%d", _f.integer);
}

void fractionsMultiply(Fraction _f1, Fraction _f2, Fraction* _result) {
    _result->divisible = _f1.divisible * _f2.divisible;
    _result->divisor   = _f1.divisor * _f2.divisor;
    _result->integer   = _f1.integer * _f2.integer;
}
