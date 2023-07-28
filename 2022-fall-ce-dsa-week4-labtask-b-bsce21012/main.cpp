//
// Created by Lenovo on 9/22/2022.
//

//
// Created by Lenovo on 9/20/2022.
//
#include <iostream>
#include "Functions.h"

using namespace std;

//
int main() {

    int opt;
    cout << "PLEASE ENTER YOUR CHOICE." << endl;                    //displaying options
    cout << "1.MERGE SORT." << endl;
    cout << "2.COUNT SORT." << endl;
    cout << "3.RADIX SORT." << endl;
    cout << "4.EXIT." << endl;
    cin >> opt;

    if (opt == 1) {
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
    if (opt == 2) {
        mergeArray M(5);
        int size1;
        int arr[size1];
        M.countSort(arr, size1);                                //calling the function
    }
    if (opt == 3) {
        mergeArray M(5);
        int size1;                                  //declaring
        cout<<"ENTER SIZE OF ARRAY = ";
        cin>>size1;                                     //taking size
        int arr[size1];
        cout<<"ENTER ELEMENTS = ";
        for(int j=0;j<size1;j++){
            cin>>arr[j];                                           //taking input in the array
        }
        cout<<endl;
        cout<<"ARRAY BEFORE SWAPPING = ";
        for(int j=0;j<size1;j++){
            cout<<arr[j]<<" ";                                       //showing the elements of the array before swapping
        }
        cout<<endl;
        M.radixSort(arr,size1);                                   //calling function
        cout<<"ARRAY AFTER SWAPPING = ";
        for(int j=0;j<size1;j++){
            cout<<arr[j]<<" ";                                      //showing the elements of the array after swapping
        }
        cout<<endl;
    }
    if (opt == 4) {
        cout << "YOU CHOOSE TO EXIT..." << endl;
        exit(2);
    }
    return 0;
}