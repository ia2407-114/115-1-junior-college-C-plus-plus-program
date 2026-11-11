#include<stdio.h>
int main() {
	int id[10];
	float math[10], english[10], avg[10];
	int i;
	int sum=0;
	int count;
	for (i = 0; i < 10; i++) {
		printf("請輸入學號 數學成績 英文成績\n");
		scanf_s("%d %f %f", &id[i], &math[i], &english[i]);
		if (id[i] == 999) {
			break;
		}
		sum = math[i] + english[i];
		avg[i] = float(sum) / 2.0;
	}
	
	count = i;
	for (i = 0; i < count; i++) {
		printf("%d %.0f %.0f %.2f\n",id[i],math[i], english[i], avg[i]);
	}
	return 0;
}
