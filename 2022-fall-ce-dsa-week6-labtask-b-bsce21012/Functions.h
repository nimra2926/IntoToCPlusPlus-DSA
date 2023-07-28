//
// Created by Lenovo on 10/6/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK6_LABTASK_B_BSCE21012_FUNCTIONS_H
#define INC_2022_FALL_CE_DSA_WEEK6_LABTASK_B_BSCE21012_FUNCTIONS_H


#include <iostream>
using namespace std;

class Node {                                          //made a class of node
public:
    int data;                                     //declared data in public
    Node *nextPtr;

    Node(int val) {
        data = val;                               //made a constructor to set values
        nextPtr = NULL;
    }

    void setNextPtr(Node *n) {
        nextPtr = n;                              //set the next ptr
    }

    Node *getNextPtr() {
        return nextPtr;                 //get the value of next ptr
    }
};

class linkList {                                    //making 1 other class of linklist
public:
    Node *tail;
    Node *head;                                  //made some pointers
    linkList() {
        head = nullptr;                                   //declared them to zero
        tail = nullptr;
    }

    void push(int value){
        Node *temp=new Node( value);              //make a new node
        temp->data=value;                        //store the value
        temp->nextPtr= head;                   //point the pointer to head
        head=temp;                          //making the head that new temp
    }

    void pop(){
        if(head== nullptr){                         //is head is null the array is empty
            cout<<"THE ARRAY IS EMPTY."<<endl;
        }
        else{
            Node *newTemp=head;                        //making a new node and giving it address of head
            head=head->nextPtr;                        //giving head the address the head is pointing to
            delete newTemp;                            // and deleting the temp
        }
    }

    void showFront(){
        Node *temp = head;
        if(temp != nullptr){
            cout<<"THE VALUE AT FRONT IS = "<<temp->data<<endl;
        }
        else{
            cout<<"THE STACK IS EMPTY."<<endl;
        }
    }
    bool empty(){
        if(head== nullptr){
            cout<<"ARRAY IS EMPTY."<<endl;               //checking is the head is null
            return true;
        }
        else{
            return false;
        }
    }
    void display() {
        Node *temp = head;                             //declaring
        while (temp != nullptr) {
            cout << temp->data << "\t";                  //displaying the data
            temp = temp->nextPtr;                          //storing the next address
            cout << " ";                      //displaying space
        }
    }
};
class stack{
public:
    linkList l;

    void popElements(){
        l.pop();
        cout<<"THE VALUE AT THE LAST OF STACK IS DELETED AND THEN THE QUEUE IS DISPLAYED."<<endl;
        l.display();
    }
    void pushElement(){
        int value;
        cout<<"ENTER VALUE TO ENTER IN THE STACK = ";
        cin>>value;
        l.push(value);
    }
    void showFrontElement(){
        l.showFront();
    }
    void displayElement(){
        l.display();
    }
};


#endif //INC_2022_FALL_CE_DSA_WEEK6_LABTASK_B_BSCE21012_FUNCTIONS_H
