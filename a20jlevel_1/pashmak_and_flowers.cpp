#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fac(ll n)
{
  return (n == 1 || n == 0) ? 1 : fac(n - 1) * n;
}

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
    	cin>>arr[i];
    }
    sort(arr,arr+n);
    ll low=arr[0];
    ll high=arr[n-1];
    ll maxdiff=high-low;
    ll l=0;
    if(maxdiff==0){
    	ll ways=((n*(n-1))/2);
    	cout<<maxdiff<<" "<<ways<<endl;
    	return 0;
    }
    for(ll i=0;i<n;i++){
    	if(arr[i]==low){
    		l++;
    	}
    	else if(arr[i]>low){
    		break;
    	}
    }
    ll h=0;
    for(ll i=n-1;i>=0;i=i-1){
    	if(arr[i]==high){
    		h++;
    	}
    	else if(arr[i]<high){
    		break;
    	}
    }
    ll ways=l*h;
    cout<<maxdiff<<" "<<ways<<endl;

}