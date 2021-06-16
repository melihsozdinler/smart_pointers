//
// Created by Melih Sozdinler on 6/16/2021.
//

#ifndef SMART_POINTERS_SHAREDPOINTER_H
#define SMART_POINTERS_SHAREDPOINTER_H

#include <iostream>
#include <memory>
#include "Rectangle.h"

using namespace std;

class SharedPointer {
    shared_ptr<Rectangle> P1, P2;

public:
    void Show();
};


#endif //SMART_POINTERS_SHAREDPOINTER_H
