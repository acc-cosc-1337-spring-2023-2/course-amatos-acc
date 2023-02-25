//write include statements
#include<iostream>
#include "dna.h"

//write using statements
using std::cout;
using std::cin;

int main() 
{
	auto keep_going = true;
	auto option = 0; 
	auto response = ' ';
	auto num1 = 0;
	auto num2 = 0;

	do {
		cout<<"1. Factorial\n";
		cout<<"2. Greatest Common Divisor\n";
		cout<<"3. Exit\n";
		cout<<"Enter 1, 2, or 3: ";
		cin>>option;
		
		if (option == 3) {
			cout<<"Are you sure you want to exit? (y/n): ";
			cin>>response;
			keep_going = !(response == 'y' || response == 'Y');
		} else if (option == 1) {
			cout<<"Please enter a number for Factorial: ";
			cin>>num1;
			cout<<"Answer: "<<factorial(num1)<<"\n";
		} else if (option == 2) {
			cout<<"Please enter number1 for GCD: ";
			cin>>num1;
			cout<<"Please enter number2 for GCD: ";
			cin>>num2;
			cout<<"Answer: "<<gcd(num1, num2)<<"\n";
		}
		cout<<"\n";

	} while (keep_going);

	return 0;
}