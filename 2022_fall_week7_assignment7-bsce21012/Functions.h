//
// Created by Lenovo on 10/12/2022.
//

#ifndef INC_2022_FALL_WEEK7_ASSIGNMENT7_BSCE21012_FUNCTIONS_H
#define INC_2022_FALL_WEEK7_ASSIGNMENT7_BSCE21012_FUNCTIONS_H


#include <iostream>
using namespace std;

class Node {                                          //made a class of node
public:
    int data;                                     //declared data in public
    Node *nextPtr;

    Node(int val)  {
        data = val;                               //made a constructor to set values
        nextPtr = nullptr;
    }

    void setNextPtr(Node *n) {
        nextPtr = n;                              //set the next ptr
    }

    Node *getNextPtr() const {
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
    void takingInput(int value){
        cout<<"IF YOU WANT TO STOP ADDING VALUES THEN ENTER -1."<<endl;
        do{
            cout<<"ENTER VALUE = ";
            cin>>value;
            if(value==-1){
                cout<<"YOU CHOOSE TO BREAK."<<endl;
                break;
            }
            else{
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
        }while(value!=-1);

    }

    void bubbleSort() const{
        Node *i;                                       //declaring the nodes
        Node *j;
        int temp;                                     //declaring temp for the swapping
        for(i=head;i!= nullptr;i=i->nextPtr){            //a loop for iterations until the i is not null and the i is head
            for(j=i->nextPtr;j!= nullptr;j=j->nextPtr){  //loop starting from previous index of i and moving till it is null
                if(i->data>j->data){                 //comparing the values of i and j
                    temp=i->data;                   // if i is greater(>), then swapping otherwise move the loop
                    i->data=j->data;
                    j->data=temp;
                }
            }
        }
    }
    void selectionSort() const{
        Node *temp=head;                                          //initializing node with head
        int swap;                                                //declaring variable for swapping
        Node *min;                                              //declaring nodes
        Node *temp1;
        while(temp!= nullptr){                             //checking if the temp is not null
            min=temp;                                     //then coming in and initializing min with the temp that is pointing towards head
            temp1=temp->nextPtr;                     //and temp1 with the next index of temp
            while(temp1!= nullptr){                //checking if the next index of temp that is temp1 is not null
                if(min->data>temp1->data){         //comparing the temp node and the node after it
                    min=temp1;                     //if min->temp which is greater than reinitialize it with the temp1
                }
                temp1=temp1->nextPtr;        //temp1 pointing to next index
            }
            swap=min->data;                      //swapping min and temp
            min->data=temp->data;
            temp->data=swap;
            temp=temp->nextPtr;                 //pointing to the next index
        }
    }
    void display() const {
        Node *temp = head;                             //declaring
        while (temp != nullptr) {
            cout << temp->data << "\t";                  //displaying the data
            temp = temp->nextPtr;                          //storing the next address
            cout << " ";                      //displaying space
        }
    }


};

#endif //INC_2022_FALL_WEEK7_ASSIGNMENT7_BSCE21012_FUNCTIONS_H
