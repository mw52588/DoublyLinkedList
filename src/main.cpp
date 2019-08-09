
#include <cstdlib>
#include <iostream>
#include "DList.h"
#include "DList.cpp"


using namespace std;


int main() {

    DList<int> list1;
    list1.append(43);
    list1.append(46);
    list1.append(89);
    list1.displayAll();
    list1.appendStart(33);
   
    return 0;
}

