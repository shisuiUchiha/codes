#include<bits/stdc++.h>
using namespace std;

int main(){
	int v,e;
	cin>>v>>e;
	pair<int,pair<int,int>>p[e];
	for(int i=0;i<e;i++){
		int a,b,c;
		cin>>a>>b>>c;
		p[i]=make_pair(c,make_pair(a,b));
	}
	long dis[v+1];
	for(int k=0;k<=v;k++){
		dis[k]=1e9;
	}
	dis[1]=0;
	for(int i=0;i<v-1;i++){
		for(int j=0;j<e;j++){
			if(dis[p[j].second.second]>dis[p[j].second.first]+p[j].first){
				dis[p[j].second.second]=dis[p[j].second.first]+p[j].first;
			}
		}
	}
	for(int j=2;j<=v;j++){
		cout<<dis[j]<<" ";
	}
}


//sample test case
/*
5 5
1 2 5
1 3 2
3 4 1
1 4 6
3 5 5

*/

