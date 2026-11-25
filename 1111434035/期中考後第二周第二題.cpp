#include <stdio.h>

int linear_search(int arr[][3], int rows, int target);

int main(void) {
    int students[10][3] = {
        { 1, 85, 90 },
        { 2, 72, 88 },
        { 3, 90, 95 },
        { 4, 60, 65 },
        { 5, 78, 82 },
        { 6, 92, 89 },
        { 7, 55, 70 },
        { 8, 88, 85 },
        { 9, 79, 75 },
        { 10, 95, 98 }
    };
    int rows = 10;
    int target_id;
    int result;
    printf("            學生成績原始資料            \n");
    printf("學號\t數學成績\t英文成績\n");
    for (int i = 0; i < rows; i++) {
        printf("%d\t%d\t\t%d\n", students[i][0], students[i][1], students[i][2]);
    }
    printf("請輸入您想要搜尋的學生學號：");
    scanf_s("%d", &target_id);
    result = linear_search(students, rows, target_id);
    if (result == 0) {
        printf("\n[提示] 找不到學號為 %d 的資料！\n", target_id);
    }
    return 0;
}
int linear_search(int arr[][3], int rows, int target) {
    int found = 0;
    for (int i = 0; i < rows; i++) {
        if (arr[i][0] == target) {
            found = 1;
            printf(" 找到目標！詳細資料如下：\n");
            printf(" 學號: %d\n", arr[i][0]);
            printf(" 數學成績: %d\n", arr[i][1]);
            printf(" 英文成績: %d\n", arr[i][2]);
            break;
        }
    }
    return found;
}