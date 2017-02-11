#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int n;
	cin>>n;
	if(n%2!=0){
		cout<<"-1"<<endl;
	}
	else{
		int k=2;
		int p=1;
		while(k<=n){
			cout<<k<<" "<<p<<" ";
			k=k+2;
			p=p+2;
		}
	}
}