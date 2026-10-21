#pragma once
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int max(int a, int b);
int dise(int rdc, unsigned int seed);
int RandNext(int min, int max);

void Q1() {
	//time 的回傳值是time_t，強制轉為無符號整數
	srand((unsigned int)time(NULL));
	printf("兩人骰出最大者為 %d", max(dise(2, rand()), dise(2, rand())));

}

//取最大值，題目要求印出x
int max(int a,int b) {
	printf("比較 %d %d ", a, b);
	if (a>b)
	{
		printf("%d大\n", a);
		return a;
	}
	else {
		printf("%d大\n", b);
		return b;
	}
}

//我覺得seed不必要就是了，RandNext會自動取下一個，最一開始指定時間做種子就好
int dise(int rdc, unsigned int seed) {
	int total = 0;
	srand(seed);
	for (int i = 0; i < rdc; i++)
	{
		total += RandNext(1, 6);
	}
	return total;
}
//取min~max的隨機值，max上限為RAND_MAX
int RandNext(int min, int max) {
	return min + rand() % (max - min + 1);
}
