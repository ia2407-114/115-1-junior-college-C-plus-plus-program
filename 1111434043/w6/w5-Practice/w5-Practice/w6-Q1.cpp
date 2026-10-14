#include <stdio.h>

int main(void) {
    int grade = 0; 
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;
    printf("請連續輸入字母 (輸入 Ctrl-Z 並按下 Enter 即可結束)：\n");
    while ((grade = getchar()) != EOF) {
        switch (grade) {

        case 'A':
        case 'a':
            aCount++; 
            break;    

        case 'B':
        case 'b':
            bCount++;
            break;

        case 'C':
        case 'c':
            cCount++;
            break;

        case 'D':
        case 'd':
            dCount++;
            break;

        case 'F':
        case 'f':
            fCount++;
            break;

        case '\n':
        case '\t':
        case ' ':
            break;

        default:
            printf("輸入錯誤！'%c' 不是正確的等第字母。\n", grade);
            break;
        } 
    } 
    printf("\n--- 各等第數量統計 ---\n");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);
    return 0; 
}