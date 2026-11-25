#pragma once
#include<stdio.h>
#define ColLen 3
#define RowLen 10
bool Binary_search(int data[][ColLen], int low, int high, int Key, int* ref, bool isSort = false);
bool Binary_search(int data[][ColLen], int dataLen, int Key, int* ref);
void array_sort(int data[][ColLen], int dataLen, int orderBy, bool flag);
void OrQ2() {
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
	
	array_sort(data, RowLen, 0, 1);
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

	//if (Binary_search(data, 0,RowLen-1, userInput, &refIndex))
	if (Binary_search(data, RowLen, userInput, &refIndex))
	{
		printf("\n找到了!\n");
		printf("Id\t數學\t英文\n");
		printf("%d\t%d\t%d", data[refIndex][0], data[refIndex][1], data[refIndex][2]);
	}
	else {
		printf("\n沒有這個人qwq\n");
	}

}
void dataSwap(int pa[ColLen], int pb[ColLen], int len) {
	for (int i = 0; i < len; i++)
	{
		int tmp = pa[i];
		pa[i] = pb[i];
		pb[i] = tmp;
	}

}
void array_sort(int data[][ColLen], int dataLen, int orderBy, bool flag) {
	bool isSwap = true;
	while (isSwap) {
		isSwap = false;
		for (size_t i = 0; i < dataLen - 1; ++i) {
			bool cmp = flag ?data[i][orderBy] > data[i + 1][orderBy]:
			data[i][orderBy] < data[i + 1][orderBy];
			if (cmp) {
				isSwap = true;
				dataSwap(data[i], data[i + 1], ColLen);
			}
		}
	}
}


//懶得測
bool Binary_search(int data[][ColLen], int dataLen, int Key, int* ref) {
	array_sort(data, dataLen, 0, 1);
	int low = 0;
	int high = dataLen;
	int mid;
	while (true) {
		if (low > high)
		{
			return false;
		}
		mid = (low + high) / 2;
		if (data[mid][0] > Key)
		{
			//往右找
			high = mid - 1;
		}
		else if (data[mid][0] < Key)
		{
			low = mid + 1;
		}
		else {
			*ref = mid;
			return true;
		}
	}
}

//遞歸寫法
bool Binary_search(int data[][ColLen],int low,int high, int Key, int* ref,bool isSort) {
	if (!isSort)
	{
		array_sort(data, high, 0, 1);
	}
	int mid = (low + high) / 2;
	if (low>high)
	{
		return false;
	}
	if (data[mid][0] > Key)
	{
		//往右找
		return Binary_search(data, low, mid-1, Key, ref,true);
	}
	else if (data[mid][0] < Key)
	{
		return Binary_search(data, mid+1, high, Key, ref,true);
	}
	else {
		*ref = mid;
		return true;
	}
	return false;
	
}
