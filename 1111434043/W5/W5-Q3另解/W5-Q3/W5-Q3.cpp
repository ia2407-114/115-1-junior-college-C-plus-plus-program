
#include <stdio.h>


int main(void)
{
    int tmp = 0;
    int i, k, fact = 1;
    double exponent = 1;
    printf("輸入展開次數\n");
    scanf_s("%d", &k);

    for (i = 1; i < k; i++)
    {
        if (i > 12) {
            break;
        }
        fact = fact* i;
        exponent = exponent + 1 / (double)fact;
        //用於看程式跑幾次   tmp = tmp + 1;
    }
    printf("\n%lf", exponent);
    //printf("\n%d", tmp);
}
