#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    ll sum=0;
    ll minn=1000000000;
    ll ans=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<minn){minn=arr[i];ans=i;}
        if(i<k){
            sum=sum+arr[i];
        }
    }
    ll p=sum;
    if(k==1){cout<<ans+1<<endl;return 0;}
    ll temp;
    ll index=0;
    if(n==k){cout<<"1"<<endl;return 0;}
    for(ll i=0;i<n-k;i++){
           temp=p-arr[i]+arr[i+k];
           if(sum>temp){
            sum=temp;
            index=i+1;
           }
           p=temp;
    }
    cout<<index+1<<endl;
}
