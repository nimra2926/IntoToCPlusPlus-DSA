#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    Node n(5);                          //making object
    n.setNextPtr(0);
    n.getNextPtr();                                                  //calling
    linkList l1;                      //making object
    l1.display();
    int opt1;            //declaring
    do {

        cout << "\nCHOOSE OPTIONS." << endl;
        cout << "1.APPEND." << endl;
        cout << "2.PREPEND." << endl;
        cout << "3.ADD AT SPECIFIC INDEX." << endl;                  //displaying options
        cout << "4.DELETE AN ELEMENT FROM THE START OF THE LIST." << endl;
        cout << "5.DELETE AN ELEMENT FROM THE LAST OF THE LIST." << endl;
        cout << "6.DELETE AN ELEMENT FROM THE SPECIFIC INDEX OF THE LIST." << endl;
        cout << "7.QUICK SORT." << endl;
        cout << "8.RADIX SORT." << endl;
        cout << "9.EXIT." << endl;
        cin >> opt1;
        if (opt1 == 1) {
            l1.append(3);
            l1.append(7);
            l1.append(2);
            l1.append(0);
            l1.display();
        }

        if (opt1 == 2) {
            l1.prepend(4);
            l1.prepend(0);
            l1.prepend(1);
            l1.prepend(2);
            l1.display();
        }
        if (opt1 == 3) {
            int index;
            int value;
            cout << "ENTER THE INDEX AT WHICH YOU WANT TO ADD THE VALUE." << endl;
            cin >> index;
            cout << "ENTER THE NUMBER YOU WANT TO ADD IN LIST = " << endl;
            cin >> value;                          //taking value
            l1.insertAtIndex(index, value);                          //calling
            l1.display();
        }
        if (opt1 == 4) {
            l1.deleteAtStart();                  //calling
            l1.display();
        }
        if (opt1 == 5) {
            l1.deleteAtEnd();                  //calling
            l1.display();
        }
        if (opt1 == 6) {
            int index;
            cout << "ENTER THE INDEX FROM WHICH YOU WANT TO DELETE THE VALUE." << endl;
            cin >> index;
            l1.deleteAtIndex(index);
            l1.display();                         //calling
        }
        if (opt1 == 7) {
            Node *temp = l1.getHead();
            cout<<"BEFORE SORTING = ";
            l1.display();
            l1.quicksort(temp, l1.getTail(temp));                        //calling
            cout<<"\nAFTER SORTING = ";
            l1.display();
        }
        if (opt1 == 8) {
            linkList r[10];
            cout<<"BEFORE SORTING = ";
            l1.display();                            //calling
            l1.radixSort(l1,r);
            cout<<"\nAFTER SORTING = ";
            l1.display();
        }
        if (opt1 == 9) {
            cout << "YOU CHOOSE TO EXIT." << endl;                //displaying
            exit(3);
        }
    } while (opt1 >= 1 && opt1 <= 9);                   //condition to terminate the do while loop

    return 0;
}




