#pragma once
#include <stdio.h>
#define SIZE 10
void sort(int data[], int len, bool flag);


void Q1() {
    //int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int a[SIZE] = {0};
    printf("輸入%d個待排序數\n",SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("[%d]=>", i);
        scanf_s("%d", &a[i]);
        puts("");
    }
    

    puts("Data items in original order");

    // output original array
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }

    puts("\nData items in ascending order\n");
    sort(a, SIZE, 1);


}

/// <summary>
/// 
/// </summary>
/// <param name="data">資料</param>
/// <param name="len">資料長度</param>
/// <param name="flag">從小到大/從大到小</param>
void sort(int data[], int len,bool flag) {       
    bool isSwap = true;
    while (isSwap) {
        isSwap = false;
        for (size_t i = 0; i < len - 1; ++i) {
            bool cmp = flag ? data[i] > data[i + 1]:data[i] < data[i + 1];
            if (cmp) {
                isSwap = true;
                int hold = data[i];
                data[i] = data[i + 1];
                data[i + 1] = hold;
            }
        }
    }
    //輸出
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", data[i]);
    }
    //for (unsigned int pass = 1; pass < len; ++pass) {

    //    // loop to control number of comparisons per pass   
    //    for (size_t i = 0; i < len - 1; ++i) {
    //        bool cmp = flag ? data[i] > data[i + 1]:data[i] < data[i + 1];
    //        if (cmp) {
    //            int hold = data[i];
    //            data[i] = data[i + 1];
    //            data[i + 1] = hold;
    //        }
    //    }
    //}

}

