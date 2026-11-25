#include <stdio.h>
#define ROWS 10
#define C 3
void sort_array(int arr[][C], int rows, int flag);
int main(void) {
	int students[ROWS][C] = {
		{ 1,100,90 },
		{ 2,100,80 },
		{ 3,100,70 },
		{ 4,100,60 },
		{ 5,100,50 },
		{ 6,100,40 },
		{ 7,100,30 },
		{ 8,100,20 },
		{ 9,100,10 },
		{ 10,100,100 }
	};
	int row = ROWS;
	int flag;
	for (int i = 0;i < row;i++) {
	printf("%d\t%d\t%d\n", students[i][0], students[i][1], students[i][2]);
	}
	printf("s to b==>1  ;  b to s==>0\n");
	scanf_s("%d", &flag);
    sort_array(students, row, flag);
	return 0;
}
void sort_array(int arr[][C], int rows, int flag) {
		for (int i = 0;i <rows-1;i++) {
			for (int j = i+1;j < rows ;j++) {
				if (flag == 0 && arr[i][0]<arr[j][0]) {
					for (int a = 0;a < 3;a++) {
						int temp = arr[i][a];
						arr[i][a] = arr[j][a];
						arr[j][a] = temp;
					}
				}
				if (flag == 1 && arr[i][0] > arr[j][0]) {
					for (int a = 0;a < 3;a++) {
						int temp = arr[i][a];
						arr[i][a] = arr[j][a];
						arr[j][a] = temp;
					}
				}
			}
		}
		for (int i = 0;i < rows;i++) {
			printf("%d\t%d\t%d\n", arr[i][0], arr[i][1], arr[i][2]);
		}
}
