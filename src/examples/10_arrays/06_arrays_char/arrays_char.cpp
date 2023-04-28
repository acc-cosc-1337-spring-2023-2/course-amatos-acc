#include "arrays_char.h"

using std::cout;
using std::cin;
using std::string;
using std::shared_ptr;

void use_char_null_terminated() {
    const auto SIZE = 11;
    char name[SIZE];
    name[0] = 'C';
    name[1] = '+';
    name[2] = '+'; 
    name[3] = '\0'; 

    cout<<name<<"\n";

    auto i = 0;

    while(name[i] != '\0') {
        cout<<name[i]<<"\n";
        i++;
    }
}

void use_string_terminated() {
    string name = "C++ rocks";
    cout<<name<<"\n\n";
}

char * get_dynamic_memory(const int size) {
    char* chars = new char[size];
    cout<<"Create memory "<<chars<<"\n";
    return chars;
}

void delete_dynamic_char_memory(char* array) {
    cout<<"Delete memory "<<array<<"\n";
    delete[] array;
}

void limit_dynamic_char_mem_scope(const int size) {
    shared_ptr<char[]> name(get_dynamic_memory(size), delete_dynamic_char_memory);
    
    cout<<"Enter name: ";
    cin.getline(name.get(), size);
    cout<<name<<"\n";

    cout<<"Exiting function...\n";
}