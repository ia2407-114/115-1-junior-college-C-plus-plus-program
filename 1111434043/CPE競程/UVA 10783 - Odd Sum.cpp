#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int a;
	int b;
	int count;
	count =0;
	while (t--)
	{
		int tmp;
		tmp=0;
		cin >>a;
		cin >>b;
		if ((a%2 !=1)){
		a=a+1;
		}
		if ((b%2 !=1)){
			b=b-1;
		}
		for (int i=a;i<=b;i=i+2){
			tmp=tmp+i;
		}
		
		count=count+1;
		cout <<"Case "<< count <<": "<<tmp<<"\n";
		
	}
	
	

	
	
	
	
	
	
	
	
}
