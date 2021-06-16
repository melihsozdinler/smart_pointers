//
// Created by Melih Sozdinler on 6/16/2021.
//

#ifndef SMART_POINTERS_MAKESHARED_H
#define SMART_POINTERS_MAKESHARED_H

#include <iostream>
#include <memory>

using namespace std;

template<class T>
class AllocateMe{
public:
    allocator<T> alloc;
    shared_ptr<T> AllocateSomeValue(T value);
};

class MakeShared {

public:
    void Show();
};


#endif //SMART_POINTERS_MAKESHARED_H
