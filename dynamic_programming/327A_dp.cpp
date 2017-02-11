#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int dp[n][n];
    int h=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==0){
            arr[i]=-1;
        }
        else{
            arr[i]=1;
            h++;
        }
    }
    int maxx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                dp[i][j]=h-arr[i];
            }
            else if(j>i){
                dp[i][j]=dp[i][j-1]-arr[j];
            }
            else{
                dp[i][j]=0;
            }
            if(dp[i][j]>maxx){
                maxx=dp[i][j];
            }
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<maxx<<endl;
}
