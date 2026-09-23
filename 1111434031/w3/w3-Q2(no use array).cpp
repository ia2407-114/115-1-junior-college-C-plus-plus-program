#include <stdio.h>
void PutNext(int a, int b ,int c ,int d,int round) {
	if (round == 4)
		return;
	if (a >= b && a >= c && a >= d)
	{
		printf("%d\n", a);
		PutNext(b, c, d, 0,++round);
	}
	else if(b >= a && b >= c && b >=d){
		printf("%d\n", b);
		PutNext(a,0,c,d, ++round);
	}
	else if (c >= a && c >= b && c >= d) {
		printf("%d\n", c);
		PutNext(a, b, 0, d, ++round);
	}
	else if (d >= a && d >= b && d >= c) {
		printf("%d\n", d);
		PutNext(a, b, c, 0, ++round);
	}
	
}
int main(void) {
	int a, b, c, d;
	printf("輸入四個數");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	PutNext(a, b, c, d,0);
}
