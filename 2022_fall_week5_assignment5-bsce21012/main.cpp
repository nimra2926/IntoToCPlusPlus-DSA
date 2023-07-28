#include <iostream>
#include "Functions.h"

using namespace std;

//
int main() {
    Node n(5);                          //making object
    n.setNextPtr(0);
    n.getNextPtr();                                                  //calling
    linkList l;                      //making object
    l.display();
    int opt1;            //declaring
    int opt;
    do {

        cout << "\nCHOOSE OPTIONS." << endl;
        cout << "1.APPEND." << endl;
        cout << "2.PREPEND." << endl;
        cout << "3.ADD AT SPECIFIC INDEX." << endl;                  //displaying options
        cout << "4.DELETE AN ELEMENT FROM THE START OF THE LIST." << endl;
        cout << "5.DELETE AN ELEMENT FROM THE LAST OF THE LIST." << endl;
        cout << "6.DELETE AN ELEMENT FROM THE SPECIFIC INDEX OF THE LIST." << endl;
        cout << "7.EXIT." << endl;
        cin >> opt1;
        if (opt1 == 1) {
            int value;
            cout << "YOU WANT TO ENTER 1 VALUE OR MULTIPLE VALUES?" << "\nENTER 0 FOR 1 VALUE AND 1 FOR MULTIPLE VALUES"
                 << endl;                  //taking choices from user then calling the functions
            cin >> opt;
            if (opt == 0) {
                cout << "ENTER THE NUMBER YOU WANT TO ADD IN LIST = " << endl;
                cin >> value;
                l.append(value);
                l.display();
            }
            if (opt == 1) {
                int val;
                cout << "ENTER THE NUMBER OF TIMES YOU WANT TO ENTER THE VALUE." << endl;      //taking the choice to enter the number
                cin >> val;

                for (int i = 0; i < val; i++) {
                    cout << "ENTER THE NUMBER YOU WANT TO ADD IN LIST = " << endl;
                    cin >> value;
                    l.append(value);          //calling
                }
                l.display();
            } if(opt!=0 && opt!=1) {
                cout << "YOU HAVE ENTERED INVALID ARGUMENT." << endl;
            }

        }
        if(opt1==2){
            int value;
            cout << "ENTER THE NUMBER YOU WANT TO ADD IN LIST = " << endl;
            cin >> value;                       //taking value to add in list
            l.prepend(value);                 //calling
            l.display();                     //calling
        }
        if(opt1==3){
            int index;
            int value;
            cout<<"ENTER THE INDEX AT WHICH YOU WANT TO ADD THE VALUE."<<endl;
            cin>>index;
            cout << "ENTER THE NUMBER YOU WANT TO ADD IN LIST = " << endl;
            cin >> value;                          //taking value
            l.insertAtIndex(index,value);                          //calling
            l.display();
        }
        if(opt1==4){
            l.deleteAtStart();                  //calling
            l.display();
        }
        if(opt1==5){
            l.deleteAtEnd();                  //calling
            l.display();
        }
        if(opt1==6){
            int index;
            cout<<"ENTER THE INDEX FROM WHICH YOU WANT TO DELETE THE VALUE."<<endl;
            cin>>index;
            l.deleteAtIndex(index);
            l.display();                         //calling
        }
        if(opt1==7){
            cout<<"YOU CHOOSE TO EXIT."<<endl;                //displaying
            exit(3);
        }
    } while (opt1 >= 1 && opt1 <= 7);                   //condition to terminate the do while loop

    return 0;
}
