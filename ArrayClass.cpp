//
// Created by Cochr on 4/15/2020.
//

#include "ArrayClass.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

/**
 * Determines if the array has met maximum capacity
 * @return i
 */
bool ArrayClass::isMaxLength(){
    return arraySize == arrayLength;
};

/**
 * Extends the length of the internal array
 */
void ArrayClass::extendLength(){
    int* holder = NULL;
    holder = new(nothrow) int[arrayLength*2];
    if(!holder){
        cout << "Failed allocation." << endl;
    }else{
        for(int i = 0; i < arrayLength; i++){
            holder[i] = data[i];
        }
        data = holder;
        delete[] holder;
        arrayLength *= 2;
    }
}

/**
 * Checks any conditions for the availability of an index for insertion
 * @param indx
 * @return
 */
bool ArrayClass::isAvailableIndx(int indx) {
    if(indx <= arrayLength-1){
        return true;
    } else{
        return false;
    }
}

//Getters and setters

/**
 * Adds a new value to the internal array
 * @param val -The value to add
 */
void ArrayClass::add(int val){
    if(isMaxLength()){
        extendLength();
    }
    data[arraySize] = val;
    arraySize++;
}

/**
 * Inserts value at specified location
 * @param val -The value
 * @param indx -The location
 */
void ArrayClass::insertAtIndex(int val,int indx) {
//    if(isMaxLength()){
//        extendLength();
//    }
    if(isAvailableIndx(indx)){
        for(int i = arraySize; i >= indx; i--){
            data[arraySize+1] = data[arraySize];
        }
        data[indx] = val;
        arraySize++;
    }else{
        cout << "Could not insert at " << indx << "." << endl;
    }
}

/**
 * Changes the value at index to val
 * @param val -The desired value
 * @param indx -The location
 */
void ArrayClass::setIndexTo(int val, int indx){
    if(isAvailableIndx(indx)){
        data[indx] = val;
    }
}

/**
 * Setter for the length of the internal array
 * @param len
 */
void ArrayClass::setLength(int len) {
    arrayLength = len;
}

/**
 * Acquires the value at the location
 * @param index
 * @return
 */
int ArrayClass::getData(int index){
    if(index <= arraySize){
        return data[index];
    }
}

/**
 * Acquires the length of the internal array
 * @return
 */
int ArrayClass::getLength(){
    return arrayLength;
}

int ArrayClass::getSize() {
    return arraySize;
}