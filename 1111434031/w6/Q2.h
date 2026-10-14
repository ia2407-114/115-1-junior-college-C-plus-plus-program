#pragma once
#include "stdio.h"


double GetPiByN(int n);
void Q2() {
	int n = 0;
	printf("輸入所需項數\n>");
	scanf_s("%d", &n);

	double pi = GetPiByN(n);

	printf("n=%d時為%f", n, pi);
}

double GetPiByN(int n) {
	double pi = 1;

	// 1 - (1/3) + (1/5)
	//   ^       ^
	//符號
	int s = -1;
	for (int i = 3; i < n; i++)
	{
		if (!(i % 2))
			continue;
		pi += s * (1.0 / i);
		s *= -1;
	}
	return 4*pi;
}
