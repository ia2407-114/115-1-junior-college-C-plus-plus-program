//題目1.請建立一個10x3的2維陣列，分別存放10個學生的學號、數學、英文成績，主程式負責印出原始的資料，
// 先建立/呼叫一個sort_array( )副程式，傳遞三個參數，分別為: 陣列、資料列(筆)數與一個旗標(0:由大到小，1: 由小到大)到副程式中，
// 根據旗標排序後。輸入你要搜尋的key，再建立/呼叫一個binary_search( )副程式，傳遞四個參數，分別為: 陣列、key、low、 high到副程式中，
// 根據尋找的結果，傳回旗標值(0:找不到，1: 找到)，由主程式將結果工整、美觀的印出來，若傳回值為0，則印出找不到資料訊息。
#include<stdio.h>
#define TALL 10
#define FAT 3
void sort_array(int [][FAT], int, int);//陣列、資料列(筆)數與一個旗標(0:由大到小，1: 由小到大)
int binary_search(int [][FAT],int,int,int);//陣列、key、low、 high
int main() {
	int k = 0;
	int find = 0;
	int left = 0;
	int right = 0;
	int st[TALL][3] = { {9,99,98},{7,94,96}, {8,69,98},{5,94,100},{4,98,88}, {6,79,69},{1,100,98},{2,95,98}, {10,93,97}, {3,98,84} };//學號、數學、英文成績
	printf("原始的資料\n");
	for (int i = 0;i < TALL;i++) {		
			printf("學號:%d\t數學成績%d\t、英文成績%d\n",st[i][0],st[i][1],st[i][2]);		
	}
	printf("輸入旗標(0:由大到小，1: 由小到大)\n");
	scanf_s("%d", &k);
	sort_array(st, TALL, k);			
	printf("輸入你要搜尋的key\n");
	scanf_s("%d", &find);
	left = 0;
	right = TALL - 1;
	int count = binary_search(st, find, left, right);
	if (count == 1) { //有找到
		printf("找到了\n");
		for (int i = 0;i < TALL;i++) {
			if (st[i][0] == find) {
				printf("學號:%d\t數學成績%d\t、英文成績%d\n\n", st[i][0], st[i][1], st[i][2]);
			}
		}
	}
	else if (count == 0) {
		printf("找不到\n\n");
	}
	printf("排序後資料:\n");
	for (int i = 0;i < TALL;i++) {
		printf("學號:%d\t、數學成績:%d\t、英文成績:%d\n", st[i][0], st[i][1], st[i][2]);
	}
}
void sort_array(int data[][FAT], int len, int cc) {//陣列、資料列(筆)數與一個旗標(0:由大到小，1: 由小到大)
	int tmp[1][3] = { 0,0,0 };
	if (cc == 0) { //0:由大到小
		for (int i = 0;i < len;i++) {
			for (int j = 0;j < len - i-1;j++) {
				if (data[j][0] < data[j+1][0]) {
					tmp[0][0] = data[j][0];
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
	else if (cc == 1) {//1: 由小到大
		for (int i = 0;i < len;i++) {
			for (int j = 0;j < len - i-1;j++) {
				if (data[j][0] > data[j + 1][0]) {
					tmp[0][0] = data[j][0];
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
}

int binary_search(int data[][FAT],int key,int low,int high) {//陣列、key、low、 high
	int mid = 0;
	if (data[0][0] > data[1][0]) {
		while (low <= high) {
			mid = (low + high) / 2;
			if (data[mid][0] == key) {
				return 1;
			}
			else if (data[mid][0] > key) {//在右邊				
				low = mid + 1;
			}
			else if (data[mid][0] < key) { //在左邊
				high = mid - 1;
			}


		}
		return 0;
	}
	else {
		while (low <= high) {
			mid = (low + high) / 2;
			if (data[mid][0] == key) {
				return 1;
			}
			else if (data[mid][0] > key) {//在左邊
				high = mid - 1;
			}
			else if (data[mid][0] < key) { //在右邊
				low = mid + 1;
			}
		}
		return 0;
	}	
}