#include <stdio.h>
void print_func(int id[], float math[], float english[], float avg[]);
int id[10];
    float math[10], english[10], avg[10];
    int i;
    float sum = 0.0;
    int count = 0;
int main() {
    

    for (i = 0; i < 10; i++) {
        printf("請輸入學號 數學成績 英文成績\n");
        scanf_s("%d %f %f", &id[i], &math[i], &english[i]);
        if (id[i] == 999) {
            break;
        }
        sum = math[i] + english[i];
        avg[i] = sum / 2.0f;
    }
    count = i;
    print_func(id, math, english, avg);
    return 0;
}

// 3. 副程式 print_func() 的定義與實作
void print_func(int id[], float math[], float english[], float avg[]) {
    int i;

    printf("\n--- 成績 ---\n");
    printf("學號\t數學\t英文\t平均\n");
    for (i = 0; i < count; i++) {
        printf("%d\t%.2f\t%.2f\t%.2f\n", id[i], math[i], english[i], avg[i]);
    }
}
