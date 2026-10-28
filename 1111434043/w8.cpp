#include <stdio.h>
int f(int n);
int main(){
	int n;
	printf("輸入費氏數列項數\n");
	scanf("%d",&n);
	printf("\n結果:%d",f(n));
} 
int f(int n){
	if(n==0){
		return 0;
	}	
	else if (n==1){
		return 1;
	}
	else {
		return f(n-2)+f(n-1);
	}
}
