#include<bits/stdc++.h>
using namespace std;


int main(){
	int a,o;
	int b,s;
	cin>>a>>o>>b>>s;
	if(o<=s){
		cout<<"NO"<<endl;
		return 0;
	}
	int h=0;
	while(a<=b && o>s){
		if(a==b){
			cout<<"YES"<<endl;
			h=1;
			return 0;
		}
		else{
			a=a+o;
			b=b+s;
		}
	}
	if(h==0){
		cout<<"NO"<<endl;
	}
}