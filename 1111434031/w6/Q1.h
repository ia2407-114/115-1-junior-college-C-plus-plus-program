#pragma once
#include "stdio.h"

void Q1() {
	char input = 0;
	int count[7] = {};//A B C D E F數量
	printf("輸入A~F(不分大小寫)\n>");
	while ((input=getchar())!=EOF) {
		switch (input) {
			//問gemini得到的透傳
			//用switch寫這個好醜
			case 'a':
			case 'A': {
				count[0]++;
				break;
			}
			case 'b':
			case 'B': {
				count[1]++;
				break;
			}
			case 'c':
			case 'C': {
				count[2]++;
				break;
			}
			case 'd':
			case 'D': {
				count[3]++;
				break;
			}
			case 'e':
			case 'E': {
				count[4]++;
				break;
			}
			case 'f':
			case 'F': {
				count[5]++;
				break;
			}
			//Enter會有換行，過濾掉╰(*°▽°*)╯
			case '\n':{}
			case '\r':{}
			case ' ':{}

			default: {
				printf("輸入不合法喵");
				break;
			}
		}
	}
	printf("輸入結束喵\nA有%d個\nB有%d個\nC有%d個\nD有%d個\nE有%d個\nF有%d個\n", count[0], count[1], count[2], count[3], count[4], count[5]);

	
}
