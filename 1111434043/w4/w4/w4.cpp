#include <stdio.h>

int ttmp(void) //要用再改成int main就好
{
    
    int n = 0;
    printf("請輸入一個正整數 n：");
    scanf_s("%d", &n);
    long int factorial_n = 1; 
    int i = 1;           
    while (i <= n) {
        factorial_n = factorial_n * i; 
        i++;                           
    }
    printf("計算出 %d! 的結果為：%d\n", n, factorial_n);


  
    int m = 0;
    printf("\n請再輸入一個正整數上限 m：");
    scanf_s("%d", &m);
         
    int max_k = 1;       
    long int temp_fact = 1;   

    int tmp_num = 0;
    long int tmp_ans = 0;
    for (int j = 2; temp_fact * j <= m; j++) {
        temp_fact = temp_fact * j; 
        max_k = j;                 
    }
    tmp_num = max_k + 1;
    tmp_ans = temp_fact * tmp_num;
   
    printf("計算出階乘結果不大於 %d 的最大整數為 %d ,(因為 %d! = %d,%d!是%d)\n", m, max_k, max_k, temp_fact,tmp_num,tmp_ans);

    return 0; 
}
