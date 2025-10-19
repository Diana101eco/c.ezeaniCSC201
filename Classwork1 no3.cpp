#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b;
	 
	 cout<<"Enter the opposite side:";
	 cin>> a;
	 
	 cout<<"Enter the adjacent side:";
	 cin>> b;
	 
	 double c= sqrt((a*a)+(b*b));
	 cout<<"the hypotenuse is"<<c;
	 return 0;
}
