#pragma once
#include <stdio.h>
#define arraySize 50
void print_func(int ids[], const char title[], float data[][arraySize], int dataCount);
void Q2() {
	printf("輸入學號 數學成績 英文成績\n=>");
	int ids[arraySize] = { 0 };
	float englishScore[arraySize] = { 0 };
	float mathScore[arraySize] = { 0 };
	float avgScore[arraySize] = { 0 };
	float data[3][arraySize] = { 0 };
	for (int i = 0; i < arraySize - 1; i++)
	{
		int id = 0;
		float inputEnglish = 0;
		float inputMath = 0;
		scanf_s("%d", &id);
		if (id == 999)
		{
			ids[i] = -1;
			break;
		}
		scanf_s("%f %f", &inputEnglish, &inputMath);
		ids[i] = id;
		englishScore[i] = inputEnglish;
		mathScore[i] = inputMath;
		avgScore[i] = (inputEnglish + inputMath) / 2.0;
		data[0][i] = englishScore[i];
		data[1][i] = mathScore[i];
		data[2][i] = avgScore[i];
	}

	//打印
	print_func(ids, "id\t英文\t數學\t平均\n", data, 3);
}

//不喜歡把科目寫死，當成一個通用的印表func
//比如3 科 6 人 data長
//1 5 9 7 5 1
//4 2 6 4 8 6
//4 5 2 2 3 7 
//row是科目 col是個人
void print_func(int ids[],const char title[], float data[][arraySize],int dataCount) {
	printf(title);
	for (int i = 0; i < arraySize; i++)
	{
		if (ids[i] == -1)
			break;
		printf("%d\t", ids[i]);
		for (int j = 0; j < dataCount; j++)
		{
			printf("%.2f\t", data[j][i]);
		}
		printf("\n");
	}
}
