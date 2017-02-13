#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k,q;
    cin>>n>>k>>q;
    int arr[n];
    k=k%n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<q;i++){
        int a;
        cin>>a;
        int ans=a-k;
        if(ans<0){
            ans=ans+n;
        }
        cout<<arr[ans]<<endl;
    }
}
