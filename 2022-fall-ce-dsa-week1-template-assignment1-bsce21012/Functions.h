//
// Created by Lenovo on 9/4/2022.
//

#ifndef MAIN_CPP_FUNCTIONS_H
#define MAIN_CPP_FUNCTIONS_H

#include <iostream>

using namespace std;

class ArrayList {                                                             //making class
private:
    int sizeOfArray;                                                                //declaring
    int Data;                                                                //declaring
    int *array;
    int NoOfElement;
public:
    ArrayList(int s, int d) {
        sizeOfArray = s;                                  //copying
        Data = d;
        NoOfElement = 0; //copying
        array = new int[sizeOfArray];
        for (int i = 0; i < sizeOfArray; i++) {
            array[i] = 0;                                                   //setting values to zero
        }
    }

    void add() {
        for (int i = NoOfElement; i < sizeOfArray; i++) {
            cout << "ENTER DATA = ";
            cin >> array[i];                                                            //taking input
            NoOfElement++;
        }
        cout<<"\nARRAY BEFORE ANY OPTION IS GIVEN AS = ";
    }

    void append() {
        cout << "\nENTER ELEMENT TO INSERT = " ;
        cin >> Data;
        sizeOfArray = sizeOfArray + 1;                                                   //increasing size
        int *array2 = new int[sizeOfArray];                                                 //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            if (i == sizeOfArray - 1) {                //  if iterator is 1 index less than the size then put the respective data at it
                array2[i] = Data;
            }//copying
            else {
                array2[i] = array[i];                     //copy the rest of array
            }
        }
        delete[]array;                                                                  //deleting
        array = array2;                                                                 //copying address
        array2 = NULL;                                                                    //null it
        cout << "\nTHE APPENDED ARRAY IS GIVEN AS = ";
    }

    void prepend() {
        sizeOfArray = sizeOfArray + 1;
        int *array2 = new int[sizeOfArray];                                                 //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            array2[i] = array[i];                                                       //copying
        }
        delete[]array;                                                                  //deleting
        array = array2;                                                                 //copying address
        array2 = NULL;                                                                    //null it
        cout << "\nENTER ELEMENT TO INSERT = " ;
        cin >> Data;
        for (int i = sizeOfArray - 1; i > 0; i--) {                     //applying loop to copy the items to next index
            array[i] = array[i - 1];
        }
        array[0] = Data;                                      //putting the item to zero index
        cout << "\nTHE PREPENDED ARRAY IS GIVEN AS = ";
    }

    void InsertAtIndex(int index) {
        sizeOfArray = sizeOfArray + 1;
        int *array2 = new int[sizeOfArray];                                                //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            array2[i] = array[i];                                                        //copying
        }
        delete[]array;                                                                 //deleting
        array = array2;                                                               //copying address
        array2 = NULL;                                                               //null it
        cout << "\nENTER THE INDEX = " ;
        cin >> index;
        cout << "\nENTER ELEMENT TO INSERT = " ;
        cin >> Data;
        if (index <= sizeOfArray && index >= 0) {                           //checking if the index is less than size and is not negative
            for (int i = sizeOfArray - 1; i >= index - 1; i--) {         //applying the loop from size -1 to index -1 and decrementing
                array[i + 1] = array[i];                                //then copying the term/element to next index
            }
            array[index] = Data;                 //putting the index to the respective index
        } else {
            cout << "\nYOU HAVE ENTERED INVALID INDEX." << endl;
            exit(3);
        }
        cout << "\nTHE ARRAY AFTER INSERTING THE ELEMENT AT "<<index<<" INDEX = ";
    }

    void deleteAnElementFromLast() {
        sizeOfArray = NoOfElement - 1;
        int *array2 = new int[sizeOfArray];                                                 //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            array2[i] = array[i];                                                       //copying
        }
        delete[]array;                                                                  //deleting
        array = array2;                                                                 //copying address
        array2 = NULL;                                                                    //null it
        cout << "\nARRAY AFTER DELETING ELEMENT FROM THE END = ";
    }

    void deleteAnElementFromStart() {
        sizeOfArray = NoOfElement - 1;
        int *array2 = new int[sizeOfArray];                                                 //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            array2[i] = array[i+1];                                                       //copying
        }
        delete[]array;                                                                  //deleting
        array = array2;                                                                 //copying
        array2 = NULL;                                                                    //null it
        cout << "\nARRAY AFTER DELETING AN ELEMENT FROM START = ";
    }

    void deleteAnElementFromSpecificIndex(int index) {
        int *array2 = new int[sizeOfArray];                                                 //making a new dynamic array
        for (int i = 0; i < sizeOfArray; i++) {
            array2[i] = array[i];                                                       //copying
        }
        delete[]array;                                                                  //deleting
        array = array2;                                                                 //copying
        array2 = NULL;                                                                    //null it
        cout << "\nENTER INDEX = ";
        cin >> index;
        sizeOfArray = sizeOfArray - 1;                               //decreasing the size
        if (index <= sizeOfArray && index >= 0) {                           //checking if the entered index is
            for (int i = index; i < sizeOfArray; i++) {                      //applying loop
                array[i] = array[i + 1];                                     //copying the next index to previous one
            }
            cout << "\nARRAY AFTER DELETING AN ELEMENT FROM THE "<<index<<" INDEX IS GIVEN AS = ";
        }else{
            cout<<"\nYOU HAVE ENTERED INVALID INDEX."<<endl;
            cout<<"YET THE LAST INDEX IS BEING DELETED."<<endl;
        }
    }

    void display() {
        for (int i = 0; i < sizeOfArray; i++) {
            cout << array[i] << " ";                                                 //displaying array elements
        }
        cout << endl;
    }

    void menu() {
        int opt;                                     //declaring
        cout << "CHOOSE OPTIONS." << endl;
        cout << "1.APPEND." << endl;
        cout << "2.PREPEND." << endl;
        cout << "3.ADD AT A SPECIFIC INDEX." << endl;
        cout << "4.DELETE TO THE LAST OF ARRAY." << endl;                          //displaying the options to choose
        cout << "5.DELETE AT THE FIRST INDEX OF ARRAY." << endl;
        cout << "6.DELETE TO SPECIFIC INDEX OF ARRAY." << endl;
        cout << "7.EXIT." << endl;
        cin >> opt;                                              //taking option to call
        if (opt == 1) {
            add();
            display();                                //calling functions
            append();
            display();
        }
        if (opt == 2) {
            add();
            display();                                 //calling functions
            prepend();
            display();
        }
        if (opt == 3) {
            add();
            display();                                //calling functions
            int index;
            InsertAtIndex(index);
            display();
        }
        if (opt == 4) {
            add();
            display();                                        //calling functions
            deleteAnElementFromLast();
            display();
        }
        if (opt == 5) {
            add();
            display();                                     //calling functions
            deleteAnElementFromStart();
            display();
        }
        if (opt == 6) {
            add();
            display();
            int index;
            deleteAnElementFromSpecificIndex(index);                       //calling functions
            display();
        }
        if (opt == 7) {
            cout << "YOU CHOOSE TO EXIT.." << endl;                //displaying the msg
            exit(3);
        }
    }

};

#endif //MAIN_CPP_FUNCTIONS_H
