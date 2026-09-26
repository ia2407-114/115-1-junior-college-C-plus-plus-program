#include <stdio.h>

int main(void)
{
 
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    int temp = 0;
    printf("請輸入 4 個整數 (中間請用空白鍵隔開)：\n");
    scanf_s("%d %d %d %d", &n1, &n2, &n3, &n4);

    
    if (n1 < n2)
    {
        temp = n1; n1 = n2; n2 = temp;
    }
    if (n1 < n3) 
    { 
        temp = n1; n1 = n3; n3 = temp;
    }
    if (n1 < n4) 
    {
        temp = n1; n1 = n4; n4 = temp;
    }
   

   
    if (n2 < n3) 
    {
        temp = n2; n2 = n3; n3 = temp;
    }
    if (n2 < n4) 
    {
        temp = n2; n2 = n4; n4 = temp; 
    }
    
    
    if (n3 < n4)
    { 
        temp = n3; n3 = n4; n4 = temp;
    }
   
    printf("\n--- 由大到小排序結果 ---\n");
    printf("%d, %d, %d, %d\n", n1, n2, n3, n4);

    
    printf("\n針對最大數值的等第判斷結果：", n1);

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
