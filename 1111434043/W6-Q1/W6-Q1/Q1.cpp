#include <stdio.h>

int main() {
	int sw = 0;
	int acount = 0;
	int bcount = 0;
	int ccount = 0;
	int dcount = 0;
	int fcount = 0;
	printf("輸入等級並按enter，輸入完後按ctrl+z然後按enter\n");
	while ((sw = getchar() )!= EOF) {
		switch (sw) {
		case 'A':
		case 'a':
			acount = acount + 1;
			break;

		case 'B':
		case 'b':
			bcount = bcount + 1;
			break;

		case 'C':
		case 'c':
			ccount = ccount + 1;
			break;

		case 'D':
		case 'd':
			dcount = dcount + 1;
			break;

		case 'F':
		case 'f':
			fcount = fcount + 1;
			break;
		case '\n'://按enter就算是換行，所以一樣要規範到，不然會跳到錯誤訊息那邊；比較嚴謹的甚至可以把'\t'也加上去(規範tab用的)
			break;

		default:
			printf("錯誤訊息\n");
			break;
		}

	}

	printf("A的等級的有%d個\n", acount);
	printf("B的等級的有%d個\n", bcount);
	printf("C的等級的有%d個\n", ccount);
	printf("D的等級的有%d個\n", dcount);
	printf("F的等級的有%d個\n", fcount);




}