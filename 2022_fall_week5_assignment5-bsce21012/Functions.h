//
// Created by Lenovo on 10/2/2022.
//

#ifndef MAIN_CPP_FUNCTIONS_H
#define MAIN_CPP_FUNCTIONS_H

#endif //MAIN_CPP_FUNCTIONS_H
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
    void append(int value){
        Node *temp = new Node(value);              //declaring
        temp->data = value;
        temp->nextPtr = nullptr;                     //initializing the next ptr in the next of the new initialized node
        if (head == nullptr) {
            head = temp;                           //if the head is null then store the temp in head
        } else {
            Node *temp1 = head;                              //else make a new node
            while (temp1->nextPtr != nullptr)                   //iterate it till the node is not null
                temp1 = temp1->nextPtr;                           //store the temp to next ptr address
            temp1->nextPtr = temp;                       //store pointer to the last one
        }


    }
    void prepend(int value){
        Node *temp=new Node( value);              //make a new node
        temp->data=value;                        //store the value
        temp->nextPtr= head;                   //point the pointer to head
        head=temp;                          //making the head that new temp
    }
    void insertAtIndex(int index,int value){
        Node *temp=new Node( value);                            //making a new node
        temp->data=value;                   //storing value
        temp->nextPtr= nullptr;                       //pointing to null
        if(index<=0){
            cout<<"INDEX MUST BE POSITIVE."<<endl;                      //checking that index is not zero or negative
        }
        if(index==1){
            temp->nextPtr=head;                      //is index is 1 then store the head in next ptr and make the temp that head
            temp=head;
            return;
        }
        else{
            Node *newTemp=head;                    //making a new node
            int i=1;
            while(i<index-1){                        //iterating to the place before the index
                newTemp=newTemp->nextPtr;
                i++;
            }
            if(newTemp!= nullptr){                       //after that checking that node is not null
                temp->nextPtr=newTemp->nextPtr;          //storing the new temp to the previous temp
                newTemp->nextPtr=temp;                    //making the new temp that previous temp
            }
            else{
                cout<<"THE PREVIOUS NODE IS NOT NULL."<<endl;
            }
        }
    }
    void deleteAtEnd(){
        if(head== nullptr){
            cout<<"ARRAY IS EMPTY."<<endl;               //checking is the head is null
        }
        if (head != nullptr) {                    //if head is not nul
            if (head->nextPtr == nullptr) {           //if the next to head is null
                head = nullptr;                              //make the head null
            } else {
                Node *temp = head;                       //making a new node
                while (temp->nextPtr->nextPtr != NULL)             //if the next to next address is not null
                    temp = temp->nextPtr;                        //then store the next address to temp
                Node *temp1 = temp->nextPtr;                  //store the temp address to new node
                temp->nextPtr = nullptr;                       //make it null and delete the new node
                delete temp1;
            }
        }
    }
    void deleteAtStart(){
        if(head== nullptr){                         //is head is null the array is empty
            cout<<"THE ARRAY IS EMPTY."<<endl;
        }
        else{
            Node *newTemp=head;                        //making a new node and giving it address of head
            head=head->nextPtr;                        //giving head the address the head is pointing to
            delete newTemp;                            // and deleting the temp
        }
    }
    void deleteAtIndex(int index){
        if(index<=0){
            cout<<"THE INDEX MUST BE POSITIVE."<<endl;             //checking the index
        }
        if(index==1 && head!= nullptr){                          //if head is 1 or not null then make a new node
            Node *temp=head;
            temp=temp->nextPtr;                         //and store the address of next ptr to that new node
            delete temp;           //delete new node
        }
        else{
            Node *temp1=head;                             //make a new node give it the address of head
            int i = 1;
            while (i < index - 1) {                       //iterate till 1 less position of the index
                if (temp1 != nullptr) {
                    temp1 = temp1->nextPtr;                //and storing the addresses
                }
                i++;
            }
            Node *toDelete=temp1->nextPtr;               //making new node and storing the address of the ptr of next ptr
            temp1->nextPtr=temp1->nextPtr->nextPtr;    //storing the value of next to next value to delete the middle one
            delete toDelete;                //deleting the ptr
        }
    }
    void display() {
        Node *temp = head;                             //declaring
        while (temp != NULL) {
            cout << temp->data << "\t";                  //displaying the data
            temp = temp->nextPtr;                          //storing the next address
            cout << " ";                      //displaying space
        }
    }
};