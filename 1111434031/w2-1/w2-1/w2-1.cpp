#include <stdio.h>

// function main begins program execution 
int main(void)
{
	int integer1, integer2, sum,sub,mut; // first number to be entered by user 
	int div =0;//需要小數改double

	printf("Enter first integer\n"); // prompt
	scanf_s("%d", &integer1); // read an integer

	printf("Enter second integer\n"); // prompt
	scanf_s("%d", &integer2); // read an integer

	sum = integer1 + integer2; // assign total to sum
	sub = integer1 - integer2; // assign total to sum
	mut = integer1 * integer2; // assign total to sum
	div = (double)integer1 / (double)integer2; // assign total to sum

	printf("Sum is %d\n", sum); 
	printf("sub is %d\n", sub); 
	printf("mut is %d\n", mut); 
	printf("div is %d\n", div);//改%f 
} // end function main



//題目1.請修改上面程式碼，將兩個數值分別進行加、減、乘、除之後，並且印出結果，例如:
//輸入 300與50之後，印出 :
//	300 + 50 = 350
//	300 - 50 = 250
//	300 * 50 = 15, 000
//	300 / 50 = 6