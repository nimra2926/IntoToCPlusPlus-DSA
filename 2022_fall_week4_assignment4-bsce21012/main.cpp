#include <iostream>
#include "Functions.h"

using namespace std;

//
int main() {

    int opt;
    cout << "PLEASE ENTER YOUR CHOICE." << endl;                    //displaying options
    cout << "1.COUNT SORT." << endl;
    cout << "2.RADIX SORT." << endl;
    cout << "3.EXIT." << endl;
    cin >> opt;

    if (opt == 1) {
        arrayList A(5);
        int size1;
        int arr[size1];
        A.countSort(arr, size1);                                //calling the function
    }
    if (opt == 2) {
        arrayList A(5);
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
        A.radixSort(arr,size1);                                   //calling function
        cout<<"ARRAY AFTER SWAPPING = ";
        for(int j=0;j<size1;j++){
            cout<<arr[j]<<" ";                                      //showing the elements of the array after swapping
        }
        cout<<endl;
    }
    if (opt == 3) {
        cout << "YOU CHOOSE TO EXIT..." << endl;
        exit(2);
    }
    return 0;
}