//
// Created by Cochr on 4/15/2020.
//

#ifndef DATASTRUCTURES_ARRAYCLASS_H
#define DATASTRUCTURES_ARRAYCLASS_H

class ArrayClass {
public:
    ArrayClass(int length){
        data = new int[length];
    };

    ~ArrayClass(){
        delete[] data;
    };
    int getData(int index);
    void setData(int val);
    int getLength();
    void setLength(int len);

private:
    int * data;
    int length = 0;
};




#endif //DATASTRUCTURES_ARRAYCLASS_H
