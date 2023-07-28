//
// Created by Lenovo on 9/20/2022.
//

#ifndef MAIN_CPP_FUNCTIONS_H
#define MAIN_CPP_FUNCTIONS_H


#include <iostream>

using namespace std;

class mergeArray {

public:
    int sizeOfArray;                                                                //declaring
    int NoOfElement;                                                                //declaring
    int *array;
public:

    mergeArray(int s) {
        sizeOfArray = s;                                                           //copying
        NoOfElement = 0;                                                                //placing it to zero
        array = new int[sizeOfArray];
        for (int i = 0; i < sizeOfArray; i++) {
            array[i] = 0;                                                   //setting values to zero
        }
    }

    void add() {
        cout << "ENTER NUMBERS IN ARRAY TO BE SORTED = ";
        for (int i = 0; i < sizeOfArray; i++) {
            cin >> array[i];                                                    //taking elements in the array
        }
    }

    void display() {
        cout << "THE SORTED ARRAY =";
        for (int i = 0; i < sizeOfArray; i++) {
            cout << array[i] << " ";                                         //displaying the array
        }
        cout << endl;
    }

    void merge(int *arr, int lowerBound, int upperBound, int midTerm) {
        int i = lowerBound;;                                             //I have copied the lowerbound in i
        int j = midTerm + 1;                                           //I have copied the midTErm +1 in j
        int z = lowerBound;                                           //I have copied the lowerbound in z
        int arr1[100];
        while (j <= upperBound && i <=
                                  midTerm) {                   //then applied an loop to check that if j and i are between the midterm and upperbound
            if (arr[i] < arr[j]) {                       //checking which element is greater
                arr1[z] = arr[i];                        //putting the value
                i++;                                     //iterating i
            } else {
                arr1[z] = arr[j];                        //putting this element
                j++;
            }
            z++;
        }
        while (i <= midTerm) {                        //checking the i <= midterm
            arr1[z] = arr[i];                        //putting
            z++;
            i++;
        }
        while (j <= upperBound) {                //checking that j is less than upper bound
            arr1[z] = arr[j];
            z++;
            j++;
        }
        for (i = lowerBound; i < z; i++) {
            arr[i] = arr1[i];                                   //copying
        }
    }

    void mergeSort(int *arr, int lowerBound, int upperBound) {
        int midTerm;                                               //declaring
        if (lowerBound < upperBound) {                              //checking
            midTerm = (lowerBound + upperBound) / 2;                     //calculating the mid of the array
            mergeSort(arr, lowerBound, midTerm);                     //calling the function
            mergeSort(arr, midTerm + 1, upperBound);         //calling the function itself
            merge(arr, lowerBound, upperBound, midTerm);               //calling
        }
    }

    void countSort() {
        int size1;
        cout << "ENTER SIZE = ";
        cin >> size1;                                               //taking size
        int arr[size1];
        cout << "ENTER ELEMENTS = ";
        for (int i = 0; i < size1; i++) {
            cin >> arr[i];                                        //taking input from the user
        }

        cout << "THE ARRAY BEFORE SORTING = ";
        for (int i = 0; i < size1; i++) {
            cout << arr[i] << " ";                                 //displaying
        }
        int max;
        max = arr[0];
        for (int i = 0; i < size1; i++) {
            if (max < arr[i]) {
                max = arr[i];                                           //finding the max element
            }
        }
        cout << "\nSO THE SIZE OF NEW ARRAY IS = " << max << endl;
        int count[max];
        for (int i = 0; i <= max; ++i) {
            count[i] = 0;                           //putting it equal to zero
        }
        for (int i = 0; i < size1; i++) {
            count[arr[i]]++;                         //counting the no. of elements at that index
        }
        int j = 0;                             //incrementer for arr array in which the input is taken
        int i = 0;                             //incrementer for count array
        while (i <= max) {                        //to check that i is less than max
            if (count[i] > 0) {                   //checking that the count is greater than zero
                arr[j] = i;                       //putting the value at i
                count[i] = count[i] - 1;           //decrementing the counter at that index
                j++;
            }
            else{
                i++;                              //if count is less than zero then increment the i and check the next index
            }
        }
        cout << "THE ARRAY AFTER SORTING = ";
        for (int i = 0; i < size1; i++) {
            cout << arr[i] << " ";                                 //displaying
        }
        cout << endl;

    }
};


#endif //MAIN_CPP_FUNCTIONS_H
