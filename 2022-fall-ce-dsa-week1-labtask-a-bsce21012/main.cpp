//
// Created by Lenovo on 8/30/2022.
//

#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    int opt;
    cout << "CHOOSE THE OPTIONS BELOW." << endl;
    cout << "1.EXPAND THE ARRAY." << endl;
    cout << "2.CONTRACT BY DELETING LAST INDEX." << endl;
    cout << "3.ADD AN ELEMENT TO THE START INDEX." << endl;                             //displaying options
    cout << "4.ADD AN ELEMENT TO THE LAST INDEX." << endl;
    cout << "5.EXIT." << endl;
    cin >> opt;
    if (opt == 1) {
        operations<int> c(5);
        c.add();
        c.display();                                                                //calling
        c.expand();
        c.display();

    }
    if (opt == 2) {
        operations<int> c(5);                                         //calling constructor
        c.add();
        c.display();
        c.deleteAnElementFromLast();
        c.display();

    }
    if (opt == 3) {
        operations<int> c(5);
        c.add();
        c.display();
        c.prepend();
        c.display();

    }
    if (opt == 4) {
        operations<int> c(5);
        c.add();
        c.display();
        c.addAnElementAtTheLastIndex();
        c.add();
        c.display();
    }
    if (opt == 5) {
        cout << "YOU CHOOSE TO EXIT.." << endl;                         //displaying
        exit(3);                                                        //
    }
}