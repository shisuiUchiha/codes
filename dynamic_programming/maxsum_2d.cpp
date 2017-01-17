#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int p[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>p[i][j];
		}
	}
	long s[n][m];
	s[0][0]=p[0][0];
	for(int i=1;i<n;i++){
		s[i][0]=s[i-1][0]+p[i][0];
	}
	for(int i=1;i<m;i++){
		s[0][i]=s[0][i-1]+p[0][i];
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+p[i][j];
		}
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int a,b;
		cin>>a>>b;
		cout<<s[a-1][b-1]<<endl;
	}
}
