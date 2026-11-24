#include<stdio.h>
void sort_array(int s[10][3], int number,int t);
#define n 10
int main(){
    int students[n][3] = {
    { 2, 72, 68 },
    { 11, 85, 90 },
    { 93, 95, 92 },
    { 4, 60, 75 },
    { 15, 88, 84 },
    { 64, 76, 79 },
    { 88, 91, 95 },
    { 8, 65, 70 },
    { 91, 82, 88 },
    { 10, 78, 80 }
    };
    for (int i = 0; i < n; ++i) {
        printf_s("%10d %10d %10d\n", students[i][0], students[i][1], students[i][2]);
    }
    printf("請輸入排列方式(0:由大到小，1: 由小到大)");
    int t;
    scanf_s("%d", & t);
    sort_array(students, n, t);

	return 0;
}
void sort_array(int s[10][3], int number, int t) {
    
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i-1;++j) {
            if (t == 0) {
                //大盜小
                if (s[j][0] < s[j + 1][0]) {
                    int x;
                    x = s[j][0];
                    s[j][0] = s[j + 1][0];
                    s[j + 1][0] = x;

                    x = s[j][1];
                    s[j][1] = s[j + 1][1];
                    s[j + 1][1] = x;

                    x = s[j][2];
                    s[j][2] = s[j + 1][2];
                    s[j + 1][2] = x;
                }
            }
            //小到大
            else if(t==1){
                if (s[j][0] > s[j + 1][0]) {
                    int x;
                    x = s[j][0];
                    s[j][0] = s[j + 1][0];
                    s[j + 1][0] = x;

                    x = s[j][1];
                    s[j][1] = s[j + 1][1];
                    s[j + 1][1] = x;

                    x = s[j][2];
                    s[j][2] = s[j + 1][2];
                    s[j + 1][2] = x;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf_s("%10d %10d %10d\n", s[i][0], s[i][1], s[i][2]);
    }
}
