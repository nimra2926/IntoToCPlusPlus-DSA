#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    graph g(5);
    int opt;
    int vertex;
    int edge;
    do {
        cout << "CHOOSE OPTIONS." << endl;
        cout << "1.INPUT." << endl;
        cout << "2.ADD ELEMENT." << endl;
        cout << "3.UPDATE ELEMENT." << endl;
        cout << "4.DELETE ELEMENT." << endl;
        cout << "5.CHECK IF THE VALUE IS PRESENT OR NOT." << endl;
        cout << "6.EXIT." << endl;
        cin >> opt;
        if (opt == 1) {
            g.input();
            g.displayGraph();
        }
        if (opt == 2) {
            cout << "ENTER VERTEX = ";
            cin >> vertex;
            cout << "ENTER EDGE = ";
            cin >> edge;
            g.addElement(vertex, edge);
            g.displayGraph();
        }
        if (opt == 3) {
            cout << "ENTER VERTEX = ";
            cin >> vertex;
            cout << "ENTER EDGE = ";
            cin >> edge;
            g.update(vertex, edge);
            g.displayGraph();
        }
        if (opt == 4) {
            cout << "ENTER VERTEX = ";
            cin >> vertex;
            cout << "ENTER EDGE = ";
            cin >> edge;
            g.deleteElement(vertex, edge);
            g.displayGraph();
        }
        if (opt == 5) {
            int value;
            cout << "ENTER VALUE TO CHECK = ";
            cin >> value;
            g.check1(value);

        }


        if (opt == 6) {
            cout << "YOU CHOOSE TO EXIT." << endl;
            exit(4);

        }
    } while (opt >= 0 && opt <= 7);

    return 0;
}
