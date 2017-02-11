#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll v;
    cin>>v;
    ll e;
    cin>>e;
    vector< pair <ll , ll> >adj[3001];
    int visited[3001]={0};
    pair< ll , ll> s;
    for(ll i=0;i<e;i++){
        ll a,b,w;
        cin>>a>>b>>w;
        adj[a].push_back(make_pair(w,b));
        adj[b].push_back(make_pair(w,a));
    }
    priority_queue< pair<ll,ll>,vector< pair<ll,ll> >,greater< pair<ll,ll> > > Q;
    ll f;
    ll ans=0;
    cin>>f;
    Q.push(make_pair(0,f));
    while(Q.empty()!=true){
        s=Q.top();
        Q.pop();
        //cout<<s.second<<endl;
        if(visited[s.second]==1){
            continue;
        }
        visited[s.second]=1;
        ans=ans+s.first;
        for(ll j=0;j<adj[s.second].size();j++){
            if(visited[adj[s.second][j].second]!=1)
            {Q.push(adj[s.second][j]);}
        }
    }
    cout<<ans<<endl;

}
