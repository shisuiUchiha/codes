#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		sum=sum+a;
	}
	int ans=0;
	for(int i=sum+1;i<sum+6;i++){
		if(i%(n+1)!=1){
			ans++;
		}
	}
	cout<<ans<<endl;
}