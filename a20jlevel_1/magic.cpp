#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string s;
	cin>>s;
	ll i=0;
	while(i<s.length()){
		if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
			i=i+3;
		}
		else if(s[i]=='1' && s[i+1]=='4'){
			i=i+2;
		}
		else if(s[i]=='1'){
			i=i+1;
		}
		else{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;

}