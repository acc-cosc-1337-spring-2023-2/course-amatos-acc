#include<iostream>
#include<vector>

#include "checking_account.h"
#include "savings_account.h"
#include "atm.h"

using std::cout;
using std::cin;
using std::vector;

int main()
{
	vector<BankAccount*> accounts; //create empty list of BankAccount pointers
	
	srand(time(NULL));
	SavingsAccount savings;
	CheckingAccount checking;
	
	accounts.push_back(&checking);
	accounts.push_back(&savings);

	for (auto account: accounts) {
		cout<<account->get_balance()<<"\n";
	}

	run_menu(accounts);
	
	return 0;
}
