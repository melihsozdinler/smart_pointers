//
// Created by Melih Sozdinler on 6/16/2021.
//

#include "Rectangle.h"

Rectangle::Rectangle(int l, int b) {
    length = l;
    breadth = b;
}

int Rectangle::Area() {
    return length * breadth;
}

Rectangle::Rectangle(shared_ptr<Rectangle> sharedPtr) {
    length = sharedPtr->length;
    breadth = sharedPtr->breadth;
}

void Rectangle::SetLength(int length) {
    this->length = length;
}

void Rectangle::SetBreadth(int breadth) {
    this->breadth = breadth;
}
