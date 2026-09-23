#include <stdio.h>

int Q1(void) {
	int input = 0;
	printf("請輸入成績\n>");
	scanf_s("%d", &input);
	int grade = input;
	if (grade >=90)
	{
		puts("你得到了A");
	}
	else if (grade >= 80) {
		puts("你得到了B");
	}
	else if (grade >= 70) {
		puts("你得到了C");
	}
	else if (grade >= 60) {
		puts("你得到了D");
	}
	else {
		puts("你得到了F，雜魚");
	}
	return 0;
}