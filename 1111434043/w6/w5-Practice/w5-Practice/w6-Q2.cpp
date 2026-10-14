

#include <stdio.h>
double calculate_pi(int n) {
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {


        double denominator = 2.0 * i - 1.0;
        double term = 1.0 / denominator;

        if (i % 2 != 0) {
            sum = sum + term;
        }
        else {
            sum = sum - term;
        }
    }
    return sum * 4.0;
}

int main(void) {
    int n = 0;

    printf("請輸入要運算的項數 n：");
    scanf_s("%d", &n);

    double pi_value = calculate_pi(n);

    printf("展開 %d 項計算出的 Pi 近似值為：%lf\n", n, pi_value);

    return 0;
}
