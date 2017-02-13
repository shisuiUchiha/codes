#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n,m;
	cin>>n>>m;
	int ans=0;
	for(int i=0;i<sqrt(n)+1;i++){
		for(int j=0;j<sqrt(m)+1;j++){
			if(i*i+j==n && j*j+i==m){
				ans++;
			}

		}
	}
	cout<<ans<<endl;
}