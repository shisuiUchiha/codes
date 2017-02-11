#include<bits/stdc++.h>
using namespace std;

int main(){
	queue< pair<int,int> > q;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		q.push(make_pair(a,i));
	}
	int ans;
	while(q.empty()!=true){
		pair<int,int>p=q.front();
		p.first=p.first-m;
		if(p.first<=0){
			q.pop();
			ans=p.second;
		}
		else{
			q.pop();
			q.push(p);
		}
	}
	cout<<ans+1<<endl;
}