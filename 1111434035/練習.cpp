#include <stdio.h>
#define MAX 50
void pr(int id[],int ma[],int eng[],int k);
int main(void) {
	int  ma[MAX], eng[MAX];
	int id[MAX] = { 0 };
	int i;
	for ( i = 0;i < MAX;i++) {
		printf("id?\n");
		scanf_s("%d", &id[i]);
		if (id[i]==999)
		{
			break;
		}
		printf("%d ==>math and english?\n",i+1);
		scanf_s("%d %d", &ma[i],&eng[i]);
	}
	pr(id,ma, eng,MAX);
	return 0;
}
void pr(int id[], int ma[], int eng[], int k) {
	for (int i = 0;i < k;i++) {
		if (id[i] == 999) {
			break;
		}
		printf("id:%d math:%d english:%d avg:%.2f\n", id[i], ma[i], eng[i], (ma[i] + 1.0*eng[i]) / 2);
	}
	
}