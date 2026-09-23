#include <stdio.h>
#define inputNum 4
//老師我不想窮舉😭
void Q2(void) {
	int inputArray[inputNum];
	printf("請輸入四個整數\n");
	for (int i = 0; i < inputNum; i++)
	{
		printf(">");
		scanf_s("%d", &inputArray[i]);
	}
	//排序
	int sortArray[inputNum] = {};

	for (int i = 0; i < inputNum; i++)
	{
		//找剩下堆最大的那個
		int currMax = 0;
		int currMaxIndex = 0;
		for (int j = 0; j < inputNum; j++)
		{
			if (inputArray[j] > currMax)
			{
				currMax = inputArray[j];
				currMaxIndex = j;
			}
		}
		sortArray[i] = currMax;
		inputArray[currMaxIndex] = 0;
	}

	printf("排序後:\n");
	for (int i = 0; i < inputNum; i++)
	{
		printf("%d \n", sortArray[i]);
	}
}