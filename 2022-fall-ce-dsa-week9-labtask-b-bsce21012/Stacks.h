//
// Created by Lenovo on 12/5/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK9_LABTASK_B_BSCE21012_STACKS_H
#define INC_2022_FALL_CE_DSA_WEEK9_LABTASK_B_BSCE21012_STACKS_H

#endif //INC_2022_FALL_CE_DSA_WEEK9_LABTASK_B_BSCE21012_STACKS_H
#include <iostream>
using namespace std;
template<typename T>
class Stacks {
public:
    int stack_size;
    int array_size;
    int top;
    T *array;

    Stacks() {
        stack_size = 0;
        array_size = 5;
        top = -1;
        array = new T[array_size];
    }

    explicit Stacks(int s) {
        array_size = s;
        stack_size = 0;
        top = -1;
        array = new T[array_size];
    }

    bool isFull() {
        if (stack_size >= array_size)
            return true;
        else return false;
    }

    bool isEmpty() {
        if (stack_size == 0)
            return true;
        else return false;
    }

    void reSize() {
        T *arr = new T[2 * array_size];
        for (int i = 0; i < stack_size; i++) {
            arr[i] = array[i];
        }
        delete array;
        array = arr;
        array_size = 2 * array_size;
    }

    void push(T value) {
        if (isFull()) {
            reSize();
        }
        top++;
        array[top] = value;
        stack_size++;
    }

    T pop() {
        if (isFull())
            reSize();
        stack_size--;
        return array[top--];
    }

    T showFront() {
        return array[top];
    }

    void display() {
        for (int i = 0; i < stack_size; i++){
            cout<<array[i]<<"->";
        }
        cout<<"NULL."<<endl;
        cout<<"\nARRAY SIZE = "<<array_size<<endl;
        cout<<"\nSTACK SIZE = "<<stack_size<<endl;
    }
};