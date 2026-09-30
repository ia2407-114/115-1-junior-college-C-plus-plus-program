#include <stdio.h>

int main() {
	int lastInput = 0;
	double sum = 0;
	int count = 0;

	while (lastInput >= 0) {
		printf("輸入第%d位同學的成績\n>", count + 1);
		scanf_s("%d", &lastInput);
		if (lastInput > 0)
		{
			sum += lastInput;
			count++;
		}
	}
	double avg = sum / count;
	printf("輸入結束，共%d位同學，平均成績%f分", count, avg);
}