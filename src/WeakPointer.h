//
// Created by Melih Sozdinler on 6/16/2021.
//

#ifndef SMART_POINTERS_WEAKPOINTER_H
#define SMART_POINTERS_WEAKPOINTER_H

#include <iostream>
#include <memory>
#include "Rectangle.h"

using namespace std;

class WeakPointer {
public:
    void Show();
    void Observe(weak_ptr<Rectangle> gw);
};


#endif //SMART_POINTERS_WEAKPOINTER_H
