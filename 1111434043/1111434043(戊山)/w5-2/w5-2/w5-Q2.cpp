#include <stdio.h>

int main(void)
{
    double principal = 0.0;
    double rate = 0.0;
    double target = 0.0;
    double amount = 0.0;
    int year = 0;

    
    printf("請輸入起始本金：");
    scanf_s("%lf", &principal);

    printf("請輸入年利率 (例如 5%% 請輸入 0.05)：");
    scanf_s("%lf", &rate);

    printf("請輸入存款目標金額：");
    scanf_s("%lf", &target);

    printf("\n%4s%21s\n", "Year", "Amount on deposit");

    amount = principal;

    
    
    while (amount < target) {

        year++; 

        double multiplier = 1.0;

        for (int i = 1; i <= year; i++) {
            multiplier = multiplier * (1.0 + rate);
        }

        amount = principal * multiplier;

       
        printf("%4d%21.2f\n", year, amount);
    }
    

    printf("\n第%d 年後可以達成存款目標。\n", year);

    return 0;
}