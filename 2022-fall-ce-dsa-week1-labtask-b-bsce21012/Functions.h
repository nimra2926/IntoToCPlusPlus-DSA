//
// Created by Lenovo on 9/1/2022.
//

#ifndef ITU_ALL_DATA_FUNCTIONS_H
#define ITU_ALL_DATA_FUNCTIONS_H

#include <iostream>

using namespace std;

template<typename T>
class customizedArray {                                                             //making class
private:
    int sizeOfArray;                                                                //declaring
    int NoOfElement;                                                                //declaring
    T *array;
public:
    customizedArray(int s) {
        sizeOfArray = s;                                                           //copying
        NoOfElement = 0;                                                                //placing it to zero
        array = new T[sizeOfArray];
        for (int i = 0; i < sizeOfArray; i++) {
            array[i] = 0;                                                   //setting values to zero
        }
    }

    void add() {
        for (int i = NoOfElement; i < sizeOfArray; i++) {
            cout << "ENTER DATA = ";
            cin >> array[i];                                                            //taking input
            NoOfElement++;
        }
    }

    void display() {
        for (int i = 0; i < sizeOfArray; i++) {
            cout << array[i] << " ";                                                 //displaying array elements
        }
        cout << endl;
    }

    void expand() {
        sizeOfArray = sizeOfArray + 10;                                                   //increasing size
        T *array1 = new T[sizeOfArray];                                                 //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            array1[i] = array[i];
        }
        delete[]array;                                                                  //deleting
        array = array1;                                                                 //pointing at
        array1 = NULL;                                                                             //null it
    }


    void deleteAnElementFromLast() {
        sizeOfArray = NoOfElement - 1;
        T *array2 = new T[sizeOfArray];                                                 //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            array2[i] = array[i];                                                       //copying
        }
        delete[]array;                                                                  //deleting
        array = array2;                                                                 //copying
        array2 = NULL;                                                                    //null it

    }

    void deleteAnElementFromSpecificIndex() {
        int index;
        T *array2 = new T[sizeOfArray];                                                 //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            array2[i] = array[i];                                                       //copying
        }
        delete[]array;                                                                  //deleting
        array = array2;                                                                 //copying
        array2 = NULL;                                                                    //null it
        cout << "ENTER INDEX = ";
        cin >> index;
        sizeOfArray = sizeOfArray - 1;
        for (int i = index; i < sizeOfArray; i++) {
            array[i] = array[i + 1];
        }
        for (int i = 0; i < sizeOfArray; i++) {
            cout << array[i] << " ";                                                 //displaying array elements
        }
        cout << endl;
    }

    void addAtElementAtTheStartOfArray() {
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

    void addElementAtLastIndexOfArray() {
        int element;
        cout << "enter element.." << endl;
        cin >> element;
        sizeOfArray = sizeOfArray + 1;                                                   //increasing size
        T *array2 = new T[sizeOfArray];                                                 //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            if(i==sizeOfArray-1){
                array2[i] = element;
            }//copying
            else{
                array2[i] = array[i];
            }
        }
        delete[]array;                                                                  //deleting
        array = array2;                                                                 //copying
        array2 = NULL;                                                                    //null it
    }

    void addToIndex() {
        int element;
        int index;
        sizeOfArray = sizeOfArray + 1;
        T *array2 = new T[sizeOfArray];                                                 //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            array2[i] = array[i];                                                       //copying
        }
        delete[]array;                                                                  //deleting
        array = array2;                                                                 //copying
        array2 = NULL;                                                                    //null it
        cout << "enter the position where you want to put the element.." << endl;
        cin >> index;
        cout << "enter element.." << endl;
        cin >> element;
        if (index <= sizeOfArray && index >= 0) {
            for (int i = sizeOfArray - 1; i >= index - 1; i--) {
                array[i + 1] = array[i];
            }
            array[index] = element;
        } else {
            cout << "the index you have written is greater than the size of array.." << endl;
            exit(3);
        }
    }

    void sortArray() {
        int size;
        int temp;
        cout << "ENTER SIZE = ";
        cin >> size;
        cout << "ENTER NUMBERS IN ARRAY TO BE SORTED = ";
        for (int i = 0; i < size; i++) {
            cin >> array[i];
        }
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (array[j] < array[i]) {
                    temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                }
            }
        }
        for (int i = 0; i < size; i++) {
            cout << array[i];
        }
    }


};


#endif //ITU_ALL_DATA_FUNCTIONS_H
