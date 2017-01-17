#include<bits/stdc++.h>
using namespace std;

int call(int b){
	static int h=1;
	return h++;
}

int main(){
	int a=2;
	int b=call(a);
	int c=call(a);
	cout<<b<<" "<<c<<endl;
}

//in a class if we declare static it gets allocated to all objects;

// a function declared as static can be called using just the class we need not create any objects


/*

#include <iostream>
 
using namespace std;

class Box {
   public:
      static int objectCount;
      // Constructor definition
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // Increase every time object is created
         objectCount++;
      }
		
      double Volume() {
         return length * breadth * height;
      }
		
      static int getCount() {
         return objectCount;
      }
		
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

// Initialize static member of class Box
int Box::objectCount = 0;

int main(void) {
  
   // Print total number of objects before creating object.
   cout << "Inital Stage Count: " << Box::getCount() << endl;

   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2

   // Print total number of objects after creating object.
   cout << "Final Stage Count: " << Box::getCount() << endl;

   return 0;
}

*/