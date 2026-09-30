#include <stdio.h>

void Q1() {
	int inputN = 0;
	int inputM = 0;
	int i = 1;
	int thN = 1;
	printf("輸入計算多少的階乘\n>");
	scanf_s("%d", &inputN);
	while (i <= inputN) {
		thN *= i;
		i++;
	}
	printf("%d!是%d\n", inputN, thN);

	printf("輸入需要的到最大不超過多少的階乘\n>");
	scanf_s("%d", &inputM);
	int manj = 1;
	int j = 2;
	for (j = 2; manj <= inputM; j++)
	{
		manj *= j;
	}
	printf("n=%d", j - 1);
}