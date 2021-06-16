//
// Created by Melih Sozdinler on 6/16/2021.
//

#include "MakeShared.h"

void MakeShared::Show() {
    cout << "-------------- Make Shared --------------" << endl;
    shared_ptr<int> foo = make_shared<int> (10);
    // same as:
    shared_ptr<int> foo2 (new int(10));

    auto bar = make_shared<int> (20);

    auto baz = make_shared<pair<int,int>> (30,40);

    cout << "*foo: " << *foo << '\n';
    cout << "*foo2: " << *foo << '\n';
    cout << "*bar: " << *bar << '\n';
    cout << "*baz: " << baz->first << ' ' << baz->second << '\n';

    allocator<int> alloc;
    //default_delete<int> del;

    shared_ptr<int> foo3 = std::allocate_shared<int> (alloc,100);
    cout << "*foo3: " << *foo3 << '\n';

    AllocateMe<int> allocatorInt;
    shared_ptr<int> foo4 = allocatorInt.AllocateSomeValue(100);

    AllocateMe<double> allocatorDbl;
    shared_ptr<double> foo5 = allocatorDbl.AllocateSomeValue(100.5);
    cout << "*foo5: " << *foo5 << '\n';

    AllocateMe<string> allocatorCharPtr;
    shared_ptr<string> foo6 = allocatorCharPtr.AllocateSomeValue("Hello World");
    cout << "*foo6: " << *foo6 << '\n';
    cout << "-------------- Make Shared --------------" << endl;
}

template<class T>
shared_ptr<T> AllocateMe<T>::AllocateSomeValue(T value) {
    return std::allocate_shared<T> (alloc,value);
}
