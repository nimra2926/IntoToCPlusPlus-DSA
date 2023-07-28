//
// Created by Lenovo on 10/9/2022.
//

#ifndef INC_2022_FALL_WEEK6_ASSIGNMENT6_BSCE21012_FUNCTIONS_H
#define INC_2022_FALL_WEEK6_ASSIGNMENT6_BSCE21012_FUNCTIONS_H


#include <iostream>
using namespace std;

class stack {
public:
    int top;                                   //maintaining top as capacity of the stack
    int size;
    int *array;                                //an array pointer

    stack(int s) {
        top = 0;
        size = s;
        array = new int[size];                    //allocating the array of s size taken by user
    }

    bool empty() {
        if (top == 0) {
            return true;         //function to check that if the top is zero then the stack is empty, and return true else false
        } else {
            return false;
        }
    }

    bool full() {
        if (top == size) {
            return true;     //checking that if the top is equal to the size that means there is no room left to add more elements
        } else {
            return false;
        }
    }

    void showFront() {
        if (empty()) {
            throw underflow_error("STACK IS EMPTY.");   //checking if the array is empty otherwise throw an underflow error
        } else {
            cout << "THE FRONT VALUE OF STACK = ";
            cout << array[top - 1];  //for showing the top element we have to print the top-1 element because the top is incremented everytime after adding 1 element in the stack which means it will be 1 place ahead to the place where the value is present
        }
    }

    void push(int value) {
        if (full()) {
            throw overflow_error("STACK IS FULL.");  //checking if the array is full otherwise throw an overflow error
        }
        array[top] = value;       //putting the value to the index where top is present
        ++top; //then incrementing the top to move it forward
    }

    void pop() {
        if (empty()) {
            throw underflow_error("STACK IS EMPTY.");      //checking if the array is empty otherwise throw an underflow error
        } else {
            cout<<"THE POPPED ELEMENT = "<<array[top-1];    //the popped element is top-1 because top is incremented everytime in the push function
            --top;   //decrementing top to delete that element
        }
    }

    void display() {
        if (empty()) {
            cout << " ";
        }if(top!=0){
            cout << "\nSTACK ELEMENTS ARE :";
            for (int i = 0; i < top; i++)
                cout << array[i] << " ";          //displaying the stack
            cout << endl;
        }

    }
    ~stack() {
        delete[]array;                    //destructor is called
    }
};

#endif //INC_2022_FALL_WEEK6_ASSIGNMENT6_BSCE21012_FUNCTIONS_H
