#include <bits/stdc++.h> 
using namespace std;

int main(){
	long long t;
	cin >> t;
	cin.ignore();
	int count[128]={0};
	int big_num = -1;
	while(t--){
		string s;
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			if(isalpha(s[i])){
				int cc = toupper(s[i]);
				count[cc]=count[cc]+1;	
				if(big_num<=count[cc]){
					big_num =count[cc];
				}
			}		
		}
	}
	for (int c=big_num;c!=0;c--){
		for (char ans='A';ans<='Z';ans++){
			if (count[ans]==c){
				cout << ans <<" "<< c <<"\n";
			}
		}
	}
	
	return 0;
	}
