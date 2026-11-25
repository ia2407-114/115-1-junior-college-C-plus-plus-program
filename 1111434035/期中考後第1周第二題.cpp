#include <stdio.h>
#define MAX 50  /* 定義常數大小 */
/* 宣告副程式原型 */
void print_func(int id[], float math[], float eng[], int k);

int main(void)
{
    int id[MAX] = { 0 };
    float math[MAX], eng[MAX];
    int i;
    /* 透過迴圈輸入資料 */
    for (i = 0; i < MAX; i++)
    {
        printf("請輸入第 %d 位學生的 (學號 數學成績 英文成績) => ", i + 1);
        scanf_s("%d %f %f", &id[i], &math[i], &eng[i]);

        /* 如果學號輸入 999 就提早結束輸入 (配合你前面的題目需求) */
        if (id[i] == 999)
        {
            break;}
    }
    /* 呼叫副程式將陣列傳進去印出 */
    print_func(id, math, eng, MAX);
    return 0;
}
/* 老師示範的副程式定義 */
void print_func(int iid[], float imath[], float ieng[], int k)
{
    int i;
    printf("\nID\tMath\tEnglish\tAVG\n");
    printf("------------------------------------\n");

    for (i = 0; i < k; i++)
    {
        /* 如果遇到 999 就停止印出後面的空白資料 */
        if (iid[i] == 999)
        {
            break;}
        /* 直接在印的時候計算平均並排版 */
        printf("%d\t%.1f\t%.1f\t%.2f\n", iid[i], imath[i], ieng[i], (imath[i] + ieng[i]) / 2);
    }
}