#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    ll pos[n+1]={0};
    for(ll i=0;i<n;i++){
    	cin>>arr[i];
    	pos[arr[i]]=i;
    }
    ll q;
    cin>>q;
    ll vas=0,pet=0;
    for(ll i=0;i<q;i++){
    	ll a;
    	cin>>a;
    	ll j=pos[a];
    	vas=vas+j+1;
    	pet=n-j+pet;
    }
    cout<<vas<<" "<<pet<<endl;
}
