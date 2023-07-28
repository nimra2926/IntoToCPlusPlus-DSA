//
// Created by Lenovo on 11/28/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK8_LABTASK_B_BSCE21012_FUNCTIONS_H
#define INC_2022_FALL_CE_DSA_WEEK8_LABTASK_B_BSCE21012_FUNCTIONS_H

#endif //INC_2022_FALL_CE_DSA_WEEK8_LABTASK_B_BSCE21012_FUNCTIONS_H
//doubly linklist

#include <iostream>

using namespace std;
class node {
public:
    int data;
    node *nextPtr;
    node *previousPtr;

    node(int d) {
        data = d;
        nextPtr = nullptr;
    }

    ~node() {
        nextPtr = nullptr;
    }
};

class doubly {
private:
    node *head;
    node *tail;
    int count;
public:
    doubly() {
        head = nullptr;
        tail = nullptr;
        count = 0;
    }

    ~doubly() {
        head = nullptr;
        tail = nullptr;
    }

    void append(int value){
        node *temp=new node(value);
        temp->data=value;
        if(head== nullptr){
            temp->nextPtr= nullptr;
            temp->previousPtr= nullptr;
            head=temp;
        }
        else{
            node *newTemp=head;
            while(newTemp->nextPtr!= nullptr){
                newTemp= newTemp->nextPtr;
            }
            newTemp->nextPtr=temp;
            temp->previousPtr= newTemp;
        }
    }
    void prepend(int value){
        node *temp=new node(value);
        temp->data=value;
        if(head== nullptr){
            temp->nextPtr= nullptr;
            temp->previousPtr= nullptr;
            head=temp;
        }
        else{
            head->previousPtr=temp;
            temp->nextPtr=head;
            head=temp;
        }
    }
    void addAtASpecificIndex(){
        int value;
        node *temp=new node(value);

        cout<<"enter value = ";
        cin>>value;
        int index;
        cout<<"enter index = ";
        cin>>index;
        if(index<=0){
            cout<<"ENTER POSITIVE VALUE."<<endl;
        }
        if(index==1){
            temp->data=value;
            if(head== nullptr){
                temp->nextPtr= nullptr;
                temp->previousPtr= nullptr;
                head=temp;
            }
            else{
                head->previousPtr=temp;
                temp->nextPtr=head;
                head=head->nextPtr;
                head=temp;
            }
        }
        else{
            int i=1;
            temp->data=value;
            node *newTemp=head;
            while(i<=index-1){
                newTemp=newTemp->nextPtr;
                i++;
            }
            if(newTemp->nextPtr!= nullptr){
                temp->nextPtr=newTemp->nextPtr;
                temp->previousPtr= newTemp;
                newTemp->nextPtr=temp;
                if(temp->nextPtr!= nullptr){
                    temp->nextPtr->previousPtr=temp;
                }
                else{
                    cout<<"NO ITEM PRESENT BEHIND."<<endl;
                }
            }
        }
    }
    void deleteFromLast(){
        if(head== nullptr){
            cout<<"LIST IS EMPTY."<<endl;
        }
        else{
            node *temp=head;
            while(temp->nextPtr!= nullptr){
                temp=temp->nextPtr;
            }
            temp->previousPtr->nextPtr= nullptr;
            free(temp);
        }
    }
    void deleteFromStart(){
        if(head== nullptr){
            cout<<"LIST IS EMPTY."<<endl;
        }
        else{
            node *temp=head;
            head=head->nextPtr;
            free(temp);
        }
    }
    void deleteAtASpecificIndex(){
        int index;
        cout<<"enter index = ";
        cin>>index;
        if(index<=0){
            cout<<"ENTER POSITIVE VALUE."<<endl;
        }
        if(index==1){
            node *temp=head;
            if(head== nullptr){
                cout<<"LIST IS EMPTY."<<endl;
            }
            else{
                head=head->nextPtr;
                free(temp);
            }
        }
        else{
            int i=1;
            node *newTemp=head;
            while(i<=index-1){
                newTemp=newTemp->nextPtr;
                i++;
            }
            if(newTemp->nextPtr!= nullptr){
                node *toDelete=newTemp->nextPtr;
                newTemp->nextPtr=newTemp->nextPtr->nextPtr;
                if(newTemp->nextPtr->nextPtr!= nullptr){
                    newTemp->nextPtr->nextPtr->previousPtr= newTemp->nextPtr;
                }
                delete toDelete;
            }
        }
    }
    void display() {
        node *temp = head;
        while (temp != nullptr) {
            cout << "" << temp->data << "-> ";
            temp = temp->nextPtr;
        }
        cout << "NULL" << endl;
    }

};
