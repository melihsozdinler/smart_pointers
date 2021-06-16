#include <iostream>
using namespace std;
#include <memory>
#include "src/SharedPointer.h"
#include "src/UniquePointer.h"
#include "src/WeakPointer.h"
#include "src/MakeShared.h"


int main()
{
    SharedPointer shared;
    shared.Show();

    UniquePointer unique;
    unique.Show();

    WeakPointer weak;
    weak.Show();

    MakeShared makeShared;
    makeShared.Show();

    return 0;
}