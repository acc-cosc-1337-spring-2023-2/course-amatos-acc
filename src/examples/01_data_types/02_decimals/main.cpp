#include "decimals.h" //tell c++ where to find add to double 1 function

#include <iostream>

using std::cout;

int main()
{
    double num = 0;
    double num1 = add_to_double_1(num);

    //we do something with num1
    num1 = num1 + 1;

    cout<<"Adding to a double: "<<num1<<"\n";

    return 0;
}