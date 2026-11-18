#include<stdio.h>
#define SIZE 10
void sort(int b[], size_t size, int flag);
int main()
{
	int a[SIZE];
	printf("請輸入10個整數資料\n");
	for (int i = 0; i < SIZE; i++) {
		printf("請輸入第%d個", i + 1);
		scanf_s("%d", &a[i]);
	}
	printf("\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%4d", a[i]);
	}
	printf("\n");

	int flag;
	printf("請選擇排序方式 (0: 由大到小, 1: 由小到大): ");
	scanf_s("%d", &flag);

	sort(a, SIZE, flag);


	return 0;

}
void sort(int b[], size_t size, int flag) {
    for (unsigned int pass = 1; pass < size; ++pass) {
        for (size_t i = 0; i < size - 1 - pass; ++i) {
            if (flag == 1) {
                // 小到大
                if (b[i] > b[i + 1]) {
                    int hold = b[i];
                    b[i] = b[i + 1];
                    b[i + 1] = hold;
                }
            }
            else if (flag == 0) {
                // 大到小
                if (b[i] < b[i + 1]) {
                    int hold = b[i];
                    b[i] = b[i + 1];
                    b[i + 1] = hold;
                }
            }
        }
    }
    for (size_t i = 0; i < size; ++i) {
        printf("%4d,", b[i]);
    }

}
