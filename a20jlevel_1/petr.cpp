#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	int arr[8];
	arr[0]=0;
	int rem;
	for(int i=1;i<8;i++){
		int a;
		cin>>a;
		if(a!=0){
			rem=i;
		}
		arr[i]=arr[i-1]+a;
	}
	n=n%arr[7];
	if(n<=arr[1] && n!=0){cout<<"1"<<endl;}
	else if(n==0){cout<<rem<<endl;}
	else{
		for(int i=1;i<7;i++){
			if(n==arr[i]){
				cout<<i<<endl;
			}
			else if(n<arr[i+1] && n>arr[i]){
				cout<<i+1<<endl;
			}
		}
	}

} 