#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    int s;
    int opt1;
    int opt;                   //declaring
    cout << "ENTER SIZE OF STACK =";
    cin >> s;                   //taking the size and passing in constructor
    if(s<=0){
        cout<<"SIZE MUST BE GREATER THAN ZERO."<<endl;
        exit(3);
    }
    stack T(s);
    do {
        cout << "\nCHOOSE OPTIONS." << endl;             //showing options
        cout << "1.PUSH ELEMENT." << endl;
        cout << "2.SHOW FRONT." << endl;
        cout << "3.POP ELEMENT." << endl;
        cout << "4.EXIT." << endl;
        cin >> opt;
        if (opt == 1) {
            if (T.full()) {                         //checking if the array is full or not
                cout << "STACK IS FULL." << endl;
                break;
            } else {
                int value;
                cout << "ENTER THE VALUE TO ENTER IN STACK = ";
                cin >> value;
                T.push(value);                //taking value and passing in the function
                do {
                    cout << "YOU WANT TO PUSH AGAIN?" << "\nENTER 1 FOR YES AND 0 FOR NO" << endl;
                    cin >> opt1;
                    if (opt1 == 1) {
                        if (T.full()) {                         //checking if the array is full or not
                            cout << "STACK IS FULL." << endl;
                            break;
                        } else {
                            cout << "ENTER THE VALUE TO ENTER IN STACK = ";
                            cin >> value;
                            T.push(value);                        //if user enter 1 then calling the function again
                            T.display();
                        }
                    }
                    if (opt1 == 0) {
                        cout << "YOU CHOOSE NO." << endl;
                        break;
                    }
                    if (opt1 != 1 && opt1 != 0) {
                        cout << "YOU HAVE ENTER AN INVALID NUMBER." << endl;
                        break;
                    }
                } while (opt1 >= 0 && opt1 <= 1);
            }
            T.display();
        }
        if (opt == 2) {
            if (T.empty()) {                         //checking if the array is empty
                cout << "STACK IS EMPTY." << endl;
            }
            else{
                T.showFront();
            }
        }
        if (opt == 3) {
            if (T.empty()) {                         //checking if the array is empty
                cout << "STACK IS EMPTY." << endl;
            } else {
                T.pop();
                T.display();                   //calling
            }
        }
        if (opt == 4) {
            cout << "YOU CHOOSE TO EXIT." << endl;
            exit(3);                 //exiting
        }
        if(opt!=0 && opt!=2 && opt!=3 && opt!=4){
            cout<<"YOU HAVE ENTERED THE INVALID ARGUMENTS."<<endl;
        }
    } while (opt >= 1 && opt <= 4);           //do while condition to run the menu until the user enter exit option.
    return 0;
}
