//
// Created by Melih Sozdinler on 6/16/2021.
//

#include "UniquePointer.h"

void UniquePointer::show() {
    cout << "------------- Unique Pointer -------------" << endl;
    unique_ptr<Rectangle> uniqueP1(new Rectangle(10, 5));
    cout << "UniqueP1 Area: " << uniqueP1->Area() << endl; // This'll print 50

    // unique_ptr<Rectangle> P2(P1);

    unique_ptr<Rectangle> uniqueP2;
    uniqueP2 = move(uniqueP1);

    if (uniqueP1 == NULL){
        cout << "UniqueP1 is NULL!" << endl;
    }

    if (uniqueP1.get() == NULL){
        cout << "UniqueP1 is NULL!" << endl;
    }
    // This'll print 50
    cout << "UniqueP2 Area: " <<  uniqueP2->Area() << endl;
    cout << "------------- Unique Pointer -------------" << endl;
}
