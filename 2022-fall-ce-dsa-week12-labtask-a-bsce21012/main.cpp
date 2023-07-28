//
// Created by Lenovo on 11/15/2022.
//

#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    int v;
    cout<<"ENTER THE NUMBER OF VERTEX = ";
    cin>>v;
    graph g(v);
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
        cout << "7.EXIT." << endl;
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
        if(opt==4){
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
            cout << "YOU CHOOSE TO EXIT." << endl;
            exit(4);
        }
    } while (opt >= 1 && opt <= 6);

    return 0;
}

