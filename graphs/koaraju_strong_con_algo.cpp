#include<bits/stdc++.h>
using namespace std;
stack<int> s;
bool visit[16]={0};
vector<int> p[16];
vector<int> r[16];
int z=0;

int dfs(int source){
	visit[source]=true;
	cout<<source<<endl;
	for(int i=0;i<p[source].size();i++){
		if(visit[p[source][i]]!=true){dfs(p[source][i]);}
	}
	s.push(source);
}
int dfs_t(int e){
	visit[e]=true;
	cout<<e<<" ";
	z++;
	for(int i=0;i<r[e].size();i++){
		if(visit[r[e][i]]!=true){
			dfs_t(r[e][i]);
		}
	}
}
int main(){
	int v,e;
	cin>>v>>e;
	for(int i=0;i<e;i++){
		int a,b;
		cin>>a>>b;
		p[a].push_back(b);
		r[b].push_back(a);
	}

	for(int i=1;i<=v;i++){
		if(visit[i]==false){
			dfs(i);
		}
	}
	int even=0;
	int odd=0;
	for(int i=0;i<=v;i++){
		visit[i]=false;
	}
	while(s.empty()!=true){
		int e=s.top();
		s.pop();
		if(visit[e]==false){
			dfs_t(e);
		}
		cout<<endl;
		if(z%2==0){
			even=even+z;
		}
		else{
			odd=odd+z;
		}
		z=0;
	}

	cout<<odd-even<<endl;


}
