#include<iostream>
using namespace std;
#define z 500

int level[500]={0};
int visit[500]={0};
int graph[z][z];

void bfs(int graph[z][z],int start,int n){
	int queue[n];
	int first=0;
	int last=0;
	queue[0]=start;
	last++;
	while(first!=last){
		int v=queue[first];
		last=last-1;
		level[v]=1;
		visit[v]=1;
		for(int i=0;i<n;i++){
			if(graph[v][i]==1 && visit[i]!=1){
				queue[last]=i;
				last++;
				level[i]=level[v]+1;
			}
		}
		
	}
	
	
}


int main(){
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++){
		int a,b;
		cin>>a>>b;
		graph[a][b]=1;
	}
	int start=1;
	int x;
	cin>>x;
	int k=0;
	bfs(graph,start,n);
	for(int i=0;i<=n;i++){
		if(level[i]==x){
			k++;
		}
	}
	cout<<k<<endl;
}