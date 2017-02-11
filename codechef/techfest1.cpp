
#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		string s;
		cin>>s;
		int p=s.length()-1;
		if(s[p]=='a'||s[p]=='e'||s[p]=='i'||s[p]=='o'||s[p]=='u'){
			cout<<"Case #"<<i+1<<": "<<s<<" is ruled by a queen."<<endl;
		}
		else if(s[p]=='y'){
			cout<<"Case #"<<i+1<<": "<<s<<" is ruled by nobody."<<endl;
		}
		else{
			cout<<"Case #"<<i+1<<": "<<s<<" is ruled by a king."<<endl;
		}
	}
}