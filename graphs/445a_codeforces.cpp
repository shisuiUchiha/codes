#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='.'){
                if((i+j)%2==0){arr[i][j]='B';}
                else{
                    arr[i][j]='W';
                }
            }
            cout<<arr[i][j];
        }
        cout<<endl;
    }

}
