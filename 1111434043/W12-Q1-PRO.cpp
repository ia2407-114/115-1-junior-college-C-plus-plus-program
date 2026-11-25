// 題目1.請建立一個10x3的2維陣列，分別存放10個學生的學號、數學、英文成績，主程式負責印出原始的資料，
// 先建立/呼叫一個sort_array( )副程式，
// 傳遞三個參數，分別為: 陣列、資料列(筆)數與一個旗標(0:由大到小，1: 由小到大)到副程式中，
// 根據旗標排序後。
// 輸入你要搜尋的key，
// 再建立/呼叫一個binary_search( )副程式，傳遞四個參數，
// 分別為: 陣列、key、low、 high到副程式中，
// 根據尋找的結果，傳回旗標值(0:找不到，1: 找到)，由主程式將結果工整、美觀的印出來，若傳回值為0，則印出找不到資料訊息。
#define TALLL 10
#define FAT 3
#include <stdio.h>
void sort_array(int[][FAT], int, int);          
int binary_search(int[][FAT], int, int, int);  
int main() {
    int pp = 0, key = 0;
    int st[TALLL][FAT] = {
        {9, 88, 99}, {7, 83, 96}, {8, 85, 90}, {4, 100, 99}, {5, 96, 100},
        {6, 98, 99}, {2, 83, 89}, {1, 85, 89}, {3, 84, 97}, {10, 82, 91}
    };

    printf("原始資料:\n10個學生的學號、數學、英文成績:\n");
    for (int i = 0; i < TALLL; i++) {
        printf("學號:%d\t數學:%d\t英文成績:%d\n", st[i][0], st[i][1], st[i][2]);
    }

    printf("\n輸入一個旗標 (0:由大到小，1:由小到大): ");
    scanf_s("%d", &pp);
    sort_array(st, TALLL, pp);

    printf("\n排序後結果:\n");
    for (int i = 0; i < TALLL; i++) {
        printf("學號:%d\t數學:%d\t英文成績:%d\n", st[i][0], st[i][1], st[i][2]);
    }
    printf("\n輸入你要搜尋的 key (學生學號): ");
    scanf_s("%d", &key);
    int flag = binary_search(st, key, 0, TALLL - 1);
    if (flag == 0) {
        printf("找不到資料訊息\n");
    }
    else {
        for (int i = 0; i < TALLL; i++) {
            if (st[i][0] == key) {
                printf("學號 %d 的學生數學成績: %d 、英文成績: %d\n", st[i][0], st[i][1], st[i][2]);
                break;
            }
        }
    }

    return 0;
}

void sort_array(int data[][FAT], int len, int p) {
    int tmp = 0;
    if (p == 0) {
        for (int i = 0; i < len - 1; i++) {
            for (int j = 0; j < len - 1 - i; j++) {
                if (data[j][0] < data[j + 1][0]) {
                    for (int k = 0; k < FAT; k++) { 
                        tmp = data[j][k];
                        data[j][k] = data[j + 1][k];
                        data[j + 1][k] = tmp;
                    }
                }
            }
        }
    }
    else if (p == 1) { 
        for (int i = 0; i < len - 1; i++) {
            for (int j = 0; j < len - 1 - i; j++) {
                if (data[j][0] > data[j + 1][0]) {
                    for (int k = 0; k < FAT; k++) {
                        tmp = data[j][k];
                        data[j][k] = data[j + 1][k];
                        data[j + 1][k] = tmp;
                    }
                }
            }
        }
    }
}
int binary_search(int data[][FAT], int key, int low, int high) {
    int mid = 0;
    int is_asc = 0;
    if (data[low][0] < data[high][0]) {
        is_asc = 1;
    }
    else {
        is_asc = 0;
    }
    while (low <= high) {
        mid = (low + high) / 2;

        if (data[mid][0] == key) {
            return 1; 
        }

        if (is_asc == 1) { 
            if (key < data[mid][0]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        else { 
            if (key > data[mid][0]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
    }

    return 0;
}
