#pragma once
#include <stdio.h>
#include <conio.h>

// 宣告函數：處理按鍵輸入
int get_key_input() {
    int ch = _getch();
    if (ch == 0 || ch == 224) {
        ch = _getch();
        switch (ch) {
        case 75: // 左方向鍵
        case 72: // 上方向鍵
            return -1;
        case 77: // 右方向鍵
        case 80: // 下方向鍵
            return 1;
        }
    }
    else if (ch == 13 || ch == 10) { // Enter 鍵
        return 3;
    }
    return 0; // 其他按鍵忽略
}

// 詢問使用者並回傳被選中的選項索引 (從 0 開始算)
int askUser(const char* text, const char opt[]) {
    puts(text);
    puts("");

    // 解析選項，將逗號分隔的字串拆解到陣列中方便管理
    // 這裡我們直接動態計算總選項數
    int totalOpts = 1;
    for (int i = 0; opt[i] != '\0'; i++) {
        if (opt[i] == ',') totalOpts++;
    }

    int cChose = 0; // 從第 0 個選項開始

    while (1) {
        // 移回行首並清除整行，準備重新渲染選項
        printf("\r\033[2K");

        int currentOpt = 0;
        int i = 0;

        while (opt[i] != '\0') {
            // 如果當前解析到的選項等於目前光標所在的選項，開啓反白
            if (currentOpt == cChose) {
                printf("\033[7m");
            }
            else {
                printf("\033[0m");
            }

            // 印出當前選項的一個字元，直到遇到逗號或結尾
            while (opt[i] != '\0' && opt[i] != ',') {
                putchar(opt[i]);
                i++;
            }

            // 關閉屬性，印出選項間隔
            printf("\033[0m");

            if (opt[i] == ',') {
                currentOpt++;
                i++; // 跳過逗號
                printf("  "); // 選項之間的間距
            }
        }

        // 接收按鍵
        int r = get_key_input();
        if (r == 3) { // 按下 Enter
            printf("\n");
            return cChose;
        }

        if (r != 0) {
            cChose += r;
            // 循環邊界處理
            if (cChose < 0) {
                cChose = totalOpts - 1;
            }
            else if (cChose >= totalOpts) {
                cChose = 0;
            }
        }
    }

    return 0;
}
