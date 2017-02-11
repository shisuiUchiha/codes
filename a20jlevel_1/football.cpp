#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int one=1;
	string h;
	int two=0;
	for(int i=0;i<n-1;i++){
		string b;
		cin>>b;
		if(b==s){
			one++;
		}
		else{
			two++;
			h=b;
		}
	}
	if(one>two){
		cout<<s<<endl;
	}
	else{
		cout<<h<<endl;
	}


}