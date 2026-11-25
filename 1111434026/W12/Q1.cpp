#include<stdio.h>
void sort_array(int s[10][3], int number, int t);
int binary_search(int b[10][3] ,int key, int low, int high);
#define n 10
int main() {
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
    printf("%10s %10s %10s\n", "學號", "數學", "英文");
    for (int i = 0; i < n; ++i) {
        printf_s("%10d %10d %10d\n", students[i][0], students[i][1], students[i][2]);
    }
    printf("請輸入排列方式(0:由大到小，1: 由小到大)");
    int t;
    scanf_s("%d", &t);
    sort_array(students, n, t);

    printf("請輸入要尋找的學號");
    int key;
    scanf_s("%d",& key);

    sort_array(students, n, 1); // 由小到大,再搜尋

    int found = binary_search(students, key, 0, n - 1);

    if (found == 1) {
        printf("找到\n");
        printf("%10s %10s %10s\n", "學號", "數學", "英文");
        for (int i = 0; i < n; ++i) {
            if (students[i][0] == key) {
                printf_s("%10d %10d %10d\n", students[i][0], students[i][1], students[i][2]);
                break;
            }
        }
    }
    else if (found==0)
    {
        printf("找不到");
    }
   

    return 0;
}
void sort_array(int s[10][3], int number, int t) {


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
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
            else if (t == 1) {
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
    printf("%10s %10s %10s\n", "學號", "數學", "英文");
    for (int i = 0; i < n; ++i) {
        printf_s("%10d %10d %10d\n", s[i][0], s[i][1], s[i][2]);
    }
}
int binary_search(int b[10][3], int key, int low, int high) {
    while (low <= high) {
        int mid = (low + high) / 2;

        if (b[mid][0] == key) {
            return 1; // 找到
        }
        else if (key < b[mid][0]) {
            high = mid - 1; // 比中間小，往左半邊找
        }
        else {
            low = mid + 1;  // 比中間大，往右半邊找
        }
    }
    return 0; // 找不到
}
