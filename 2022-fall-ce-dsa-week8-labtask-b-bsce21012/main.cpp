//
// Created by Lenovo on 11/28/2022.
//
#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    doubly d;
    int opt;
    do {
        cout << "CHOOSE OPTIONS." << endl;
        cout << "1.APPEND." << endl;
        cout << "2.PREPEND." << endl;
        cout << "3.ADD AT SPECIFIC INDEX." << endl;
        cout << "4.ADD AT START." << endl;
        cout << "5.ADD AT END." << endl;
        cout << "6.DELETE AT SPECIFIC INDEX." << endl;
        cout << "7.EXIT." << endl;
        cin >> opt;
        if (opt == 1) {
            d.append(3);
            d.append(4);
            d.append(5);
            d.append(6);
            d.display();
        }
        if (opt == 2) {
            int value;
            cout<<"ENTER THE VALUE TO PREPEND."<<endl;
            cin>>value;
            d.prepend(value);
            d.display();
        }
        if (opt == 3) {
            d.addAtASpecificIndex();
            d.display();
        }
        if (opt == 4) {

            d.deleteFromStart();
            d.display();
        }
        if (opt == 5) {
            d.deleteFromLast();
            d.display();
        }
        if (opt == 6) {

            d.deleteAtASpecificIndex();
            d.display();
        }
        if (opt == 7) {
            cout << "YOU CHOOSE TO EXIT." << endl;
            exit(4);
        }
    } while (opt >= 1 && opt <= 7);
}