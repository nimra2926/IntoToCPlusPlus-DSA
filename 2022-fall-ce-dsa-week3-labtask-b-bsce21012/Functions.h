//
// Created by Lenovo on 9/16/2022.
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

    void bubbleSort() {
        int temp;                                                               //declaring temp
        for (int i = 0; i < sizeOfArray - 1; i++) {                             //applying loop till size-1
            for (int j = i + 1;
                 j < sizeOfArray; j++) {                         //applying loop starting from 1 index after till size
                if (array[j] < array[i]) {                                //comparing the indexes
                    temp = array[j];                                      //swapping the elements if the next index is greater than the previous one
                    array[j] = array[i];
                    array[i] = temp;
                }
            }
        }
    }

    void insertionSort() {
        int temp;
        for (int i = 1;
             i < sizeOfArray; i++) {                                    //applying loop till the size starting from 1
            for (int j = i; j >
                            0; j--) {                                          //applying inner loop starting from i to greater than zero
                if (array[j - 1] > array[j]) {                                   //comparing
                    temp = array[j - 1];                                       //swapping
                    array[j - 1] = array[j];
                    array[j] = temp;
                }
            }
        }
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

    int takingPivotPointAndSeparating(int array2[], int lowerBound, int upperBound) {
        //selecting the upperbound element as pivot value
        int pivotPoint = array2[upperBound];
        int temp;                                         //declaring elements fro swapping
        int temp1;
        int i = (lowerBound - 1);                                    //declaring i as lower-bound -1
        int j = lowerBound;
        while (j < upperBound) {                                    //applying condition
            if (array2[j] <= pivotPoint) {                        //checking the values (comparing values at indexes
                i++;                                              //if pivot elements is greater than swap the elements
                temp1=array2[i];                                     //swapping the element having i index with the element having j
                array2[i]=array2[j];
                array2[j]=temp1;
            }
            j++;              //iterating j
        }

        temp=array2[i+1];
        array2[i+1]=array2[upperBound];                                   //swapping the pivot point with the greater element at i
        array2[upperBound]=temp;
        // return the separating point
        return (i + 1);
    }

    void quickSort(int array2[], int lowerBound, int upperBound) {
        if (lowerBound < upperBound) {
           //we are finding the pivot point and dragging the smaller value on the left side and greater value on the right side
            int pivotP = takingPivotPointAndSeparating(array2, lowerBound, upperBound);

            //calling function for the left side of pivot point
            quickSort(array2, lowerBound, pivotP - 1);

            //calling function for the right side of pivot point
            quickSort(array2, pivotP + 1, upperBound);
        }
    }
};


#endif //MAIN_CPP_FUNCTIONS_H
