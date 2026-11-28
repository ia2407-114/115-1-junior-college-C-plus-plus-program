#include <stdio.h>

int main()
{
	int grade = 0;
	printf("¿é¤J¦¨ÁZ:");
	scanf_s("%d", &grade);
	if (grade >= 90) {
		puts("a");
	}
	else if (grade >= 80) {
		puts("b");
	}
	else if (grade >= 70) {
		puts("c");
	}
	else if (grade >= 60) {
		puts("d");
	}
	else {
		puts("e");
	}
	return 0;
}