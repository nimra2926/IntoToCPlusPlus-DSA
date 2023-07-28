//
// Created by Lenovo on 11/24/2022.
//

#include <iostream>
#include "Functions.h"

using namespace std;

int main() {

    graph g(4);

    int v1;
    int v2;                        //declaring
    int opt;
    do {
        cout << "CHOOSE OPTION." << endl;            //displaying the options
        cout << "1.ADD EDGE." << endl;
        cout << "2.DELETE EDGE." << endl;
        cout << "3.UPDATE EDGE." << endl;
        cout << "4.UPDATE NODE." << endl;
        cout << "5.CHECK EDGE." << endl;
        cout << "6.DISPLAY." << endl;
        cout << "7.CHECK IF CYCLIC OR NOT." << endl;
        cout << "8.ADD WEIGHT." << endl;
        cout << "9.REPRESENT THEM WITH WEIGHT." << endl;
        cout << "10.CHANGE CYCLIC INT ACYCLIC." << endl;
        cout << "11.EXIT." << endl;
        cin >> opt;
        if (opt == 1) {
            g.addEdges();
            g.displayMat();
        }
        if (opt == 2) {
            g.deleteEdge(v1, v2);
            g.displayMat();
        }
        if (opt == 3) {
            g.update(v1, v2);
            g.displayMat();
        }
        if (opt == 4) {
            int node;
            g.deleteNode(node);
            g.displayMat();
        }
        if (opt == 5) {
            g.check(v1, v2);                          //calling
        }
        if (opt == 6) {
            g.displayMat();
        }
        if (opt == 7) {
            if (g.isConnected())                      //calling
                cout << "\nGRAPH IS CYCLIC."<<endl;
            else
                cout << "\nGRAPH IS NOT CYCLIC."<<endl;
        }
        if (opt == 8) {
            g.addWeight();
        }
        if (opt == 9) {
            g.graphRepresentationIn2d();                         //calling
        }
        if (opt == 10) {
            g.changeIntoAcyclic();      //calling
            g.displayMat();
        }
        if (opt == 11) {
            cout << "YOU CHOOSE TO EXIT." << endl;            //displaying
            exit(4);
        }
    } while (opt >= 1 && opt <= 11);

    return 0;
}


