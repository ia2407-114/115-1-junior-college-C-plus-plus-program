#pragma once
#include<stdio.h>
#define ColLen 3
#define RowLen 10
bool linear_search(int data[][ColLen], int dataLen, int Key, int* ref);

void Q2() {
	int data[RowLen][ColLen] = { 
		{3,81,78}, 
		{9,5,91},
		{8,94,86},
		{4,5,71},
		{10,5,39},
		{21,23,45},
		{22,57,43},
		{7,89,8},
		{1,100,61},
		{2,40,3},
	};


	printf("==原始資料==\n");
	printf("ID\t數學\t英文\n");
	for (int i = 0; i < RowLen; i++)
	{
		for (int j = 0; j < ColLen; j++)
		{
			printf("%d\t", data[i][j]);
		}
		puts("");
	}
	printf("你要找誰?");
	int userInput = 0;
	int refIndex = 0;
	scanf_s("%d", &userInput);
	
	if (linear_search(data, RowLen, userInput, &refIndex))
	{
		printf("\n找到了!\n");
		printf("Id\t數學\t英文\n");
		printf("%d\t%d\t%d",data[refIndex][0], data[refIndex][1], data[refIndex][2]);
	}
	else {
		printf("\n沒有這個人qwq\n");
	}

}

/// <summary>
/// 沒看懂你要什麼
/// </summary>
/// <param name="data"></param>
/// <param name="dataLen"></param>
/// <param name="Key"></param>
/// <param name="ref"></param>
/// <returns></returns>
bool linear_search(int data[][ColLen],int dataLen,int Key,int *ref) {
	for (int i = 0; i < dataLen; i++)
	{
		if (data[i][0] == Key) {
			*ref = i;
			return true;
		}
	}
	return false;
}

