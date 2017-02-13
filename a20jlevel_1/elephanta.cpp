#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	ll temp=1e9+7;
	ll ind=0;
	ll flag=0;
	ll a;
	for(int i=0;i<n;i++){
		cin>>a;
		if(temp==a){
			flag=1;
		}
		if(temp>a){
			temp=a;
			ind=i+1;
			flag=0;
		}
	}
	if(flag==1){
		cout<<"Still Rozdil"<<endl;
	}
	else{
		cout<<ind<<endl;
	}
}