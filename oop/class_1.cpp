#include<bits/stdc++.h>
using namespace std;

class item{
public:
	int cost;
	int tasterating;
	int purchases;
	string itemname;
};




int main(){
	item a[2];
	for(int i=0;i<2;i++){
		cout<<"enter cost"<<endl;
		cin>>a[i].cost;
		cout<<"tasterating"<<endl;
		cin>>a[i].tasterating;
		cout<<"enter purchases"<<endl;
		cin>>a[i].purchases;
		cout<<"enter name of product"<<endl;
		cin>>a[i].itemname;
	}

	cout<<a[0].itemname<<" "<<a[0].cost<<endl;
}