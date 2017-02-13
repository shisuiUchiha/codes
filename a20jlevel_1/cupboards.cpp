#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int l_1=0,l_2=0,r_1=0,r_2=0;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		if(a==1){
			l_1++;
		}
		else{
			l_2++;
		}
		if(b==1){
			r_1++;
		}
		else{
			r_2++;
		}

	}
	cout<<min(l_1,l_2)+min(r_1,r_2)<<endl;
}