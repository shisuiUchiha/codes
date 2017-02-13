#include<bits/stdc++.h>
using namespace std;




int main(){
	int test;
	cin>>test;
	for(int l=0;l<test;l++){
		string s,p;
		cin>>s>>p;
		string d=p;
		string e=s;
		int i=0;
		int k=0;
		int j=0;
		int tempa=0;
		int tempb=0;
		int a=-1;
		int b=-1;
		vector<char>v;
		vector<int>rem;
		int ans=0;
		int finans=0;
		for(int i=0;i<s.length();i++){
			for(int j=0;j<p.length();j++){
				if(s[i]==p[j]){
					v.push_back(s[i]);
					tempa=i;
					tempb=j;
					p[j]='a';
					k++;
					break;
				}
				else{
					rem.push_back(s[i]-'0');
                    continue;
				}
				if(tempb>b){
					b=tempb;
				}
				else{
					for(int z=tempb+1;z<=b;z++){
                          if(p[z]=='a'){
                          	ans=ans+(d[z])-'0';
                          }
					}
					if(ans>d[tempb]-'0'){
                        rem.push_back(d[tempb]-'0');
                        ans=0;
					}
					else{
						finans=finans+ans;
						ans=0;
					}
				}
			}
		}
		for(int zz=0;zz<rem.size();zz++){
			cout<<rem[zz]<<endl;
		}

	}
}