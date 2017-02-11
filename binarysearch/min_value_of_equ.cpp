#include<bits/stdc++.h>
using namespace std;

double func(double x){
	return 2*x*x-12*x+7;
}

int main(){
	int inter;
	cin>>inter;
	for(int i=0;i<inter;i++){
		double a,b;
		cin>>a>>b;
		double l=a;
		double r=b;
		for(int j=0;j<200;j++){
			double s=(l+2*r)/3;
			double f=(r+2*l)/3;
			if(func(f)<func(s)){
				r=s;
			}
			else{
				l=f;
			}
		}
		double p=func(l);
		cout<<setprecision(13)<<p<<endl;
	}

}
