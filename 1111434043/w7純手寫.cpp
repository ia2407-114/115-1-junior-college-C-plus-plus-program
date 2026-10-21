#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int dise(int c,int seed){
	int total=0;
	
	for(int i=1;i<=c;i++){
		total =total+(rand()%6+1);
	}
	
	
	
	return total;
}


int main(){
	srand(time(NULL));
	int point_one=0;
	int point_two=0;
	int c =2;
	printf("³Ì¤j­È¬O%d",max(dise(c,point_one),dise(c,point_two)));
}
