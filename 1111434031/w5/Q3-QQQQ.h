#pragma once
#include "stdio.h"
unsigned int pOwO(int a, int b) {
	unsigned r = 1;
	for (int i = 0; i < b; i++)
	{
		r *= a;
	}
	return r;
}

unsigned int fact(int x) {
	unsigned r = 1;
	for (int i = 1; i <= x; i++)
	{
		r *= i;
	}
	return r;
}

void Q4_QQQQ() {
	int tgX = 0;
	double cw = 1;
	scanf_s("%d", &tgX);
	printf("%d", pOwO(5, 2));
	for (int i = 0; i < 13; i++)
	{
		cw += (pOwO(tgX,i+1)*1.0 / fact(i + 1));
		//printf("%d %d %d %d\n", tgX, i + 1,pOwO(tgX, i + 1), fact(i + 1));
	}
	printf("結果%lf", cw);
}

