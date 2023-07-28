//
// Created by Lenovo on 9/28/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK5_LABTASK_B_BSCE21012_FUNCTIONS_H
#define INC_2022_FALL_CE_DSA_WEEK5_LABTASK_B_BSCE21012_FUNCTIONS_H


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

template<class T>
class linkList {                                    //making 1 other class of linklist
public:
    Node<T> *tail;
    Node<T> *head;                                  //made some pointers
    linkList() {
        head = nullptr;                                   //declared them to zero
        tail = nullptr;
    }

    void insertElementInTheStart(int newElement) {
        Node<T> *temp = new Node<T>(newElement);
        temp->data = newElement;
        temp->nextPtr = head;
        head = temp;
    }

    void display() {
        Node<T> *temp = head;                             //declaring
        while (temp != NULL) {
            cout << temp->data << "\t";
            temp = temp->nextPtr;                          //storing
            cout << " ";
        }
    }

    void insertElementInTheEnd(int newElement) {
        Node<T> *temp = new Node<T>(newElement);              //declaring
        temp->data = newElement;
        temp->nextPtr = nullptr;
        if (head == nullptr) {
            head = temp;
        } else {
            Node<T> *temp1 = head;
            while (temp1->nextPtr != nullptr)
                temp1 = temp1->nextPtr;
            temp1->nextPtr = temp;
        }
    }

    void InsertAtTheSpecificIndex(int value, int index) {
        auto temp = new Node<T>(value);
        temp->data = value;
        temp->nextPtr = nullptr;
        if (index < 1) {
            cout << "THE INDEX MUST BE POSITIVE." << endl;
        }
        if (index == 1) {
            temp->nextPtr = head;
            head = temp;
        } else {
            Node<T> *temp1 = head;
            int i = 1;
            while (i < index - 1) {
                if (temp1 != nullptr) {
                    temp1 = temp1->nextPtr;
                }
                i++;
            }
            if (temp1 != NULL) {
                temp->nextPtr = temp1->nextPtr;
                temp1->nextPtr = temp;
            } else {
                cout << "THE PREVIOUS NODE IS NULL." << endl;
                cout << "PLEASE ENTER THE INDEX IN RANGE OF THE LIST." << endl;
            }
        }
    }

    void DeleteNodeFromTheStart() {
        cout << "THE ADDRESS VALUE IS SHOWN AT THE DELETED INDEX." << endl;
        if (head != nullptr) {
            Node<T> *temp = head;
            head = head->nextPtr;
            delete temp;
            cout << head << "   ";
        }
    }

    void deleteNodeFromTheEndOfList() {
        if (head != nullptr) {
            if (head->nextPtr == nullptr) {
                head = nullptr;
            } else {
                Node<T> *temp = head;
                while (temp->nextPtr->nextPtr != NULL)
                    temp = temp->nextPtr;
                Node<T> *temp1 = temp->nextPtr;
                temp->nextPtr = nullptr;
                delete temp1;
            }
        }
    }

    void deleteAtSpecificIndex(int index) {
        if (index < 1) {
            cout << "\nINDEXES MUST BE POSITIVE";
        }
        if (index == 1 && head != nullptr) {
            Node<T> *temp1 = head;
            head = head->nextPtr;
            delete temp1;
        } else {
            Node<T> *temp = head;
            int i = 1;
            while (i < index - 1) {
                if (temp != nullptr) {
                    temp = temp->nextPtr;
                }
                i++;
            }
        }
        Node<T> *temp = head;
        if (temp->nextPtr != nullptr && temp != nullptr) {
                Node<T> *temp1 = temp->nextPtr;
                temp->nextPtr = temp->nextPtr->nextPtr;
                delete temp1;
            } else {
                cout << "THE NODE IS EMPTY.";
            }
        }
};


#endif //INC_2022_FALL_CE_DSA_WEEK5_LABTASK_B_BSCE21012_FUNCTIONS_H
