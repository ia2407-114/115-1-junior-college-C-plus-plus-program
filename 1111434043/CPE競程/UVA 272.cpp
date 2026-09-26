#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	bool open =true;
	while (getline(cin,s)){
	for (int i=0;i<s.length();i++){
		
		if (s[i]=='"'){
			
			if (open ==true){
				cout<< "``";
				open =false;
			}
			else{
				cout << "''";
				open =true;
			}
		}
		else{
			cout<<s[i];
		}
		
	}cout<<"\n";
	}
	
	return 0;
	
}
