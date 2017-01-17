#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int tmp=0;
	int ans=0;
	for(int i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]){
			tmp++;
		}
		else{
			ans=ans+((tmp+1)/2);
			tmp=0;
		}
	}
	ans=ans+((tmp+1)/2);
	cout<<ans<<endl;
}