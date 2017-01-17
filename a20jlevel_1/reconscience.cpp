#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	int present;
	int prev;
	cin>>prev;
	int f=prev;
	int ind;
	int diff=100000;
	for(int i=0;i<n-1;i++){
		cin>>present;
		if(abs(present-prev)<diff){
			diff=abs(present-prev);
			ind=i+2;
		}
		prev=present;
	}
	if(abs(present-f)<diff){
		cout<<n<<" "<<"1"<<endl;
		return 0;
	}
	cout<<ind-1<<" "<<ind<<endl;
}