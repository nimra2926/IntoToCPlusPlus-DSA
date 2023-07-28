//
// Created by Lenovo on 11/17/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK12_LABTASK_B_BSCE21012_FUNCTIONS_H
#define INC_2022_FALL_CE_DSA_WEEK12_LABTASK_B_BSCE21012_FUNCTIONS_H

#endif //INC_2022_FALL_CE_DSA_WEEK12_LABTASK_B_BSCE21012_FUNCTIONS_H

#include<iostream>

using namespace std;
class Node {                                          //made a class of node
public:
    int data;                                     //declared data in public
    Node *nextPtr;

    Node(int val) {
        data = val;                               //made a constructor to set values
        nextPtr = nullptr;
    }

    void setNextPtr(Node *n) {
        nextPtr = n;                              //set the next ptr
    }

    Node *getNextPtr() {
        return nextPtr;                 //get the value of next ptr
    }

    ~Node() {
        nextPtr = nullptr;
    }
};

class linkList {                                    //making 1 other class of linklist
public:
    Node *tail;
    Node *head;                                  //made some pointers
    int count;

    linkList() {
        count = 0;
        head = nullptr;                                   //declared them to zero
        tail = nullptr;
    }

    ~linkList() {
        head = nullptr;
        tail = nullptr;
    }

    Node *getHead() const {
        return head;
    }

    void append(int value) {
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
        count++;
    }


    bool checking(int edge) const {
        bool flag = false;                         //declaring
        if (!head) {
            cout << "EMPTY LINK LIST." << endl;
        } else {
            Node *temp = head;                                    // creating and initializing
            while (temp != nullptr)                                    // loop till the null
            {
                if (temp->data == edge) {
                    flag = true;
                }
                temp = temp->nextPtr;                                 // pointing to the next vertex
            }
        }
        return flag;           //returning
    }

    int deleteAtIndex(int index) {
        int j;
        if (index <= 0) {
            cout << "THE INDEX MUST BE POSITIVE." << endl;             //checking if it is less than zero
        }
        if (index == 1 && head != nullptr) {                          //if head is 1 or not null then make a new node
            Node *temp = head;
            head = head->nextPtr;                         //and store the address of next ptr to that new node
            delete temp;           //delete new node
        } else {
            Node *temp1 = head;                             //make a new node give it the address of head
            int i = 1;
            while (i < index - 1) {                       //iterate till 1 less position of the index
                temp1 = temp1->nextPtr;                //and storing the addresses
                i++;
            }
            Node *toDelete = temp1->nextPtr;               //making new node and storing the address of the ptr of next ptr
            temp1->nextPtr = temp1->nextPtr->nextPtr;    //storing the value of next to next value to delete the middle one
            delete toDelete;                 //deleting the ptr
            j++;
        }
        count--;
        return j;                         //returning
    }

    void display() const {
        Node *temp = head;                             //declaring
        while (temp != nullptr) {
            cout << temp->data << "\t";                  //displaying the data
            temp = temp->nextPtr;                          //storing the next address
            cout << " ";                      //displaying space
        }
        cout << endl;
    }
};

class graph {
public:
    int size;
    linkList *array;

    explicit graph(int s) {
        size = s;                               //initializing
        array = new linkList[size];

    }

    void input() const {
        int value;
        cout << "ENTER VALUES : \n";
        for (int i = 0; i < size; i++) {
            cout << "ENTER THE VALUE AT " << i + 1 << " = ";
            cin >> value;                                     //taking input from the user
            array[i].append(value);                          //and appending it in array by passing that value in append function
        }
    }

    void displayGraph() const {
        cout << "\nTHE GRAPH IS. \n";
        for (int i = 0; i < size; i++) {
            array[i].display();                       //displaying
        }
    }

    void addElement(int vertex, int edge) const {
        int temp = 0;           //initializing temp and temp1 at zero
        int temp1 = 0;
        for (int i = 0; i < size; i++) {
            if (array[i].checking(vertex) == 1) { //if the flag from the upper function is 1 then increment temp
                temp++;
            }
        }
        for (int i = 0; i < size; i++) {
            if (array[i].checking(edge) == 1) {  //if the flag from the upper function is 1 then increment temp1
                temp1++;
            }
        }
        if (temp > 0 && temp1 > 0) {  //if tem and temp1 are 1 that means elements are present then we call the append function
            for (int i = 0; i < size; i++) {
                if (array[i].checking(vertex) == 1) {            //double-checking
                    array[i].append(edge);  //storing at last
                }
            }
        }
    }
    void update (int node, int edge) const{
        int temp=0,v;
        if (edge>0){                                                         //checking the edge is positive
            for (int i=0; i<size; i++){
                if(array[i].checking(node)==1){   //if the flag from the upper function is 1 then increment temp
                    temp++;
                }
            }
            if (temp>0){                                        // if the element is present
                for (int i=0; i<size; i++){
                    if(array[i].checking(node)==1){
                        temp = array[i].deleteAtIndex(edge);              //getting the node to delete the node
                        if(temp>0){       //updating or not
                            cout << "ENTER THE VALUE YOU WANNA UPDATE WITH : ";
                            cin>> v;
                            array[i].append(v);
                        }
                    }
                }
            }
            else {
                cout << "VALUE DOSE NOT EXIST. \n";
            }
        }
        else {
            cout << "EDGE IS NEGATIVE.\n";
        }
    }


    void deleteElement(int vertex, int edge) const {
        int temp = 0;
        if (edge > 0) {                                         // if edge is a positive number
            for(int i=0;i<size;i++){
                if (array[i].checking(vertex) == 1) {  //if the flag from the upper function is 1 then increment temp
                    temp++;
                }
            }
            if (temp > 0) { // if the element is present
                for(int i=0;i<size;i++){
                    if (array[i].checking(vertex) == 1) {
                        array[i].deleteAtIndex(edge);            //getting the node to delete the node
                    }
                }
            } else {
                cout << "DON'T EXIST.\n";
            }
        } else {
            cout << "EDGE IS NEGATIVE.\n";
        }
    }

    void check1(int value) const {
        int temp = 0;
        for (int i = 0; i < size; i++) {
            if (array[i].checking(value) == 1) {                  //if the flag from the upper function is 1 then increment temp
                cout << "ELEMENT IS PRESENT.\n";
                temp++;
            }
        }
        if (temp == 0) {
            cout << "ELEMENT IS NOT PRESENT.\n";
        }
    }


    ~graph() {
        delete[]array;         //deleting array
    }


};

