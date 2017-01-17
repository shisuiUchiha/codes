#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int r;
    cin>>n>>r;
    int arr[n-1];
    int visit[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        visit[i]=0;
    }
    visit[n-1]=0;
    visit[1]=1;
    int k=1;
    while(k<n){
        k=k+arr[k-1];
        visit[k]=1;
    }
    if(visit[r]==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
