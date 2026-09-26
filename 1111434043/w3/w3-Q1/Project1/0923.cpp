#include <stdio.h>

int main(void)
{

    int n1 = 0;
    
    printf("請輸入1個整數：\n");

    scanf_s("%d", &n1);
    



    printf("\n判斷結果：", n1);

    if (n1 >= 90) {
        puts("A");
    }
    else if (n1 >= 80) {
        puts("B");
    }
    else if (n1 >= 70) {
        puts("C");
    }
    else if (n1 >= 60) {
        puts("D");
    }
    else {
        puts("F");
    }

    return 0;
}
