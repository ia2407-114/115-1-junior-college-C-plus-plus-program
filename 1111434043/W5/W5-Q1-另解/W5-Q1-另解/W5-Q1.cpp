#include <stdio.h>
#include <math.h>

int main(void) {

    double 本金 = 1000.0;
    double 利率 = 0.05;
    double 目標金額 = 0; // 改為 double 確保型態一致，並使用半形分號
    double 本利合 = 0;   // 使用半形分號

    printf("輸入本金、利率、目標金額 (請用空白鍵隔開)：\n");

    scanf_s("%lf", &本金);
    scanf_s("%lf", &利率);
    scanf_s("%lf", &目標金額);

    printf("\n%4s%21s\n", "Year", "Amount on deposit");

    // 保留你優秀的 for 迴圈邏輯設定
    for (int 年 = 1; 本利合 <= 目標金額; 年 = 年 + 1) {

        // (註解：X的y次方為 pow(x,y))
        本利合 = 本金 * pow(1.0 + 利率, 年);

        // 修正：年份是 int，所以佔位符建議改用 %4d
        printf("%4d%21.2f\n", 年, 本利合);
    }

    return 0;
}