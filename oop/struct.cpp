#include<bits/stdc++.h>
using namespace std;


struct MoneyLend{
	string person;
	int money;
	int times;
};

int calculate(struct MoneyLend b){
	return b.money*b.times;
}

int caltpointer(struct MoneyLend *b){
	struct MoneyLend a=*b;
	cout<<b->person<<endl;
}

int main(){
	struct MoneyLend a;
	cout<<"enter a peron name"<<endl;
	cin>>a.person;

	cout<<"amount of money"<<endl;
	cin>>a.money;

	cout<<"number of times"<<endl;
	cin>>a.times;

	int r=calculate(a);

	caltpointer(&a);
	cout<<r<<endl;
}