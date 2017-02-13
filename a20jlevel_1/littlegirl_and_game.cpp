#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	string s;
	cin>>s;
	vector<char>v;
	ll arr[s.length()];
	for(int i=0;i<s.length();i++){
		arr[i]=1;
	}
	for(int i=0;i<s.length();i++){
		ll flag=0;
		if(v.size()==0){
			v.push_back(s[i]);
		}
		else{
			for(ll j=0;j<v.size();j++){
				if(s[i]==v[j]){
					flag=1;
					arr[j]=arr[j]+1;
				}
			}
			if(flag!=1){
				v.push_back(s[i]);
			}
		}
	}
	ll h=0;
	for(int k=0;k<v.size();k++){
		if(arr[k]%2!=0){
			h++;
		}
	}
	if(h<=1){
		cout<<"First"<<endl;
		return 0;
	}
	if(h%2==0){
		cout<<"Second"<<endl;
		return 0;
	}
	else{
		cout<<"First"<<endl;
		return 0;
	}
}