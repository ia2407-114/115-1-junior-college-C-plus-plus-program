#include <stdio.h>

// function main begins program execution 
int main()
{
    int integer1, integer2, sum, sum2, sum3, sum4; // first number to be entered by user 


    printf("Enter first integer\n"); // prompt
    scanf_s("%d", &integer1); // read an integer

    printf("Enter second integer\n"); // prompt
    scanf_s("%d", &integer2); // read an integer

    sum = integer1 + integer2; // assign total to sum
    sum2 = integer1 - integer2;
    sum3 = integer1 * integer2;
    sum4 = integer1 / integer2;
    printf("%d+%d=%d\n", integer1, integer2, sum);
    printf("%d-%d=%d\n", integer1, integer2, sum2);
    printf("%d*%d=%d\n", integer1, integer2, sum3);
    printf("%d/%d=%d\n", integer1, integer2, sum4);
    return 0;
    
} 