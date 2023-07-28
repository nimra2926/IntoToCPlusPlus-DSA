//
// Created by Lenovo on 12/5/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK9_LABTASK_B_BSCE21012_QUEUES_H
#define INC_2022_FALL_CE_DSA_WEEK9_LABTASK_B_BSCE21012_QUEUES_H

#endif //INC_2022_FALL_CE_DSA_WEEK9_LABTASK_B_BSCE21012_QUEUES_H
using namespace std;
template<typename T>

class Queue {
public:
    int queue_size;
    int array_size;
    int front;
    int back;
    T *array;

    Queue() { //default constructor
        array_size = 5;
        array = new T[array_size];
        queue_size = 0;
        front = 0;
        back = -1;
    }

    Queue(int s) {
        array_size = s;
        queue_size = 0;
        front = 0;
        back = -1;
        array = new T[array_size];
    }

    bool isFull() {
        if (queue_size >= array_size)
            return true;
        else
            return false;

    }

    bool isEmpty() {
        if (queue_size == 0)
            return true;
        else
            return false;
    }

    T showFront() {
        return array[front];
    }

    void reSize() {
        T *arr = new T[2 * array_size];
        int i;
        int j = front % array_size;
        for (i = 0; i < queue_size; i++) {
            arr[i] = array[j];
            j++;
            j = j % array_size;
        }
        back = i - 1;
        front = 0;
        delete array;
        array = arr;
        array_size = 2 * array_size;
    }

    void enqueue(T value) {
        if (isFull())
            reSize();
        back++;
        int index = back % array_size;
        array[index] = value;
        queue_size++;
    }

    T dequeue() {
        if (isFull())
            reSize();
        queue_size--;
        return array[front++];
    }


    void display() {
        int j = front % array_size;
        for (int i = 0; i < queue_size; i++) {
            cout << array[j] << "->";
            j++;
            j = j % array_size;
        }
        cout << "NULL." << endl;
        cout << "\nSIZE OF ARRAY = " << array_size << endl;
        cout << "\nSIZE OF QUEUE = " << queue_size << endl;
    }

    ~Queue() {
        delete[] array;
    }
};
