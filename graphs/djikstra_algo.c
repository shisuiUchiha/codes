#include<bits/stdc++.h>
using namespace std;

int main(){
	int v,e;
	cin>>v>>e;
	vector<pair<int,int>>p[10005];
	for(int i=0;i<e;i++){
		int a,b,c;
		cin>>a>>b>>c;
		p[a].push_back(make_pair(b,c));
	}
	long dis[v+1];
	bool visit[v+1];
	for(int i=0;i<=v;i++){
		dis[i]=1e9;
		visit[i]=0;
	}
	dis[1]=0;
	visit[1]=0;
	multiset< pair < int,int > > m;
	m.insert({0,1});
	while(!m.empty()){
		pair<int,int>h=*m.begin();
		m.erase(m.begin());
		int f=h.second;
		if(visit[f]==true){
			continue;
		}
		visit[f]=true;
		for(int i=0;i<p[f].size();i++){
			if(dis[p[f][i].first]>dis[f]+p[f][i].second){
				dis[p[f][i].first]=dis[f]+p[f][i].second;
			}
			m.insert(dis[p[f][i].first],p[f][i].first)
		}
	}
	for(int i=1;i<=v;i++){
		cout<<dis[i]<<" ";
	}

}
