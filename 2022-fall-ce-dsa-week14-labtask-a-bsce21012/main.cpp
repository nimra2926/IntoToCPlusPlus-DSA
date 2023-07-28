//
// Created by Lenovo on 11/29/2022.
//
#include <iostream>
#include "Function.h"

using namespace std;

int main() {
    linkList a;
    int opt;
    do {
        cout << "CHOOSE OPTIONS." << endl;
        cout << "1.APPEND." << endl;
        cout << "2.PREPEND." << endl;
        cout << "3.ADD AT A SPECIFIC INDEX." << endl;
        cout << "4.DELETE LAST NODE." << endl;
        cout << "5.DELETE FIRST NODE." << endl;
        cout << "6.DELETE AT A SPECIFIC INDEX." << endl;
        cout << "7.PRINT." << endl;
        cout << "8.EXIT." << endl;
        cin >> opt;
        if (opt == 1) {
            a.append(2);
            a.append(4);
            a.append(2);
            cout << "CIRCULAR LINK LIST AFTER APPENDING = ";
            a.display();
        }
        if (opt == 2) {
            a.prepend(9);
            cout << "CIRCULAR LINK LIST AFTER PREPENDING = ";
            a.display();
        }
        if (opt == 3) {
            int value;
            int index;
            a.insertAtSpecificIndex(value, index);
            cout << "CIRCULAR LINK LIST AFTER INSERTING AT GIVEN INDEX = ";
            a.display();
        }
        if (opt == 4) {
            a.deleteNodeAtLastIndex();
            cout << "CIRCULAR LINK LIST AFTER DELETING LAST NODE = ";
            a.display();
        }
        if (opt == 5) {
            a.deleteNodeAtFirstIndex();
            cout << "CIRCULAR LINK LIST AFTER DELETING FIRST NODE = ";
            a.display();
        }
        if (opt == 6) {
            int index;
            a.deleteNode(index);
            cout << "CIRCULAR LINK LIST AFTER DELETING FROM SPECIFIC INDEX = ";
            a.display();
        }
        if (opt == 7) {
            cout << "CIRCULAR LINKED LIST = ";
            a.display();

        }
        if (opt == 8) {
            cout << "YOU CHOOSE TO EXIT." << endl;
            exit(4);
        }
    } while (opt >= 1 && opt <= 8);
}
