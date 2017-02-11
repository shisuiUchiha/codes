#include<bits/stdc++.h>
using namespace std;

class item{
private:
	int an;// private can be accessed by class and the friend functions.
protected:
	int lol;// these have all properties of private but they can also be accessed by derived classes
public:
	int cost;
	int tasterating;
	int purchases;
	string itemname;

	//function names

    void setan(int l){
		an=l;
	}
	void settingcost(int a){
		cost=a;
	}

	void settingrating(int b){
		tasterating=b;
	}

	void setpurchases(int c){
		purchases=c;
	}

	void setname(string s);
	void profit();
};

void item::setname(string s){
	itemname=s;
}

void item::profit(){
	cout<<cost*purchases<<endl;
}


class smallitem:item{
public:
	void setlol(int z){
		lol=z;
	}
	void printlol(){
		cout<<lol<<endl;
	}
};



int main(){
	item a;
	smallitem b;
	int z;
	cin>>z;
	b.setlol(z);
	b.printlol();
	a.setan(z);
	cout<<"cost"<<endl;
	int c;
	string l;
	cin>>c;
	a.settingcost(c);
	cout<<"rating"<<endl;
	cin>>c;
	a.settingrating(c);
	cout<<"purchases"<<endl;
	a.setpurchases(c);
	cout<<"name"<<endl;
	cin>>l;
	a.setname(l);
    cout<<a.itemname<<" "<<a.cost<<" "<<a.purchases<<endl;
	a.profit();

	
}