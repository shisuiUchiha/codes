#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
	int arr[16]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
	int a,b;
	cin>>a>>b;
	for(int i=0;i<16;i++){
		if(arr[i]==a){
			if(arr[i+1]==b){
				cout<<"YES"<<endl;
				break;
			}
			else{
				cout<<"NO"<<endl;
				break;
			}
		}
	}
}