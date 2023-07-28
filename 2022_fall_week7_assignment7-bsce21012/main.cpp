#include <iostream>
#include "Functions.h"

using namespace std;

//
int main() {

    Node n(5);                          //making object
    n.setNextPtr(0);
    n.getNextPtr();
    linkList l;                      //making object
    int opt;
        cout << endl;
        cout << "\nENTER OPTION." << endl;
        cout << "1.BUBBLE SORT." << endl;
        cout << "2.SELECTION SORT." << endl;
        cout << "3.EXIT." << endl;                                         //taking input
        cin >> opt;
        if (opt == 1) {
            int value;
            l.takingInput(value);                                      //storing in the link list
            cout << "BEFORE SWAPPING = ";
            l.display();                            //displaying before swapping
            cout << endl;
            l.bubbleSort();                         //calling bubble sort function
            cout << "AFTER SWAPPING  = ";
            l.display();                              //displaying after swapping
        }
        if (opt == 2) {
            int value;
            l.takingInput(value);                                        //storing in the link list
            cout << "BEFORE SWAPPING = ";
            l.display();                                      //displaying before swapping
            cout << endl;
            l.selectionSort();                                //calling the selection sort function
            cout << "AFTER SWAPPING  = ";
            l.display();                                //displaying after swapping
        }
        if (opt == 3) {
            cout << "YOU CHOOSE TO EXIT." << endl;
            exit(3);
        }
    return 0;

}
