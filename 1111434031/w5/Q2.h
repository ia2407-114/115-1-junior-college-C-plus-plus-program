#pragma once
#include "stdio.h"
void Q2() {
    double principal = 1000.0; // starting principal
    double rate = .05; // annual interest rate

    // output table column heads
    printf("%4s%21s\n", "Year", "Amount on deposit");

    // calculate amount on deposit for each of ten years
    for (unsigned int year = 1; year <= 10; ++year) {

        // calculate new amount for specified yearit
        double pow = 1.0 + rate;
        for (int i = 1; i < year; i++)
        {
            pow *= (1.0 + rate);
        }
        double amount = principal * pow;

        // output one table row
        printf("%4u%21.2f\n", year, amount);
    }
}