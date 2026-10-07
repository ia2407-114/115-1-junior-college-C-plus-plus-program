#include <stdio.h>


int main(void)
{
    
    double x = 0.0;       
    int fact = 1;         
    double x_power = 1.0;
    double result = 1.0; 
    int tmp = 1;
   
    printf("請輸入 x 的值：");
    scanf_s("%lf", &x);

    printf("請輸入 x 的次方數：");
    scanf_s("%d", &tmp);
    
    for (int i = 1; i <= 12; i++)
    {
        if (i > tmp) {
            break;
        }
        fact = fact * i;       
        x_power = x_power * x;

        
        result = result + (x_power / (double)fact);
    }

    
    printf("\n代入 x = %lf，公式展開%d項的結果為：%lf\n", x,tmp, result);

    return 0; 
}