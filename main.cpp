#include <iostream>
#include <string>
#include "ArrayClass.h"

using namespace std;


int main() {
    ArrayClass a(1);
    a.setData(1);
    cout << a.getData(0) << endl;
    cout << a.getLength() << endl;
    return 0;
}