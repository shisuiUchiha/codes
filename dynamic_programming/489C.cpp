#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    if(n==1 && s==0){
        cout<<"0"<<" "<<"0"<<endl;
        return 0;
    }
    if(s<1||s>(9*n)){
        cout<<"-1"<<" "<<"-1"<<endl;
        return 0;
    }
    int h[n]={0};
    int l[n]={0};
    int temp=s;
    int j=9;
    int i=0;
    while(temp>0){
        if(j<=temp){
            h[i]=j;
            temp=temp-j;
            i++;
        }
        else{
            j=j-1;
        }
    }
    i=n-1;
    j=9;
    temp=s;
    int index;
    while(temp>0){
        if(j<=temp){
            l[i]=j;
            index=i;
            temp=temp-j;
            i=i-1;
        }
        else{
            j=j-1;
        }
    }
    if(l[0]==0){
            l[0]=1;
            l[index]=l[index]-1;
    }
    int high=0;
    int low=0;
    int ten=1;
    for(int p=0;p<n;p++){
        cout<<l[p];
    }
    cout<<" ";
    for(int p=0;p<n;p++){
        cout<<h[p];
    }

}
