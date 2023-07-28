//
// Created by Lenovo on 10/6/2022.
//
#include <iostream>
#include "Functions.h"

using namespace std;

//
int main() {
    Node n(5);                          //making object
    n.setNextPtr(0);
    n.getNextPtr();                                                  //calling
    linkList l;
    queue q;
    int opt;
    int opt1;
    do{
        cout<<"\nCHOOSE OPTIONS."<<endl;
        cout<<"1.ENQUEUE ELEMENTS."<<endl;
        cout<<"2.DEQUEUE ELEMENTS."<<endl;
        cout<<"3.SHOW FRONT ELEMENT."<<endl;
        cout<<"4.DISPLAY ELEMENTS OF STACK."<<endl;
        cout<<"5.EXIT."<<endl;
        cin>>opt;
        if(opt==1){
            q.pushElement();
            do{
                cout<<"YOU WANNA PUSH ELEMENT AGAIN?"<<"\nENTER 1 FOR YES AND 0 FOR NO."<<endl;
                cin>>opt1;
                if(opt1==1){
                    q.pushElement();
                }
                if(opt1==0){
                    cout<<"YOU CHOOSE NO."<<endl;
                    break;
                }
                if(opt1!=0 && opt1!=1){
                    cout<<"YOU HAVE ENTERED INVALID ARGUMENT."<<endl;
                    break;
                }
            }while(opt1>=0 && opt<=1);

        }
        if(opt==2){
            q.popElements();

        }
        if(opt==3){
            q.showFrontElement();
        }
        if(opt==4){
            q.displayElement();
        }
        if(opt==5){
            cout<<"YOU CHOOSE TO EXIT."<<endl;
            exit(4);
        }
    }while(opt>=1 && opt<=5);

}

