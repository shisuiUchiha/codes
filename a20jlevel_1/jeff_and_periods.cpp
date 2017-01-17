#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	ll arr[n];
	ll z[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
		z[i]=arr[i];
	}
	sort(z,z+n);
	vector<ll>v;
	v.push_back(z[0]);
	for(ll i=0;i<n-1;i++){
		if(z[i]!=z[i+1]){
            v.push_back(z[i+1]);
		}
	}
	pair<int,int>p[n];
	ll k=0;
	for(ll i=0;i<v.size();i++){
		ll h=v[i];
		ll flag=0;
		ll lol=0;
		ll tmp=0;
		ll first=0;
		ll second=0;
		for(ll j=0;j<n;j++){
			if(arr[j]==h && flag==0){
                   first=j;
                   flag=1;
			}
			else if(arr[j]==h && flag==1){
                   second =j;
                   tmp=second-first;
                   flag=2;
			}
			else if(arr[j]==h){
				if(j-second==tmp){
					second=j;
				}
				else{
					lol=1;
					break;
				}
			}
		}
		if(lol==0){
			p[k]=make_pair(h,tmp);
			k++;
		}
	}
	cout<<k<<endl;
	for(ll i=0;i<k;i++){
		cout<<p[i].first<<" "<<p[i].second<<endl;
	}

}