//
// Created by Lenovo on 11/29/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK14_LABTASK_A_BSCE21012_FUNCTION_H
#define INC_2022_FALL_CE_DSA_WEEK14_LABTASK_A_BSCE21012_FUNCTION_H

#endif //INC_2022_FALL_CE_DSA_WEEK14_LABTASK_A_BSCE21012_FUNCTION_H

#include <iostream>

using namespace std;

class node {
public:
    int data;
    node *nextPtr;                                                                      //declaring

    node(int d) {
        data = d;
        nextPtr = nullptr;                                                      //initializing
    }

    ~node() {
        nextPtr = nullptr;                                      //making a dectructor
    }
};

class linkList {
private:
    node *head;
    node *tail;                                             //declaring
    int count;
public:
    linkList() {
        head = nullptr;
        tail = nullptr;
        count = 0;
    }

    ~linkList() {
        head = nullptr;                                             //making a destructor
        tail = nullptr;
    }

    void append(int value) {
        node *temp = new node(value);                                   //making a pointer
        temp->data = value;
        if (head == nullptr) {
            head = temp;                   //checking if head is null then store temp in head and make the next of temp as head
            temp->nextPtr = head;
        } else {
            node *newTemp = head;                           //made a pointer
            while (newTemp->nextPtr != head) {                  //checking till the pointer next is not head means it is not again at the head
                newTemp = newTemp->nextPtr;         //storing addresses
            }
            newTemp->nextPtr = temp;                //making the next of pointer as the pointer having value to be stored
            temp->nextPtr = head;                           //and make the next of next pointer as head
        }
        count++;                    //incrementing
    }

    void prepend(int value) {
        node *temp = new node(value);                       //making a new pointer
        temp->data = value;                                                     //storing data
        if (head == nullptr) {
            head = temp;                                    //if head is null then store the temp in head
            temp->nextPtr = head;                           //and make the next of temp as head
        } else {
            node *newTemp = head;                                               //making a new pointer
            while (newTemp->nextPtr != head) {                  //iterating while the next of head is not head
                newTemp = newTemp->nextPtr;                     //storing address
            }
            newTemp->nextPtr = temp;                        //storing the pointer in the next of new temp
            temp->nextPtr = head;                               //making the next of temp as head
            head = temp;                            //storing temp in head;
        }
        count++; //incrementing
    }

    void insertAtSpecificIndex(int value, int index) {
        cout << "ENTER INDEX = ";
        cin >> index;                                       //taking index and value
        cout << "ENTER THE VALUE TO STORE AT THE SPECIFIC INDEX = ";
        cin >> value;
        node *newNode;
        if(index<0) {
            cout << "ENTER POSITIVE = ";
            return;
        }
        newNode = new node(value);
        newNode->data = value;                      //making a pointer and storing value
        if (head == nullptr) {
            head = newNode;                                    //if head is null then store the new node in head
            newNode->nextPtr = head;
        } else {
            node *temp = head;                      //making a node as head
            int i = 0;
            while (i < index - 1) {
                temp = temp->nextPtr;                                       //iterating till the index -1 and storing the address
                i++;
            }
            newNode->nextPtr = temp->nextPtr;               //storing next in the new node
            temp->nextPtr = newNode;                    //storing new node in next of temp
        }
        count++; //incrementing
    }

    void deleteNodeAtLastIndex() {
        if (head == nullptr) {
            cout << "NO ITEM IS PRESENT IN THE LIST." << endl;          //if head is null means the list is empty
        } else if (head->nextPtr == head) {
            head = nullptr;              //else check if the next of head is null or not if null then make head as null and free head
            free(head);
        } else {
            node *temp = head;                          //making a new pou=inter and initializing head
            node *newNode;
            while (temp->nextPtr != head) {                 //iterating till head
                newNode = temp;                             //storing temp in new temp
                temp = temp->nextPtr;                                   //storing the address of next
            }
            newNode->nextPtr = temp->nextPtr;               //storing the next of temp in new node
            free(temp);                 //and freeing temp
        }
        count--;//decrementing
    }

    void deleteNodeAtFirstIndex() {
        if (head == nullptr) {
            cout << "NO ITEM IS PRESENT IN THE LIST." << endl; //if head is null means the list is empty
        } else if (head->nextPtr == head) {
            head = nullptr; //else check if the next of head is null or not if null then make head as null and free head
            free(head);
        } else {
            node *temp = head;      //making a new pou=inter and initializing head
            while (temp->nextPtr != head) {   //iterating till head
                temp = temp->nextPtr;           //storing the address of next
            }
            temp->nextPtr = head->nextPtr;      //storing the next of head in new node
            free(head);                 //freeing head
            head = temp->nextPtr;                   //storing the next of temp in head
        }
        count--; //decrementing
    }

    void deleteNode(int index) {
        cout << "ENTER INDEX = ";
        cin >> index;
        if (head == nullptr) {
            cout << "NO ITEM PRESENT IN THE LIST." << endl;  //if head is null means the list is empty
            return;
        }
        if(index<=0){
            cout<<"ENTER POSITIVE = ";
            return;
        }
        node *temp = head;
        int i = 0;
        if (temp != nullptr) {                          //checking if the temp is not null
            while (i < index - 1) {             //iterating till index-1
                temp = temp->nextPtr;               //storing the address
                i++;            //iterating
            }
            if (temp == nullptr || temp->nextPtr == nullptr) {         //if temp is null or next of temp is null then return
                return;
            }
            node *newNode = temp->nextPtr->nextPtr;            //otherwise,storing the next of next in new node
            free(temp->nextPtr);                //freeing the next of temp
            temp->nextPtr = newNode;                //making the temp of temp as new node
        }
        count--;                //decrementing
    }

    void display() {
        node *temp;
        if (head == nullptr) {              //if head is null means the list is empty
            cout << "List is empty";
        } else {
            temp = head;
            do {
                cout << temp->data << "-> ";                            //else displaying
                temp = temp->nextPtr;
            } while (temp != head);                     //till the temp becomes head
            cout << "NULL." << endl;
        }
    }

};