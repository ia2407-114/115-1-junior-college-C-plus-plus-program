//題目2.承第1題並參考程式碼Example03.c，修改第一題的程式碼，
// 由主程式將鍵盤輸入的資料存入陣列中，再將必要的陣列與參數(例如，
// 實際輸入了幾筆資料)傳遞到副程式print_func()，由這個副程式印出結果。

#include <stdio.h>
#define max 50

void print_func(int [],double [],double [],double[], int);

int main() {
	int id[max];
	double math[max];
	double english[max];
	double avg[max];
	int tmp = 0;
	printf("輸入學號、數學、英文");
	for (int i = 0;i < max;i++) {
		scanf_s("%d", &id[i]);
		if (id[i] == 999) {
			break;
		}
		tmp = tmp + 1;
		scanf_s("%lf", &math[i]);
		scanf_s("%lf", &english[i]);
		avg[i] = (math[i] + english[i]) / 2;
	}
	print_func(id,math,english,avg,tmp);
}
void print_func(int id[], double math[], double english[], double avg[], int tmp) {
	
	printf("學生的學號、數學成績、英文成績和頻均分別為:\n");
for (int j = 0;j < tmp;j++) {
		printf("%d\t%lf\t%lf\t%lf\n", id[j], math[j], english[j], avg[j]);
	}

	}
	


