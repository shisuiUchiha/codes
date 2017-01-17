#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int d=max(a,b);
    int e=max(d,c);
    int arr[8000];
    for(int i=0;i<=n;i++){
        arr[i]=0;
    }
    arr[a]=1;
    arr[b]=1;
    arr[c]=1;
    for(int i=0;i<=n;i++){
        if(arr[i]!=0){
            cout<<i<<" "<<arr[i]<<endl;
            if(arr[i]+1>arr[i+a]){
                arr[i+a]=arr[i]+1;
            }
            if(arr[i]+1>arr[i+b]){
                arr[i+b]=arr[i]+1;
            }
            if(arr[i]+1>arr[i+c]){
                arr[i+c]=arr[i]+1;
            }
        }
    }
    cout<<arr[n]<<endl;
}
