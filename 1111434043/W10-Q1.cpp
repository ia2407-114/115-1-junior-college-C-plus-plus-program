#include <stdio.h>

//題目1. 建立1個一維整數陣列id, 以及3個一維浮點數陣列math, english 與avg，
// 透過鍵盤輸入學生的學號、數學成績、英文成績並分別放入陣列id, math, english 中，id輸入999停止，
// 再計算出每個學生的平均成績放入陣列avg內對應的位置，
// 最後印出工整的學號、數學、英文、平均成績的報表。

int main() {
	int id[50];
	double math[50];
	double english[50];
	double avg[50];
	int tmp = 0;
	printf("輸入學號、數學、英文");
	for (int i = 0;i <= 50;i++) {
		scanf_s("%d",&id[i]);
		if (id[i] == 999) {
			break ;
		}
		tmp = tmp + 1;
		scanf_s("%lf",&math[i]);
		scanf_s("%lf",&english[i]);
		avg[i] = (math[i] + english[i]) / 2;
	}
	printf("學生的學號、數學成績、英文成績和頻均分別為:\n");
	for (int j = 0;j < tmp;j++) {
		printf("%d\t%f\t%f\t%f\t%f\n",id[j],math[j],english[j],avg[j]);
	}
}



