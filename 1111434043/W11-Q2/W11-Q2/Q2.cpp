//題目2.請建立一個10x3的2維陣列，分別存放10個學生的學號、數學、英文成績，主程式負責印出原始的資料，
// 並建立一個linear_search( )副程式，傳遞三個參數，分別為: 陣列、陣列筆數與一個鍵值(學生學號)到副程式中
// ，根據尋找的結果，傳回旗標值(0:找不到，1: 找到)，由主程式將結果工整、美觀的印出來，若傳回值為0，則印出找不到資料訊息。

#include <stdio.h>
int linear_search(int[][3], int, int);//陣列、陣列筆數與一個鍵值(學生學號)
int main() {
	int k=0;
	int st[10][3] = {{1,99,98},{2,95,85},{3,96,99},{4,93,92},{5,99,98},{6,95,85},{7,96,99},{8,99,98},{9,95,85},{10,96,99}}; //存放10個學生的學號、數學、英文成績
	printf("原始資料:\n");
	for (int i = 0;i < 10;i++) {		
			printf("第%d學號的數學成績:  %d  、英文成績  :%d\n", st[i][0], st[i][1], st[i][2]); //印出原始的資料
	}
	printf("輸入鍵值(學生學號)\n");
	scanf_s("%d", &k);
	int tmp = linear_search(st, 10, k);
	if (tmp == 0) {
		printf("\n找不到資料訊息");
	}
	else if (tmp == 1) {
		for(int i=0;i<10;i++){
			if(st[i][0]==k){
				printf("學號%d的人數學成績: %d 、英文成績: %d",st[i][0],st[i][1],st[i][2]);
				break;
			}
		}
	}
}

int linear_search(int data[][3], int len, int key) {
	int count = 0;
	for (int i = 0;i < len;i++) {
			if (data[i][0] == key) {
				count = 1;
				break;
			}
	}
	return count;
}