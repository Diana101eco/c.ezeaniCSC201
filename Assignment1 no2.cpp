#include <iostream>
using namespace std;

int main () {
	int a, b, temp;
	
	cout<<"Enter first number:";
	cin>> a;
	
	cout<<"Enter second number:";
	cin>> b;
	
	cout<<"Before swapping: a ="<<a<<",b="<<b<<endl;
	
	temp = a; // stopre value of a in temp
	a=b; // assign value of b to a
	b=temp; // assign value of temp (previous a) to b
	
	cout<<"After swapping:a ="<<a<<", b="<<b<<endl;
	return 0;
}
