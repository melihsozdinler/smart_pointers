#include <iostream>
using namespace std;
#include <memory>
#include "src/SharedPointer.h"
#include "src/UniquePointer.h"
#include "src/WeakPointer.h"


int main()
{
    SharedPointer shared;
    shared.show();

    UniquePointer unique;
    unique.show();

    WeakPointer weak;
    weak.show();

    return 0;
}