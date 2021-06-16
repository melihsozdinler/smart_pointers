//
// Created by Melih Sozdinler on 6/16/2021.
//

#ifndef SMART_POINTERS_WEAKPOINTER_H
#define SMART_POINTERS_WEAKPOINTER_H

#include <iostream>
#include <memory>
#include "Rectangle.h"

class WeakPointer {
public:
    void show();
    void observe(weak_ptr<Rectangle> gw);
};


#endif //SMART_POINTERS_WEAKPOINTER_H
