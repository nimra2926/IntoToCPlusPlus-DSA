//
// Created by Lenovo on 9/8/2022.
//

#include <iostream>
#include "Functions.h"
using namespace std;
int main(){
    int opt;
    cout<<"PLEASE ENTER YOUR CHOICE."<<endl;
    cout<<"1.BUBBLE SORT."<<endl;
    cout<<"2.INSERTION SORT."<<endl;
    cout<<"3.EXIT."<<endl;
    cin>>opt;
    if(opt==1){
        sortArrays S (5);                                    //making an object
        S.add();
        S.bubbleSort();                                     //calling
        S.display();
    }
    if(opt==2){
        sortArrays S (5);
        S.add();
        S.insertionSort();
        S.display();
    }
    if(opt==3){
        cout<<"YOU CHOOSE TO EXIT..."<<endl;
        exit(2);
    }
}