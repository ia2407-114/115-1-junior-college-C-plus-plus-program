
#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("請輸入4個整數：\n");
    printf("第一個整數====>");
    scanf_s("%d", &a);

    printf("第二個整數====>");
    scanf_s("%d", &b);

    printf("第三個整數====>");
    scanf_s("%d", &c);

    printf("第四個整數====>");
    scanf_s("%d", &d);

    printf("\n數值由大到小排序結果為：\n");


    // a 最大
    if (a > b && a > c && a > d) {
        // b 第二大
        if (b > c && b > d) {
            // c 第三大
            if (c > d) printf("%d > %d > %d > %d\n", a, b, c, d);
            // d 第三大
            else printf("%d > %d > %d > %d\n", a, b, d, c);
        }
        // c 第二大
        else if (c > b && c > d) {
            // b 第三大
            if (b > d) printf("%d > %d > %d > %d\n", a, c, b, d);
            // d 第三大
            else printf("%d > %d > %d > %d\n", a, c, d, b);
        }
        else { // d 第二大
            if (b > c) printf("%d > %d > %d > %d\n", a, d, b, c);
            else printf("%d > %d > %d > %d\n", a, d, c, b);
        }
    }

    // b 最大
    else if (b > a && b > c && b > d) {
        // a 第二大
        if (a > c && a > d) {
            // c 第三大
            if (c > d) printf("%d > %d > %d > %d\n", b, a, c, d);
            // d 第三大
            else printf("%d > %d > %d > %d\n", b, a, d, c);
        }
        // c 第二大
        else if (c > a && c > d) {
            // a 第三大
            if (a > d) printf("%d > %d > %d > %d\n", b, c, a, d);
            // d 第三大
            else printf("%d > %d > %d > %d\n", b, c, d, a);
        }
        // d 為第二大
        else { 
            // a 第三大
            if (a > c) printf("%d > %d > %d > %d\n", b, d, a, c);
            // c 第三大
            else printf("%d > %d > %d > %d\n", b, d, c, a);
        }
    }
    // c 最大
    else if (c > a && c > b && c > d) {
        // a 第二大
        if (a > b && a > d) {
            // b 第三大
            if (b > d) printf("%d > %d > %d > %d\n", c, a, b, d);
            // d 第三大
            else printf("%d > %d > %d > %d\n", c, a, d, b);
        }
        // b 第二大
        else if (b > a && b > d) {
            // a 第三大
            if (a > d) printf("%d > %d > %d > %d\n", c, b, a, d);
            // b 第三大
            else printf("%d > %d > %d > %d\n", c, b, d, a);
        }
        else { // d 第二大
            // a 第三大
            if (a > b) printf("%d > %d > %d > %d\n", c, d, a, b);
            // b 第三大
            else printf("%d > %d > %d > %d\n", c, d, b, a);
        }
    }
    // d 最大
    else {
        // a 第二大
        if (a > b && a > c) {
            // b 第三大
            if (b > c) printf("%d > %d > %d > %d\n", d, a, b, c);
            // c 第三大
            else printf("%d > %d > %d > %d\n", d, a, c, b);
        }
        // b 第二大
        else if (b > a && b > c) {
            // a 第三大
            if (a > c) printf("%d > %d > %d > %d\n", d, b, a, c);
            // c 第三大
            else printf("%d > %d > %d > %d\n", d, b, c, a);
        }
        // c 第二大
        else { 
            // a 第三大
            if (a > b) printf("%d > %d > %d > %d\n", d, c, a, b);
            // b 第三大
            else printf("%d > %d > %d > %d\n", d, c, b, a);
        }
    }

    return 0;
}