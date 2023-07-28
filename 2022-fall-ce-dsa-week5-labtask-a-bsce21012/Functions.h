//
// Created by Lenovo on 9/27/2022.
//

#ifndef MAIN_CPP_FUNCTIONS_H
#define MAIN_CPP_FUNCTIONS_H

#include <iostream>

using namespace std;

template<typename T>
class Node {                                          //made a class of node
public:
    T data;                                     //declared data in public
    Node *nextPtr;
    Node(T val) {
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
template <class T >
class linkList {                                    //making 1 other class of linklist
public:
    Node<T> *tail;
    Node<T> *head;                                  //made some pointers
    linkList() {
        head = nullptr;                                   //declared them to zero
        tail = nullptr;
    }
    void insertElementInTheStart(int val) {
        auto *temp = new Node<T>(val);                           //given the memory
        temp->data=val;
        temp->nextPtr=nullptr;
        if (head == NULL) {
            head = temp;                                //checking and then putting the value
            tail = temp;
        } else {
            tail->nextPtr = temp;
            tail = temp;
        }
    }
    void display()
    {
        Node<T> *temp=head;                             //declaring
        while(temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->nextPtr;                          //storing
        }
    }
    void insertElementInTheEnd(int newElement) {
        Node<T>* temp = new Node<T>(newElement);              //declaring
        temp->data = newElement;
        temp->nextPtr = nullptr;
        if(head == nullptr) {
            head = temp;
        } else {
            Node<T>* temp1 = head;
            while(temp1->nextPtr!= nullptr)
                temp1 = temp1->nextPtr;
            temp1->nextPtr = temp;
        }
    }
};




#endif //MAIN_CPP_FUNCTIONS_H
