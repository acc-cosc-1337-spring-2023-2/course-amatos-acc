#include "my_vector.h"

Vector::Vector(int s) : capacity{0}, elements{new int[s]} {
    cout<<"created new memory at"<<elements<<"\n";
}

Vector::~Vector() {
    cout<<"delete the memory at"<<elements<<"\n";
    delete[] elements;
}

//Not a class function; these are free functions
void use_vector() {
    //do not create dynamic memory for v; use a stack variable
    //Vector* v = new Vector(3);
    //delete v;

    Vector v(3);
}