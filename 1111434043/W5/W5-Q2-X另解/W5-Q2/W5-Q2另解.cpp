#include <stdio.h>


int main(void) {

    double 本金 = 1000.0;
    double 利率 = 0.05;
    double 目標金額 = 0; 
    double 本利合 = 0;   
    int tmp = 0;
    printf("輸入本金、利率、目標金額 (請用空白鍵隔開)：\n");

    scanf_s("%lf", &本金);
    scanf_s("%lf", &利率);
    scanf_s("%lf", &目標金額);

    printf("\n%4s%21s\n", "Year", "Amount on deposit");

    本利合 = 本金;
    for (int 年 = 1; 本利合 <= 目標金額; 年 = 年 + 1) {

        
        本利合 = 本利合 *(1+利率) ;
        tmp = 年;
        printf("%4d%21.2f\n", 年, 本利合);
    }
    printf("在第%d年存到%lf",tmp,本利合);
    return 0;
}