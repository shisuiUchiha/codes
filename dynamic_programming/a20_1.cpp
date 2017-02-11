#include<bits/stdc++.h>
using namespace std;


int main(){
    long n;
    cin>>n;
    long arr[n];
    long sum=0;
    for(long i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    if(sum%3!=0){
        cout<<"0"<<endl;
        return 0;
    }
    long lp=0;
    long rp=0;
    long fin=1;
    while(rp<n){
        long ans=0;
        long sump=0;
        for(long i=lp;i<n;i++){
            sump=sump+arr[i];
            if(sump==sum/3){ans++;cout<<ans<<endl;if(i==n-1){rp=n;}}
            if(sump>sum/3){
                lp=i;
                rp=i;
                fin=fin*ans;
            }
        }
    }
    cout<<fin<<endl;

}
