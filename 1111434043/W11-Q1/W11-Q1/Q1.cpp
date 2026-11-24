//題目1.請修改上面的排序程式碼，，主程式負責從鍵盤輸入10筆資料、印出原始的資料順序，並建立一個sort( )副程式，
// 傳遞三個參數，分別為: 陣列、陣列長度與一個旗標(0:由大到小，1: 由小到大)到副程式中，
// 根據旗標排序後將結果工整、美觀的印出來。
#include <stdio.h>
#define SIZE 10
void sort(int[], int, int); //陣列、陣列長度與一個旗標(0:由大到小，1: 由小到大)

int main(void)
{
    int a[SIZE] ;
    int k;
    puts("輸入原始資料");
    for (int i = 0; i < SIZE; ++i) {
        scanf_s("%d",& a[i]);
    }    
    puts("原始資料:");
    for (int i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    printf("\n輸入旗標，(0:由大到小，1: 由小到大)");
    scanf_s("%d", &k);
    sort(a, SIZE, k); //???為什摩a不是傳陣列過去???    
}

void sort(int data[], int length, int p) {  
    int tmp = 0;
    if (p == 0) { //0:由大到小
        for (int i = 1;i < length;i++) {//回合數
            for (int j = 0;j < (length - i);j++) { //第j個數字做排序
                if (data[j] < data[j + 1]) {
                    tmp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = tmp;
                }
            }
        }
    }
    else if (p == 1) { //1: 由小到大
        for (int i = 1;i < length;i++) {//回合數
            for (int j = 0;j < length - i;j++) {
                if (data[j] > data[j + 1]) {
                    tmp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = tmp;
                }
            }
        }
    }
    puts("\n排序結果:");
    for (int i = 0; i < SIZE; ++i) {
        printf("%4d", data[i]);
    }
    puts("");
}