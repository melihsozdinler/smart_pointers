//
// Created by Melih Sozdinler on 6/16/2021.
//

#ifndef SMART_POINTERS_RECTANGLE_H
#define SMART_POINTERS_RECTANGLE_H

#include <memory>

using namespace std;

class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int l, int b);
    int Area();
    void SetLength(int length);
    void SetBreadth(int breadth);
    Rectangle(shared_ptr<Rectangle> sharedPtr);
};

#endif //SMART_POINTERS_RECTANGLE_H
