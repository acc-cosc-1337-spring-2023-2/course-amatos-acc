//atm.h
#include<iostream>
#include<vector>
#include "bank_account.h"

using std::vector;

void display_menu();
void run_menu(vector<BankAccount*> accounts);
void handle_menu_option(int option, BankAccount *account);
