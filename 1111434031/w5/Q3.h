#pragma once
#include <stdio.h>
#include <math.h>
void Q3() {
    int i, k, fact = 1;
    double exponent = 1;
    scanf_s("%d", &k);
    int ipow = 1;
    for (i = 1; i < 13; i++)
    {
        ipow *= k;
        fact *= i;
        exponent += ipow / (double)fact;
    }
    printf("\n%lf", exponent);
}