#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        ll v,e;
        cin>>v>>e;
        vector<pair<ll,ll> >l[v+1];
        ll z[v+1][v+1];
        for(ll j=0;j<=v;j++){
            for(ll k=0;k<=v;k++){
                z[j][k]=1e13;
            }
        }
        for(ll j=0;j<e;j++){
            ll a,b,c;
            cin>>a>>b>>c;
            if(a!=b  && c<z[a][b]){
                z[a][b]=c;
               l[a].push_back(make_pair(b,c));
               l[b].push_back(make_pair(a,c));
            }
            
        }
        ll x;
        cin>>x;
        ll dist[v+1];
        ll visit[v+1];
        for(ll j=0;j<=v;j++){
            dist[j]=1e13;
            visit[j]=0;
        }
        dist[x]=0;
        multiset<pair<ll,ll> >m;
        m.insert({0,x});
        while(!m.empty()){
            pair<ll,ll> p=*m.begin();
            m.erase(m.begin());
            ll ver=p.second;
            if(visit[ver]!=0){
                continue;
            }
            visit[ver]=1;
            for(ll j=0;j<l[ver].size();j++){
                pair<ll,ll> lol=l[ver][j];
                ll cost=lol.second;
                ll rver=lol.first;
                if(dist[rver]>dist[ver]+cost){
                    dist[rver]=dist[ver]+cost;
                    m.insert({dist[rver],rver});
                }
            }
            
        }
        for(ll j=1;j<=v;j++){
            if(j!=x){
                if(dist[j]!=1e13){
                cout<<dist[j]<<" ";
                }
                else{
                    cout<<"-1"<<" ";
                }
            }
        }
        cout<<endl;
    }
}