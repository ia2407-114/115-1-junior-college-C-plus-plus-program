#include <stdio.h>

double count_pi(int n) {
	double sum = 0.0;
	double tmp = 1.0;
	double mm = 1.0;		//建議所有數字都先存成浮點數型態(有小數點的)，後面運算時才不會有餘數時被無條件捨去
	for (int i = 1;i <= n;i = i + 1) {
		tmp = 1 / mm;
		mm = mm + 2;
		if (i % 2 == 0) {
			sum = sum - tmp;
		}
		else
		{
			sum = sum + tmp;
		}


	}

	return sum * 4;
}
int main() {
	int n=0;
	printf("輸入要計算之項數\n");
	scanf_s("%d",& n);
	double ans = count_pi(n);
	printf("展開%d次的結果為%lf", n, ans);

}