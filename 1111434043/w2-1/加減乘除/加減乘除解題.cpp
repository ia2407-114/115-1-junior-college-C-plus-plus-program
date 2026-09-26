

#include <stdio.h> 

int main(void) 
{
    
    int integer1 = 0; 
    int integer2 = 0; 

    int add = 0;      
    int sub = 0;      
    int mul = 0;     
    int div = 0;     

    
    printf("輸入第一個整數:\n"); 
    scanf_s("%d", &integer1);           

    printf("輸入第二個整數:\n"); 
    scanf_s("%d", &integer2);           

   
    add = integer1 + integer2; 
    sub = integer1 - integer2; 
    mul = integer1 * integer2;
    div = integer1 / integer2; 

   
    printf("%d + %d = %d\n", integer1, integer2, add); 
    printf("%d - %d = %d\n", integer1, integer2, sub);
    printf("%d * %d = %d\n", integer1, integer2, mul);
    printf("%d / %d = %d\n", integer1, integer2, div); 

    return 0; 
} 