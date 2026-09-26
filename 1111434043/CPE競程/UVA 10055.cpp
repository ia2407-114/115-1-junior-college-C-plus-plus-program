#include <bits/stdc++.h>
using namespace std;

int main(){
	
	long long num_one ;
	long long num_two ;
	
	while (cin>>num_one&&cin>>num_two){
		
		long long ans;
		ans=abs(num_one-num_two);
		
		cout<<ans<<"\n";
		
	}
	return 0;
}
