//題目3. 承題目2，建立一個10x3的2維陣列，分別存放10個學生的學號、數學、英文成績，主程式負責印出原始的資料，
// 並建立一個sort_array( )副程式，傳遞三個參數，分別為: 陣列、資料列(筆)數與一個旗標(0:由大到小，1: 由小到大)到副程式中，
// 根據旗標排序後(老師有口頭講用學號坐排序)，結果由副程式工整、美觀的印出來。
#define TALLL 10
#define FAT 3
#include<stdio.h>
void sort_array(int [][3], int, int); //陣列、資料列(筆)數與一個旗標(0:由大到小，1: 由小到大)
int main() {
	int pp = 0;
	int st[10][3] = { {9,88,99},{7,83,96} ,{8,85,90},{4,100,99} , {5,96,100},{6,98,99} , {2,83,89},{1,85,89} , {3,84,97},{10,82,91} };
	printf("原始資料:\n10個學生的學號、數學、英文成績:\n");
	for (int i = 0;i < TALLL;i++) {
		printf("學號:%d\t數學%d\t英文成績%d\n",st[i][0], st[i][1], st[i][2]);
	}
	printf("輸入一個旗標(0:由大到小，1: 由小到大)\n");
	scanf_s("%d", &pp);
	sort_array(st, TALLL, pp);
}
void sort_array(int data[][3], int len, int p) {
	int tmp[1][3] = {0,0,0};
	if (p == 0) { //0:由大到小
		for (int i = 0;i <len-i;i++) {
			for (int j = 0;j < len ;j++) {
				if (data[j][0] < data[j + 1][0]) {
					tmp[0][0] = data[i][0];
					data[j][0] = data[j + 1][0];
					data[j + 1][0] = tmp[0][0];

					tmp[0][1] = data[j][1];
					data[j][1] = data[j + 1][1];
					data[j + 1][1] = tmp[0][1];

					tmp[0][2] = data[j][2];
					data[j][2] = data[j + 1][2];
					data[j + 1][2] = tmp[0][2];
				}			
			}
		}
	}
	else if (p == 1) {//1: 由小到大

	}
	printf("學號排序後結果:\n");
	for (int m = 0;m < TALLL;m++) {
		printf("學號%d\t數學成績:%d\t、英文成績%d\n", data[m][0], data[m][1], data[m][2]);
	}

}
