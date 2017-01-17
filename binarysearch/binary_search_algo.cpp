#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int search;
		cin>>search;
		int left=0;
		int right=n-1;
		while(left<right){
			int mid=(left+right)/2;
			if(a[mid]>search){
				right=mid-1;
			}
			else if(a[mid]<search){
				left=mid+1;
			}
			else{
				cout<<mid+1<<endl;
				break;
			}
		}
		if(left==right){
			cout<<left+1<<endl;
		}
	}
}
