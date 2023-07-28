//
// Created by Lenovo on 9/28/2022.
//
#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    Node<int> n(5);
    n.setNextPtr(0);
    n.getNextPtr();
    linkList<int> l;
    int opt1;
    cout << "CHOOSE OPTIONS." << endl;
    cout << "1.ADD AN ELEMENT AT THE START OF THE LIST." << endl;
    cout << "2.ADD AN ELEMENT AT THE LAST OF THE LIST." << endl;
    cout << "3.ADD AN ELEMENT AT THE SPECIFIC INDEX OF THE LIST." << endl;
    cout << "4.DELETE AN ELEMENT FROM THE START OF THE LIST." << endl;
    cout << "5.DELETE AN ELEMENT FROM THE LAST OF THE LIST." << endl;
    cout << "6.DELETE AN ELEMENT FROM THE SPECIFIC INDEX OF THE LIST." << endl;
    cout << "7.EXIT." << endl;
    cin >> opt1;
    int opt2;
    if (opt1 == 1) {
        int val;
        do {
            cout
                    << "\nYOU WANT TO ADD MORE THAN 1 VALUE?\nFOR 1 ENTER 0.\nFOR MORE THAN 1 ENTER 1.\nIF YOU WANT TO STOP ADDING VALUES ENTER 2."
                    << endl;
            cin >> opt2;
            if (opt2 == 1) {
                cout << "\nENTER THE VALUE YOU WANT TO ADD." << endl;
                cin >> val;
                l.insertElementInTheStart(val);
                l.display();
            }
            if (opt2 == 0) {
                cout << "\nENTER THE VALUE YOU WANT TO ADD." << endl;
                cin >> val;
                l.insertElementInTheStart(val);
                cout << "THE 1 VALUE IN LIST IS = ";
                l.display();
            }
            if (opt2 == 2) {
                cout << "THE FINAL ARRAY IS = ";
                l.display();
            }
            if (opt2 != 1 && opt2 != 0 && opt2 != 2) {
                cout << "YOU HAVE ENTERED AN INVALID ARGUMENT" << endl;
            }
        } while (opt2 == 1);

    }
    if (opt1 == 2) {
        int newElement;
        int opt;
        cout << "ENTER ELEMENT TO PUT AT THE END OF THE ARRAY = ";
        cin >> newElement;
        l.insertElementInTheEnd(newElement);
        cout << endl;
        do {
            cout << "\nDO YOU WANT TO ADD MORE ELEMENTS?" << "\nENTER 1 FOR YES AND 0 FOR NO." << endl;
            cin >> opt;
            if (opt == 1) {
                l.display();
                cout << endl;
                cout << "\nENTER ELEMENT TO PUT AT THE END OF THE ARRAY = ";
                cin >> newElement;
                cout << endl;
                l.insertElementInTheEnd(newElement);
                l.display();
            }
            if (opt == 0) {
                cout << "THE FINAL LIST IS = ";
                l.display();
                exit(3);
            }
        } while (opt == 1);
    }
    if (opt1 == 3) {
        int number;
        int val;
        cout << "ENTER THE NUMBER OF ELEMENTS U WANNA ADD IN THE LIST.";
        cin >> number;
        cout << "\nENTER THE VALUES YOU WANT TO ADD." << endl;
        for (int i = 0; i < number; i++) {
            cin >> val;
            l.insertElementInTheStart(val);
        }
        int value;
        int index;
        cout<<"ENTER THE NUMBER YOU WANNA ADD TO LIST.";
        cin>>value;
        cout<<"ENTER THE INDEX AT WHICH YOU WANNA ADD.";
        cin>>index;
        l.InsertAtTheSpecificIndex(value,index);
        l.display();
    }
    if (opt1 == 4) {
        int number;
        int val;
        cout << "ENTER THE NUMBER OF ELEMENTS U WANNA ADD IN THE LIST.";
        cin >> number;
        cout << "\nENTER THE VALUES YOU WANT TO ADD." << endl;
        for (int i = 0; i < number; i++) {
            cin >> val;
            l.insertElementInTheStart(val);
        }
        l.DeleteNodeFromTheStart();
        l.display();
    }
    if (opt1 == 5) {
        int number;
        int val;
        cout << "ENTER THE NUMBER OF ELEMENTS U WANNA ADD IN THE LIST.";
        cin >> number;
        cout << "\nENTER THE VALUES YOU WANT TO ADD." << endl;
        for (int i = 0; i < number; i++) {
            cin >> val;
            l.insertElementInTheStart(val);
        }
        l.deleteNodeFromTheEndOfList();
        l.display();
    }
    if (opt1 == 6) {
        int number;
        int val;
        cout << "ENTER THE NUMBER OF ELEMENTS U WANNA ADD IN THE LIST.";
        cin >> number;
        cout << "\nENTER THE VALUES YOU WANT TO ADD." << endl;
        for (int i = 0; i < number; i++) {
            cin >> val;
            l.insertElementInTheStart(val);
        }
        int index;
        cout<<"ENTER THE INDEX YOU WANNA DELETE.";
        cin>>index;
        l.deleteAtSpecificIndex(index);
        l.display();
    }
    if (opt1 == 7) {
        cout << "YOU CHOOSE TO EXIT." << endl;
        exit(3);
    }
}
