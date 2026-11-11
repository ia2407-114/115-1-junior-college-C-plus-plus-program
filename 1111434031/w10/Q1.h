#pragma once
#include <stdio.h>
#define arraySize 50

void Q1() {
	printf("輸入學號 數學成績 英文成績\n=>");
	int ids[arraySize] = {0};
	float englishScore[arraySize] = { 0 };
	float mathScore[arraySize] = { 0 };
	float avgScore[arraySize] = { 0 };
	for (int i = 0; i < arraySize-1; i++)
	{
		int id=0;
		float inputEnglish=0;
		float inputMath=0;
		scanf_s("%d", &id);
		if (id == 999)
		{
			ids[i] = -1;
			break;
		}
		scanf_s("%f %f",&inputEnglish, &inputMath);
		ids[i] = id;
		englishScore[i] = inputEnglish;
		mathScore[i] = inputMath;
		avgScore[i] = (inputEnglish + inputMath) / 2.0;
	}
	//打印
	printf("id\t英文\t數學\t平均\n");
	for (int i = 0; i < arraySize; i++)
	{
		if (ids[i]==-1)
			break;
		printf("%d\t%.2f\t%.2f\t%.2f\n", ids[i], englishScore[i], mathScore[i], avgScore[i]);
	}
}
