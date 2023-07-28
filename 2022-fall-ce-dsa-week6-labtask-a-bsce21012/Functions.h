//
// Created by Lenovo on 10/3/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK6_LABTASK_A_BSCE21012_FUNCTIONS_H
#define INC_2022_FALL_CE_DSA_WEEK6_LABTASK_A_BSCE21012_FUNCTIONS_H


#include <iostream>
using namespace std;
template<typename T>

class queue {
public:
    T size;
    T count;
    T iFront=0;
    T iBack=-1;                              //declaring public members
    T *array;

    queue(T s) {
        size = s;                        //making a constructor to set the values
        count = 0;
    }
    bool isEmpty() {
        if (iFront == 0 && iBack == -1 && count== 0 || count==size ) { //making a function to check that is the queue is empty or not
            cout << "ARRAY IS EMPTY." << endl;
            return true;
        }
        else{
            cout<<"ARRAY IS NOT EMPTY."<<endl;
            return false;
        }
    }

    void showFront() {
        if(isEmpty()) {
            cout << " ";                                                              //checking if the queue is empty
        }else {

            cout << "THE ELEMENT IS = " << array[iFront] << " ";            //showing the index of iFront
            iFront++; //iterating the iFront
        }
    }

    bool isFull() {
        if (iFront == 0 && iBack == size || count==size) {             //checking if the queue is full or not
            cout << "ARRAY IS NOT EMPTY." << endl;
            return true;
        }
        else{
            cout<<"THE ARRAY IS NOT FULL."<<endl;
            return false;
        }
    }
    void enqueue(T value) {
        if (isFull()) {
            cout<<" ";                                  //if the queue is full
        }
        else{
            iBack++;                                        //iterating
            iBack = (iBack+1) % size;                        //taking mode
            array[iBack] = value;                         //putting the value
            cout<<"THE ADDED VALUE = "<<array[iBack]<<endl;     //displaying
            size++;                                            //incrementing size
            count++;                                            //incrementing count
        }
    }

    void dequeue() {
          if(isEmpty()){
              cout<<" ";                                     //checking if the queue is empty or not
          }
          else{
              if(count==size){                                                 //if the count is equal to size
                  cout<<"THE ARRAY'S COUNT IS AT THE END."<<endl; //display this message
                  cout<<"SO THE VALUE IS ZERO."<<endl;
              }
              cout<<"VALUE REMOVED = "<<array[iFront]<<endl;             //displaying
              iFront++;                                                  //iterating front pointer
              iFront = (iFront+1) % size;                            //taking mode
              size--;                                                  //decrementing size
              count--;                                 //decrementing count
          }

      }


};


#endif //INC_2022_FALL_CE_DSA_WEEK6_LABTASK_A_BSCE21012_FUNCTIONS_H
