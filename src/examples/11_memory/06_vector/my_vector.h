#include<iostream>

using std::cout;

#ifndef VECTOR_H
#define VECTOR_H

class Vector {
    public:
        Vector() = default; //tells C++ to create a default constructor
        Vector(int s);
        //Rule 1 of 3 (3 rules of legacy c++)
        Vector(const Vector& v); //copy constructor
        Vector(Vector&& v); //move constructor - Rule 4 of 5 for modern C++ and up

        Vector& operator=(const Vector& v); //Copy assignment Rule 2 of 3 in legacy c++

        int Size() const{return size;}
        int Capacity() const{return capacity;}
        ~Vector(); //rule 3 of 3
        void PushBack(int value);
    private:
        int size{0}; //current size of the list; doubles as the current_index
        int capacity{0}; //total available slot for elements
        int* elements{0}; //holds the dynamic list on the heap
        const int RESERVE_DEFAULT_SIZE{8};
        const int RESERVE_DEFAULT_MULTIPLIER{2};
        void Reserve(int new_size);

};

#endif

void use_vector();
Vector get_vector();
