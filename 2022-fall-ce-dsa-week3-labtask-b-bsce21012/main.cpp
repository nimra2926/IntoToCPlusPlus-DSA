//
// Created by Lenovo on 9/16/2022.
//

#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    int opt;
    cout << "PLEASE ENTER YOUR CHOICE." << endl;
    cout << "1.BUBBLE SORT." << endl;
    cout << "2.INSERTION SORT." << endl;                                       //displaying options
    cout << "3.MERGE SORT." << endl;
    cout << "4.QUICK SORT." << endl;
    cout << "5.EXIT." << endl;
    cin >> opt;
    if (opt == 1) {
        mergeArray M(5);                                    //making an object
        M.add();
        M.bubbleSort();                                     //calling
        M.display();
    }
    if (opt == 2) {
        mergeArray M(5);                                         //making an object
        M.add();
        M.insertionSort();
        M.display();
    }
    if (opt == 3) {
        mergeArray M(5);
        int size;                                                        //declaring
        int *array1 = new int[size];                                     //making an
        cout << "ENTER SIZE OF ARRAY = ";
        cin >> size;                                              //taking size of array
        cout << "ENTER ELEMENTS OF ARRAY = ";
        for (int i = 0; i < size; i++) {
            cin >> array1[i];                                   //taking input
        }
        M.mergeSort(array1, 0, size - 1);             //calling function
        cout << "SORTED ARRAY AFTER MERGE SORT = ";
        for (int i = 0; i < size; i++) {
            cout << array1[i] << " ";                                     //displaying
        }
        cout << endl << endl;
    }
    if(opt==4){
        mergeArray M(5);
        int size1;                                                        //declaring
        int *array1 = new int[size1];                                     //making an
        cout << "ENTER SIZE OF ARRAY = ";
        cin >> size1;                                              //taking size of array
        cout << "ENTER ELEMENTS OF ARRAY = ";
        for (int i = 0; i < size1; i++) {
            cin >> array1[i];                                   //taking input
        }
        M.quickSort(array1,0,size1-1);
        cout << "SORTED ARRAY AFTER MERGE SORT = ";
        for (int i = 0; i < size1; i++) {
            cout << array1[i] << " ";                                     //displaying
        }
        cout << endl << endl;
    }
    if (opt == 5) {
        cout << "YOU CHOOSE TO EXIT..." << endl;
        exit(2);
    }

}