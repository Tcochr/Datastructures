//
// Created by Cochr on 4/15/2020.
//

#include "ArrayClass.h"
#include <iostream>
using namespace std;

void ArrayClass::setData(int val) {
    data[length] = val;
    length++;
}

void ArrayClass::setLength(int len) {
    length = len;
}

int ArrayClass::getData(int index){
    if(index <= length){
        return data[index];
    }
}

int ArrayClass::getLength(){
    return length;
}