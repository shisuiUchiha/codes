#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll a;
	cin>>a;
	ll five=0;
	ll zero=0;
	for(ll i=0;i<a;i++){
		ll b;
		cin>>b;
		if(b==5){
			five++;
		}
		if(b==0){
			zero++;
		}
	}
	five=five/9;
	if(five>0 && zero>0){
		for(ll j=0;j<(five*9);j++){
			cout<<"5";
		}
		for(ll j=0;j<zero;j++){
			cout<<"0";
		}
	}
	else if(zero>0){
		cout<<"0";
	}
	else{
		cout<<"-1"<<endl;
	}

}