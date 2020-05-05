//
// Created by Cochr on 4/15/2020.
//

#ifndef DATASTRUCTURES_ARRAYCLASS_H
#define DATASTRUCTURES_ARRAYCLASS_H

/*
 * data: variable for internal array
 *
 */
class ArrayClass {
public:
    ArrayClass(int n){
        data = new int[n];
        arraySize = 0;
        arrayLength = n;

    };

    ~ArrayClass(){
        delete[] data;
    };
    void add(int val);
    int getData(int index);
    void insertAtIndex(int val, int indx);
    int getLength();
    int getSize();
    void setIndexTo(int val, int indx);
    bool isAvailableIndx(int indx);

private:
    int * data;
    int arrayLength;
    int arraySize;
    bool isMaxLength();
    void extendLength();
    void setLength(int len);

};




#endif //DATASTRUCTURES_ARRAYCLASS_H
