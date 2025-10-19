#include <iostream>
using namespace std;

int main() {
	double purchaseamount,salestax,totalamount;
	
	cout<<"Enter total purchase amount:";
	cin>>purchaseamount;
	
	salestax= purchaseamount * 0.06; //6% of the purchase amount
	totalamount = purchaseamount + salestax;
	
	cout <<"6% of sales tax ="<<salestax << endl;
	cout <<"Total amount with tax ="<< totalamount << endl;
	
	return 0;
}
