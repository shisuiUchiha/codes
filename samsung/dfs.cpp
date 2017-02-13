#include<iostream>
using namespace std;

int graph[500][500];
int visit[500];

void dfs(int head,int n){
	visit[head]=1;
	for(int i=1;i<=n;i++){
		if(graph[head][i]==1 && visit[i]!=1){
			dfs(i,n);
		}
	}
}


int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<500;i++){
		visit[i]=0;
	}
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		if(a==b) continue;
		graph[a][b]=1;
		graph[b][a]=1;
	}
	int head;
	cin>>head;
	dfs(head,n);
	int z=0;
	for(int i=1;i<=n;i++){
		if(visit[i]!=1){
			z++;
			cout<<i<<" ";
		}
	}
	cout<<z<<endl;
}