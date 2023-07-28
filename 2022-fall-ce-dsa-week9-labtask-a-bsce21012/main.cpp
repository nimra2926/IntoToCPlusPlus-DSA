//
// Created by Lenovo on 10/25/2022.
//
#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    node n;
    node n1(0);
    linklist l;
    int opt;
    int val;
    do{
        cout<<"1.INSERT."<<endl;
        cout<<"2.DELETE."<<endl;
        cout<<"3.EXIT."<<endl;
        cin>>opt;
        node *temp = nullptr;
        if(opt==1){
            cout << "ENTER VALUE = ";
            cin >> val;
            temp = l.Insert(temp, val);
            l.print(temp);
            cout<<endl;
        }
        if(opt==2){
            l.deleteNode(temp, val);
            cout<<"DELETED NODE = ";
            l.print(temp);
        }
        if(opt==3){
            cout<<"YOU CHOOSE TO EXIT."<<endl;
            exit(3);
        }
    }while(opt>=1 && opt<=3);


}

