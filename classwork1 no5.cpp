#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double account_balance, annual_rate ;
	double time = 1;
	
	cout<<" Enter the account balance:";
	cin>> account_balance;
	
	cout<<" Enter the annual rate:";
	cin>> account_balance;
    
    double new_balance= ((account_balance * annual_rate * time)/100 ) + account_balance);
    cout<<"New blance is"<<new_balance;
    
    return 0;
}
