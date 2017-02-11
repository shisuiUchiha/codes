#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n;
        cin>>n;
        int arr[2*n][2*n];
        int v[2*n][2*n];
        for(int j=0;j<2*n;j++){
            for(int k=0;k<2*n;k++){
                cin>>arr[j][k];
                v[j][k]=0;
            }
        }
        long ans=0;
        for(int j=0;j<2*n;j++){
            for(int k=0;k<2*n;k++){
                if(v[j][k]!=1){
                    v[2*n-1-j][2*n-1-k]=1;
                    v[2*n-1-j][k]=1;
                    v[j][2*n-1-k]=1;
                    ans=ans+max(max(arr[j][k],arr[2*n-1-j][2*n-1-k]),max(arr[2*n-1-j][k],arr[j][2*n-1-k]));
                }
            }
        }
        cout<<ans<<endl;
    }
}
