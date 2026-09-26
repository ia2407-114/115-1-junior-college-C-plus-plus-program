#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)&&s!="0"){
		int one_sum =0;
		int two_sum =0;
		for (int i =0;i<s.length();i=i+2){
			one_sum = one_sum + s[i]-'0';
			}
		for (int i =1;i<s.length();i=i+2){
			two_sum = two_sum + s[i]-'0';
		}
		if(abs(one_sum-two_sum)==0||(abs(one_sum-two_sum)%11==0)){
			cout<< s<< " is a multiple of 11.";
		}else{
			cout<< s<< " is not a multiple of 11.";
		}
		cout<<"\n";
	}
	
	return 0;
} 
