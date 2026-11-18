#include <stdio.h>

int linear_search(int b[10][3], int size, int target);

int main(void)
{
    int students[10][3] = {
        {1, 85, 90},
        {2, 72, 68},
        {3, 95, 92},
        {4, 60, 75},
        {5, 88, 84},
        {6, 76, 79},
        {7, 91, 95},
        {8, 65, 70},
        {9, 82, 88},
        {10, 78, 80}
    };
    for (int i = 0; i < 10; i++) {
        printf("%-10d %-10d %-10d\n", students[i][0], students[i][1], students[i][2]);
    }

    int targetId;
    printf("請輸入要搜尋的學生學號: ");
    scanf_s("%d", &targetId);
    int flag = linear_search(students, 10, targetId);

    if (flag == 1) {
        printf("找到\n");
        for (int i = 0; i < 10; i++) {
            if (students[i][0] == targetId) {
                printf("%-10d %-10d %-10d\n", students[i][0], students[i][1], students[i][2]);
                break;
            }
        }
    }
    else {
        printf("找不到\n");
    }
    return 0;
}

int linear_search(int b[10][3], int size, int target){
    for (int i = 0; i < size; i++) {
        if (b[i][0] == target) {
            return 1;       
        }
    }
    return 0; 
}
