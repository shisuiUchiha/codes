#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	ll x;
	cin>>x;
    ll p=0;
	while(x!=0){
		map<int,vector<int> >m;
		m.clear();
		for(ll i=0;i<x;i++){
			ll a,b;
			cin>>a>>b;
			m[a].push_back(b);
			m[b].push_back(a);
		}
		ll h,k;
		cin>>h>>k;
		while(h!=0 && k!=0){
			map<int,int>level;
	        level.clear();
	        ll visit[10000]={0};
	        ll previsit[10000]={0};
			queue<int>q;
		    q.push(h);
            level[h]=0;
		    while(!q.empty()){
			    int lol=q.front();
			    q.pop();
			    visit[lol]=1;
			    vector<int>n;
			    n=m[lol];
			    for(int z=0;z<n.size();z++){
				    //cout<<"n"<<z<<" "<<n[z]<<endl;
			    	//cout<<n[z]<<endl;
				    if (visit[n[z]]!=1){
                            if(previsit[n[z]]==2){
                            	if(level[n[z]]>level[lol]+1){
				    		    level.erase(n[z]);
				    		    level[n[z]]=level[lol]+1;
				    		    q.push(n[z]);
				    		    //cout<<"level"<<n[z]<<" "<<level[n[z]]<<endl;
				    	        }
                            }
				    		else{
				    			level[n[z]]=level[lol]+1;
				    		    q.push(n[z]);
				    		    previsit[n[z]]=2;
				    		    //cout<<"level"<<n[z]<<" "<<level[n[z]]<<endl;
				    	}
				    	}
				    else if(visit[n[z]]==1){
				    	//cout<<"here"<<n[z]<<endl;
				    	if(level[n[z]]>level[lol]+1){
				    		level.erase(n[z]);
				    		level[n[z]]=level[lol]+1;
				    		q.push(n[z]);
				    		//cout<<"level"<<n[z]<<" "<<level[n[z]]<<endl;
				    	}
				    }
                    
			    }
		    }
			int r=0;
			int w=level[h];
			//cout<<"start "<<w<<endl;
			map<int,int> :: iterator it;
			for(it=level.begin();it!=level.end();it++){
				int y=it->second;
				//cout<<it->first<<" "<<y<<endl;
				if(abs(y-w)>k){
                     r++;
				}
			}
			p++;
			cout<<"Case "<<p<<": "<<r<<" nodes not reachable from node "<<h<<" with TTL = "<<k<<"."<<endl;
			cin>>h>>k;
		}
		cin>>x;
	}

}