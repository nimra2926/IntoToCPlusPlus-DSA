//
// Created by Lenovo on 9/1/2022.
//

#include "Functions.h"
#include <iostream>

using namespace std;

int main() {
    int opt;
    cout << "CHOOSE OPTIONS..." << endl;
    cout << "1.EXPAND AN ARRAY." << endl;
    cout << "2.DELETE AN ELEMENT FROM LAST INDEX." << endl;
    cout << "3.DELETE AN ELEMENT FROM SPECIFIC INDEX." << endl;
    cout << "4.ADD AN ELEMENT AT THE START OF ARRAY." << endl;
    cout << "5.ADD ELEMENT AT THE LAST INDEX OF ARRAY." << endl;
    cout << "6.ADD TO SPECIFIC INDEX." << endl;
    cout << "7.SORT THE ARRAY." << endl;
    cout << "8.EXIT." << endl;
    cin >> opt;
    if (opt == 1) {
        customizedArray<int> c(5);                                                          //calling object
        c.add();
        c.display();
        c.expand();
        c.display();

    }
    if (opt == 2) {
        customizedArray<int> c(5);                                                          //calling object
        //calling
        c.add();
        c.display();
        c.deleteAnElementFromLast();
        c.display();

    }
    if (opt == 3) {
        customizedArray<int> c(5);                                                          //calling object
        c.add();
        c.display();
        c.deleteAnElementFromSpecificIndex();
//        c.display();

    }
    if (opt == 4) {
        customizedArray<int> c(5);                                                          //calling object
        c.add();
        c.display();
        c.addAtElementAtTheStartOfArray();
        c.display();

    }
    if (opt == 5) {
        customizedArray<int> c(5);                                                          //calling object
        c.add();
        c.display();
        c.addElementAtLastIndexOfArray();
        c.display();

    }
    if (opt == 6) {
        customizedArray<int> c(5);                                                          //calling object
        c.add();
        c.display();
        c.addToIndex();
        c.display();
    }
    if (opt == 7) {
        customizedArray<int> c(5);                                                          //calling object
        c.sortArray();
    }
    if (opt == 8) {
        cout << "YOU CHOOSE TO EXIT..." << endl;
        exit(4);
    }


}