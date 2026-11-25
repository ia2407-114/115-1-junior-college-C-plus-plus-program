#include <stdio.h>
void sum(int beg, int end) {
	int sum = 0;
	for (int i = beg;i <= end;i++) {
		sum += i;
	}
	printf("%d to %d sum=%d\n", beg, end, sum);
}
int main(void) {
	int a, b;
	printf("two number?\n");
	scanf_s("%d %d", &a, &b);
	sum(a, b);
	return 0;
}