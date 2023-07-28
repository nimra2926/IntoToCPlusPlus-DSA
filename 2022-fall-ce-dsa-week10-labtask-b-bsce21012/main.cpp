//
// Created by Lenovo on 11/3/2022.
//

#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    int opt;
    int size;
    cout << "ENTER SIZE" << endl;
    cin >> size;
    sort obj(size);
    do {
        cout << "\nENTER OPTION." << endl;
        cout << "1.BY USING MIN HEAP METHOD." << endl;                      //displaying
        cout << "2.BY USING MAX HEAP METHOD." << endl;
        cout << "3.EXIT." << endl;
        cin >> opt;
        if (opt == 1) {
            obj.addElements();
            cout << "UNSORTED ARRAY:" << endl;                        //displaying before swapping
            obj.display();
            for (int i = size / 2 - 1; i >= 0; i--) {
                obj.minHeap(i);
            }
            cout << "SORTED ARRAY :" << endl;
            obj.heapSort();                               //calling
            cout << endl;
        }
        if (opt == 2) {
            int arr[size];
            cout << "ENTER ELEMENTS = ";
            for (int i = 0; i < size; i++) {                  //taking input
                cin >> arr[i];
            }
            cout << "UNSORTED ARRAY :" << endl;
            for (int i = 0; i < size; i++) {                       //displaying before swapping
                cout << arr[i] << " ";
            }
            obj.heapSortMax(arr, size);                       //calling
            cout << endl;
            cout << "SORTED ARRAY :" << endl;
            for (int i = 0; i < size; i++) {                            //displaying before swapping
                cout << arr[i] << " ";
            }
        }
        if (opt == 3) {
            cout << "YOU CHOOSE TO EXIT." << endl;
            exit(4);
        }
        if(opt!= 1 && opt!=2 && opt!=3){
            cout<<"YOU HAVE ENTERED AN INVALID ARGUMENT."<<endl;
            break;
        }
    } while (opt>=1 && opt<=3);
}
