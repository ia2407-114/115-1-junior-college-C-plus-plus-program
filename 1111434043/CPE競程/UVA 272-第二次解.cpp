#include <bits/stdc++.h>
using namespace std;

int main (){
	bool t =true;
	string s ;
	while (getline(cin,s)){
		
		vector<char>(s.begin(),s.end());
		for (int i=0;i<s.length();i=i+1){
			if (s[i]=='"'){
			if (t==true) {
				cout << "``";
				t = false;
			}else{
				cout << "''";
				t = true;
			}
		}else{
			cout << s[i];
		}	
		}
		
		cout<<"\n";
		
	}
	
	return 0;
} 
