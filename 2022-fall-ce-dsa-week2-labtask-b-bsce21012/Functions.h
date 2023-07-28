//
// Created by Lenovo on 9/8/2022.
//

#ifndef ITU_ALL_DATA_FUNCTIONS_H
#define ITU_ALL_DATA_FUNCTIONS_H
#include <iostream>

using namespace std;

class sortArrays {                                                             //making class
private:
    int sizeOfArray;                                                                //declaring
    int NoOfElement;                                                                //declaring
    int *array;
public:
    sortArrays(int s) {
        sizeOfArray = s;                                                           //copying
        NoOfElement = 0;                                                                //placing it to zero
        array = new int [sizeOfArray];
        for (int i = 0; i < sizeOfArray; i++) {
            array[i] = 0;                                                   //setting values to zero
        }
    }
    void add(){
        cout << "ENTER NUMBERS IN ARRAY TO BE SORTED = ";
        for (int i = 0; i < sizeOfArray; i++) {
            cin >> array[i];                                                    //taking elements in the array
        }
    }
    void display(){
        cout<<"THE SORTED ARRAY =";
        for (int i = 0; i < sizeOfArray; i++) {
            cout << array[i]<<" ";                                         //displaying the array
        }
        cout<<endl;
    }
    void bubbleSort(){
        int temp;                                                               //declaring temp
        for (int i = 0; i < sizeOfArray - 1; i++) {                             //applying loop till size-1
            for (int j = i + 1; j < sizeOfArray; j++) {                         //applying loop starting from 1 index after till size
                if (array[j] < array[i]) {                                //comparing the indexes
                    temp = array[j];                                      //swapping the elements if the next index is greater than the previous one
                    array[j] = array[i];
                    array[i] = temp;
                }
            }
        }
    }
    void insertionSort(){
        int temp;
        for(int i=1;i<sizeOfArray;i++){                                    //applying loop till the size starting from 1
            for(int j=i;j>0;j--){                                          //applying inner loop starting from i to greater than zero
                if(array[j-1]>array[j]){                                   //comparing
                    temp=array[j-1];                                       //swapping
                    array[j-1]=array[j];
                    array[j]=temp;
                }
            }
        }
    }
};



#endif //ITU_ALL_DATA_FUNCTIONS_H
