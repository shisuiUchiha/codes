#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
        ll arr[n];
        ll sum=0;
        for(ll j=0;j<n;j++){
            cin>>arr[j];
            sum=sum+arr[j];
        }
        ll left=0;
        ll flag=0;
        ll right=n-1;
        ll z=0;
        while(sum%2==0 && left!=right){
            sum=sum/2;
            ll var=0;
            ll dummy=0;
            for(ll k=left;k<=right;k++){
                dummy=k;
                var=var+arr[k];
                if(var==sum){
                    break;
                }
                if(var>sum){
                    flag=1;
                    break;
                }
            }
            if(flag==1){break;}
            if(right-dummy>dummy-left){
                left=dummy+1;
                right=right;
            }
            else{
                left=left;
                right=dummy;
            }
            z++;
        }
        cout<<z<<endl;
    }
}
