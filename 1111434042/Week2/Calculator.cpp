#include <stdio.h>
int main() {
	int num = 0, num1 = 0, sum = 0, sum1 = 0, sum2 = 0, sum3 = 0; //先設變數並初始化

	printf("Enter your first number\n");  //提示使用者輸入第一個數字
	scanf_s("%d", &num); //讀取使用者輸入的第一個數字
	printf("Enter your second number\n"); //提示使用者輸入第二個數字
	scanf_s("%d", &num1); //讀取使用者輸入的第二個數字

	sum = num + num1;  //計算加法
	sum1 = num - num1; //計算減法
	sum2 = num * num1; //計算乘法
	sum3 = num / num1; //計算除法

	printf("%d+%d=%d\n", num, num1, sum);  //輸出加法結果
	printf("%d-%d=%d\n", num, num1, sum1); //輸出減法結果
	printf("%d*%d=%d\n", num, num1, sum2); //輸出乘法結果
	printf("%d/%d=%d\n", num, num1, sum3); //輸出除法結果
	return 0;
}