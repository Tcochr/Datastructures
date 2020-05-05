#include <iostream>
#include <string>
#include "ArrayClass.h"

using namespace std;


int main() {
    ArrayClass a(1);
    a.add(1);

    cout << a.getData(0) << endl;
    cout << a.getSize() << endl;
    a.insertAtIndex(2,1);
    cout << a.getData(0);
    return 0;
}