#pragma once
#include "stdio.h"

void Q1_Arr() {
	char input = 0;
	int count[7] = {};//A B C D E F數量
	printf("輸入A~F(不分大小寫)\n>");
	while ((input = getchar()) != EOF) {
		if (input == '\n' ||
			input == '\r' ||
			input == ' ') {
		}else if (input >= 65 && input <= 70)
		{
			count[(int)input - 65]++;
		}
		else if (input >= 97 && input <= 102) {
			count[(int)input - 97]++;
		}
		else {
			printf("輸入不合法");
		}

	}
	printf("輸入結束喵\nA有%d個\nB有%d個\nC有%d個\nD有%d個\nE有%d個\nF有%d個\n", count[0], count[1], count[2], count[3], count[4], count[5]);
}

