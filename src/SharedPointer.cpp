//
// Created by Melih Sozdinler on 6/16/2021.
//

#include "SharedPointer.h"

void SharedPointer::show() {
    cout << "------------- Shared Pointer -------------" << endl;
    P1 = shared_ptr<Rectangle>(new Rectangle(10, 5));
    // This'll print 50
    cout << "P1 Area: " << P1->Area() << endl;
    Rectangle * ptr = P1.get();
    cout << "Pointer Type -> Area: " << ptr->Area() << endl;

    P2 = P1;

    // This'll print 50
    cout << "P2 Area: " << P2->Area() << endl;

    // This'll now not give an error,
    cout << "P1 Area: " << P1->Area() << endl;

    // This'll also print 50 now
    // This'll print 2 as Reference Counter is 2
    cout << "P1 Use Count: " << P1.use_count() << endl;
    cout << "P2 Use Count: " << P2.use_count() << endl;

    shared_ptr<Rectangle> P3;
    P3 = P1;

    // This'll also print 50 now
    // This'll print 3 as Reference Counter is 3
    cout << "P1 Use Count: " << P1.use_count() << endl;
    cout << "P2 Use Count: " << P2.use_count() << endl;
    cout << "P3 Use Count: " << P3.use_count() << endl;
    //delete ptr;
    cout << "------------- Shared Pointer -------------" << endl;
}
