#include<iostream>
#include<vector>
#include<memory>

#include "customer.h"
#include "atm.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;

int main()
{
	srand(time(NULL));
	vector<Customer> customers; //create empty list of BankAccount pointers
	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());
	run_menu(customers);
	
	return 0;
}
