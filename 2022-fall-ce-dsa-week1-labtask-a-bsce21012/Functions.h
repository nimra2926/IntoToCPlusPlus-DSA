//
// Created by Lenovo on 8/30/2022.
//

#ifndef ITU_ALL_DATA_FUNCTIONS_H
#define ITU_ALL_DATA_FUNCTIONS_H
#include <iostream>
using namespace std;

template <typename T>
class operations{
private:
    int NumOfElementsInArray;
    int capacity;
    int sizeOfArray;
    T *array;

public:
operations(int s){
    NumOfElementsInArray=0;
    capacity=0;
    sizeOfArray=s;
    array = new T[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++) {
        array[i] = 0;                                                   //setting values to zero
    }
}
    void add() {
        for (int i = NumOfElementsInArray; i < sizeOfArray; i++) {
            cout << "ENTER DATA = ";
            cin >> array[i];                                                            //taking input
            NumOfElementsInArray++;
        }
    }

    void display() {
    cout<<"THE NEW ARRAY IS =";
        for (int i = 0; i < sizeOfArray; i++) {
            cout << array[i] << " ";                                                 //displaying array elements
        }
        cout << endl;
    }
    void expand() {
        sizeOfArray = sizeOfArray + 10;                                                   //increasing size
        T *array1 = new T[sizeOfArray];                                                 //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            array1[i] = array[i];                                                       //copying
        }
        delete[]array;                                                                  //deleting
        array = array1;                                                                 //copying
        array1 = NULL;                                                                    //null it

    }
    void deleteAnElementFromLast() {
        sizeOfArray = NumOfElementsInArray - 1;
        T *array2 = new T[sizeOfArray];                                                 //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            array2[i] = array[i];                                                       //copying
        }
        delete[]array;                                                                  //deleting
        array = array2;                                                                 //copying
        array2 = NULL;                                                                    //null it
    }
    void prepend() {
        int element;
        sizeOfArray = sizeOfArray + 1;
        T *array2 = new T[sizeOfArray];                                                 //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            array2[i] = array[i];                                                       //copying
        }
        delete[]array;                                                                  //deleting
        array = array2;                                                                 //copying
        array2 = NULL;                                                                    //null it
        cout << "enter element.." << endl;
        cin >> element;
        for (int i = sizeOfArray - 1; i > 0; i--) {
            array[i] = array[i - 1];
        }
        array[0] = element;
    }

    void addAnElementAtTheLastIndex(){
            sizeOfArray = sizeOfArray + 1;                                                   //increasing size
            T *array2 = new T[sizeOfArray];                                                 //making a new dynamic array
            for (int i = 0; i < sizeOfArray; i++) {
                array2[i] = array[i];                                                       //copying
            }
            delete[]array;                                                                  //deleting
            array = array2;                                                                 //copying
            array2 = NULL;                                                                    //null it

        }
        ~operations(){
    cout<<"DESTRUCTOR IS CALLED"<<endl;
    delete []array;
}
};


#endif //ITU_ALL_DATA_FUNCTIONS_H
