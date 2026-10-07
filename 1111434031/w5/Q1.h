#pragma once
#include "math.h"
#include "stdio.h"
void Q1() {
    double principal = 0; // 本金
    double rate = 0; // 利率
    double target = 0;
    int targetYear = 0;

    printf("輸入本金>\n");
    scanf_s("%lf", &principal);
    printf("輸入利率>\n");
    scanf_s("%lf", &rate);
    printf("輸入目標>\n");
    scanf_s("%lf", &target);

    // output table column heads
    printf("%4s%21s\n", "Year", "Amount on deposit");
    double amount = 0.0;
    // calculate amount on deposit for each of ten years
    for (unsigned int year = 1; amount <= target; ++year) {

        // calculate new amount for specified year
        amount = principal * pow(1.0 + rate, year);
        if (amount>= target)
        {
            targetYear = year;
            printf("%4u%21.2f<---此時達成目標\n", year, amount);
        }
        else {
            printf("%4u%21.2f\n", year, amount);
        }
    }
    printf("在%d年達成目標", targetYear);
}