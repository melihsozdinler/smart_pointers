//
// Created by Melih Sozdinler on 6/16/2021.
//

#include "WeakPointer.h"

void WeakPointer::Observe(std::weak_ptr<Rectangle> gw)
{
    std::cout << "Weak Pointer use_count == " << gw.use_count() << ": ";
    if (auto spt = gw.lock()) { // Has to be copied into a shared_ptr before usage
        std::cout << "Area of WeakPtr: " << spt->Area() << endl;
    }
    else {
        std::cout << "Weak Pointer gw is expired" << endl;
    }
}

void WeakPointer::Show() {
    std::weak_ptr<Rectangle> gw1, gw2;
    {
        cout << "-------------- Weak Pointer --------------" << endl;
        shared_ptr<Rectangle> sp(new Rectangle(10, 5));
        gw1 = sp;
        cout << "Smart Pointer Use Count: " << sp.use_count() << endl;
        cout << "Weak Pointer Gw1 Use Count: " <<  gw1.use_count() << endl;
        Observe(gw1);
        cout << "Smart Pointer Use Count: " << sp.use_count() << endl;
        cout << "Weak Pointer Gw1 Use Count: " <<  gw1.use_count() << endl;
        cout << "Weak Pointer Gw1 Area: " <<  gw1.lock()->Area() << endl;
        sp.get()->SetBreadth(11);
        cout << "Weak Pointer Gw1 Area: " <<  gw1.lock()->Area() << endl;
        gw2 = sp;
        cout << "Smart Pointer Use Count: " << sp.use_count() << endl;
        cout << "Weak Pointer Gw2 Use Count: " <<  gw2.use_count() << endl;
        Observe(gw2);
        cout << "Smart Pointer Use Count: " <<  sp.use_count() << endl;
        cout << "Weak Pointer Gw2 Use Count: " <<  gw2.use_count() << endl;
    }

    Observe(gw1);
    cout << "Smart Pointer Use Count: " <<  gw1.use_count() << endl;
    Observe(gw2);
    cout << "Smart Pointer Use Count: " <<  gw2.use_count() << endl;
    // cout<<P1->area()<<endl;
    cout << "-------------- Weak Pointer --------------" << endl;
}
