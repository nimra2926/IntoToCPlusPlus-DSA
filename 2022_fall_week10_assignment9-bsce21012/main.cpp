#include <iostream>
#include "Functions.h"

using namespace std;

//
int main() {

    node n(0);             //making ab object
    node *root;                               //making a pointer
    int val;              //declaring
    int opt;
    do {
        cout << "\nCHOOSE OPTIONS." << endl;
        cout << "1.INSERT." << endl;
        cout << "2.ATTACH A SUBTREE." << endl;
        cout << "3.HEIGHT OF THE TREE." << endl;
        cout << "4.SIZE OF THE TREE." << endl;                  //taking option
        cout << "5.DEGREE OF THE TREE." << endl;
        cout << "6.DISPLAY." << endl;
        cout << "7.IS ROOT." << endl;
        cout << "8.IS LEAF." << endl;
        cout << "9.DELETE." << endl;
        cout << "10.EXIT." << endl;
        cin >> opt;
        if (opt == 1) {
            root = n.insert(root, val);
            cout << "THE TREE IS = ";              //callling
            n.display(root);
            cout << endl;
        }
        if (opt == 2) {
            root = n.insert(root, val);
            n.display(root);
            cout<<endl;                         //calling
        }
        if (opt == 3) {
            cout << "THE HEIGHT OF TREE = ";
            int height1 = n.height(root);               //calling
            cout << height1 << endl;
        }
        if (opt == 4) {
            cout << "THE SIZE OF TREE = ";
            int size = n.size(root);               //calling
            cout << size << endl;
        }
        if (opt == 5) {
            cout << "ENTER THE NODE FOR WHICH YOU WANT FIND THE DEGREE = ";
            cin >> val;
            int degreeOfNode = n.degree(root, val);              //calling
            cout << "DEGREE OF TREE = ";
            cout << degreeOfNode << endl;
        }
        if (opt == 6) {
            cout<<"THE TREE IS = ";
            n.display(root);
            cout<<endl;
        }
        if (opt == 7) {
            cout << "ENTER THE NODE FOR WHICH YOU WANNA CHECK IS ROOT NODE, OR NOT = ";
            cin >> val;
            if (n.isRoot(root, val)) {                 //calling
                cout << "IS ROOT NODE." << endl;
            } else {
                cout << "IS NOT ROOT NODE." << endl;
            }
        }
        if (opt == 8) {
            cout << "ENTER THE NODE FOR WHICH YOU WANNA CHECK IS LEAF NODE, OR NOT = ";
            cin >> val;                        //calling
            if (n.isLeaf(root, val)) {
                cout << "IS LEAF NODE." << endl;
            } else {
                cout << "IS NOT LEAF NODE." << endl;
            }
        }
        if (opt == 9) {
            n.deleteTree(root);             //calling
            root = nullptr;
            n.display(root);
            cout<<endl;
        }
        if (opt == 10) {
            cout << "YOU CHOOSE TO EXIT." << endl;
            exit(3);
        }
        if(opt!=1 && opt!=2 && opt!=3 && opt!=4 && opt!=5 && opt!=6 && opt!=7 && opt!=8 && opt!=9 && opt!=10){
            cout<<"YOU HAVE ENTERED AN INVALID ARGUMENT."<<endl;
            break;
        }
    } while (opt >= 1 && opt <= 10);
    return 0;
}
