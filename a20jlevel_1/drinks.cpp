#include<bits/stdc++.h>
using namespace std;

int main(){
    float n;
    cin>>n;
    float sum=0;
    for(int i=0;i<n;i++){
    	float b;
    	cin>>b;
    	sum=sum+b;
    }
    float ans=(sum)/(n);
    cout<<std::setprecision(14)<<ans<<endl;
}