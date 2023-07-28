#include <iostream>
#include "Functions.h"

using namespace std;

//
int main() {
//    Node n(5);                          //making object
//    n.setNextPtr(0);
//    n.getNextPtr();
//    linkList l;                      //making object
//    int opt;
//    cout<<endl;
//    cout << "\nENTER OPTION." << endl;
//    cout << "1.INSERTION SORT." << endl;
//    cout << "2.MERGE SORT." << endl;
//    cout << "3.EXIT." << endl;                                         //taking input
//    cin >> opt;
//    if(opt==1){
//        int value;
//        l.takingInput(value);
//        l.display();
//        cout << endl;
//        l.insertionSort(l.head);
//        l.display();
//        cout<<endl;
//    }
//    if(opt==2){
//        int value;
//        l.takingInput(value);
//        l.display();
//        cout << endl;
//        l.mergeSort(l.head);
//        l.display();
//        cout<<endl;
//    }
//    if(opt==3){
//        cout<<"YOU CHOOSE TO END."<<endl;
//        exit(3);
//    }
    int n;
    int b;

    std::cin >> n;

    for (int i=n; n>0; --i) {

        b = n%2;
        std::cout << b;
        n = n/2;

    }
    return 0;
}
