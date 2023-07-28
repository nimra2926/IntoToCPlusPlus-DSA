//
// Created by Lenovo on 10/3/2022.
//
#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    queue<int> q(5);
    int opt;
    int opt1;
    do {
        cout << "CHOOSE OPTION." << endl;
        cout << "1.SHOW FRONT." << endl;
        cout << "2.ENQUEUE." << endl;
        cout << "3.DEQUEUE." << endl;
        cout << "4.EXIT." << endl;
        cin >> opt;
        if (opt == 1) {
            q.showFront();
        }
        if (opt == 2) {
            do {
                cout << "YOU WANT TO ENTER NUMBER IN QUEUE?" << "\nENTER 1 FOR YES AND 0 FOR" << endl;
                cin >> opt1;
                if (opt1 == 1) {
                    int value;
                    cout << "ENTER THE VALUE TO ADD IN THE LIST." << endl;
                    cin >> value;
                    q.enqueue(value);
                }
                if (opt == 0) {
                    cout << "YOU CHOOSE NO." << endl;
                    exit(3);
                }
            } while (opt1 > 0 && opt1 <= 1);

        }
        if (opt == 3) {
            do {
                cout << "YOU WANT TO DELETE NUMBER IN QUEUE?" << "\nENTER 1 FOR YES AND 0 FOR NO" << endl;
                cin >> opt1;
                if (opt1 == 1) {
                    q.dequeue();
                }
                if (opt == 0) {
                    cout << "YOU CHOOSE NO." << endl;
                    break;
                }
            } while (opt1 > 0 && opt1 <= 1);
        }
        if (opt == 4) {
            cout << "YOU CHOOSE TO EXIT." << endl;
            exit(3);
        }
    } while (opt >= 1 && opt <= 4);
}


