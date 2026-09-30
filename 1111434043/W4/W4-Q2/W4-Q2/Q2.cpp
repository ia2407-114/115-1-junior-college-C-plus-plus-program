#include <stdio.h>

int main(void)
{

    int score = 0;
    int sum = 0;
    int count = 0;
    float average = 0.0;

    printf("請依序輸入學生的數學成績 (輸入負數代表結束)：\n\n");



    printf("請輸入第 1 位學生的成績：");
    scanf_s("%d", &score);



    while (score >= 0) {

        sum = sum + score;
        count = count + 1;


        printf("請輸入第 %d 位學生的成績：", count + 1);
        scanf_s("%d", &score);

    }


    printf("\n--- 成績統計結果 ---\n");

    if (count > 0) {

        average = (float)sum / count;

        printf("全班總共輸入了 %d 位學生的成績\n", count);
        printf("全班總分為：%d 分\n", sum);
        printf("全班平均成績為：%.2f 分\n", average);

    }
    else {

        printf("您尚未輸入任何有效的成績！\n");
    }

    return 0;
}