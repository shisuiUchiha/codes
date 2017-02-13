#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        int tmp[n];
        int temp=-10000000;
        int temp_2=0;
        int temp_3=-1000000;
        int sum=0;
        int k=0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            if(arr[j]<0){
                k++;
                if(temp_3<arr[j]){
                    temp_3=arr[j];
                }
            }
            if(arr[j]>0){
                temp_2=temp_2+arr[j];
            }
            sum=sum+arr[j];
            if(sum>temp){
                temp=sum;
            }
            if(sum>0){
                sum=sum;
            }
            else{
                sum=0;
            }
        }
        if(k==n){
            cout<<temp<<" "<<temp_3<<endl;
        }
        else{
            cout<<temp<<" "<<temp_2<<endl;
        }
    }
}
