#include <stdio.h>

int main() 
{
	int score=0;
	printf("請輸入一位學生的成績====>");
	scanf_s("%d", &score);
	if (score >= 90)
		puts("成績為A");
	else if (score >= 80)
		puts("成績為B");
	else if (score >= 70)
		puts("成績為C");
	else if (score >= 60)
		puts("成績為D");
	else
		puts("成績為F");
}