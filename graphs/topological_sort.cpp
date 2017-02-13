#include<bits/stdc++.h>
using namespace std;
vector<int>p[11];
int visit[11]={0};
stack<int>s;
int dfs(int i){
	visit[i]=1;
	for(int j=0;j<p[i].size();j++){
		if(visit[p[i][j]]!=1){dfs(p[i][j]);}
	}
	s.push(i);
}



int main(){
	int v,e;
	cin>>v>>e;
	int m[v+1][v+1];
	for(int i=0;i<=v;i++){
		for(int j=0;j<=v;j++){
			m[i][j]=0;
		}
	}
	for(int i=0;i<e;i++){
		int a,b;
		cin>>a>>b;
		p[a].push_back(b);
		m[a][b]=1;
	}
	for(int i=1;i<=v;i++){
		if(visit[i]==0){
			dfs(i);
		}
	}
	int ans[v];
	int k=0;
	while(s.empty()!=true){
		int a=s.top();
		s.pop();
		cout<<a<<" ";
		//ans[k]=a;
		//k++;
	}
	/*int temp;
	for(int j=0;j<v;j++){
		if(ans[j]>ans[j+1]){
			if(m[ans[j]][ans[j+1]]!=1){
				temp=ans[j+1];
				ans[j+1]=ans[j];
				ans[j]=temp;
			}
		}
	}
	for(int i=0;i<v;i++){
		cout<<ans[i]<<" ";
	}*/



}
