#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    getline(cin,s);
    int k=0;
    for(int i=65;i<91;i++){
        k=0;
        for(int j=0;j<s.length();j++){
            if(int(s[j])==i || int(s[j])==i+32){
                k=1;
                break;
            }
        }
        if(k==0){
            cout<<"not pangram"<<endl;
            return 0;
        }
    }
    cout<<"pangram"<<endl;
    
}
