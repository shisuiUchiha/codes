#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int arr[n];
		for(int j=0;j<n;j++){
			cin>>arr[j];
		}
		int incl[n];
		int excl[n];
		incl[0]=arr[0];
		excl[0]=0;
		for(int j=1;j<n;j++){
			incl[j]=excl[j-1]+arr[j];
			excl[j]=max(incl[j-1],excl[j-1]);
		}
		cout<<max(incl[n-1],excl[n-1])<<endl;
	}
}
