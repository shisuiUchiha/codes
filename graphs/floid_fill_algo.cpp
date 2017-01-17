#include<bits/stdc++.h>
using namespace std;
int n,m;
int visit[11][11]={{0,0}};
int p[11][11]={{0,0}};
bool FFA(int x,int y){
	if(x>m || y>n || x<1 || y<1){
		return false;
	}
	if(visit[x][y]==true){
		//cout<<"visit"<<x<<y<<" "<<visit[x][y]<<endl;
		return false;
	}
	if(x==m && y==n){
		return true;
	}
	if(p[x][y]==0){
		return false;
	}
	visit[x][y]=true;
	if(FFA(x+1,y)==true){
		return true;
	}
	if(FFA(x-1,y)==true){
		return true;
	}
	if(FFA(x,y+1)==true){
		return true;
	}
	if(FFA(x,y-1)==true){
		return true;
	}


}

int main(){
	cin>>n>>m;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0 || j==0){
				p[i][j]=0;
			}
			else{
				int a;
				cin>>a;
				p[i][j]=a;
			}
			visit[i][j]=0;
		}
	}
	bool k=FFA(1,1);
	if(k==1){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}


}
