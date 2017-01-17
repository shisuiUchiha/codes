#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c;
	cin>>a>>b>>c;
	long v=sqrt(a*b*c);
	cout<<4*(v/a+v/b+v/c)<<endl;
}