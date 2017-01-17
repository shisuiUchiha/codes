#include<bits/stdc++.h>
using namespace std;

int main(){
	int v,e;
	cin>>v>>e;
	long m[v+1][v+1];
	for(int i=0;i<=v;i++){
		for(int j=0;j<=v;j++){
			if(i!=j){m[i][j]=1e9;}
			else{
				m[i][j]=0;
			}
		}
	}
	for(int k=0;k<e;k++){
		long a,b,c;
		cin>>a>>b>>c;
		m[a][b]=c;
	}
	for(int k=1;k<=v;k++){
		for(int i=1;i<=v;i++){
			for(int j=1;j<=v;j++){
				if(m[i][j]>(m[i][k]+m[k][j])){
					m[i][j]=m[i][k]+m[k][j];
				}
			}
		}
	}
	for(int j=2;j<=v;j++){
		cout<<m[1][j]<<" ";
	}
}
