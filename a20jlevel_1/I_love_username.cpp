#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int small,large;
	int a;
	cin>>a;
	small=a;
	large=a;
	int amazing=0;
	for(int i=0;i<n-1;i++){
		int b;
		cin>>b;
		if(b>large){
			amazing++;
			large=b;
		}
		if(b<small){
			amazing++;
			small=b;
		}
	}
	cout<<amazing<<endl;
}