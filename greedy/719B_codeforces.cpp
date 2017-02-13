#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string p=s;
    string l=s;
    for(int i=0;i<n;i++){
        if(i%2==0){
            p[i]='r';
            l[i]='b';
        }
        else{
            p[i]='b';
            l[i]='r';
        }
    }
    //cout<<p<<endl;
    //cout<<l<<endl;
    int p_r=0;
    int p_b=0;
    int l_r=0;
    int l_b=0;
    for(int i=0;i<n;i++){
        if(s[i]!=p[i]){
            if(p[i]=='r'){
                p_r++;
            }
            else{
                p_b++;
            }
        }
        if(l[i]!=s[i]){
            if(l[i]=='r'){
                l_r++;
            }
            else{
                l_b++;
            }
        }

    }

    int k=min(p_r,p_b);
    int z=max(p_r,p_b);
    int f_ans=z;
    //cout<<p_r<<" "<<p_b<<" "<<l_r<<" "<<l_b<<endl;
    int s_ans=max(l_r,l_b);
    //cout<<f_ans<<" "<<s_ans<<endl;
    int ans=min(f_ans,s_ans);
    cout<<ans<<endl;
}
