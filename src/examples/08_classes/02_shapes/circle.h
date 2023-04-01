//circle.h
#include "shape.h"

using std::cout;

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape {
    public:
        void draw() {
            cout<<"Circle\n";
        }
};

#endif