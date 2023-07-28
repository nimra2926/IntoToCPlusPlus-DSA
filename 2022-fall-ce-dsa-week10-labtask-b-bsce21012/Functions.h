//
// Created by Lenovo on 11/3/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK10_LABTASK_B_BSCE21012_FUNCTIONS_H
#define INC_2022_FALL_CE_DSA_WEEK10_LABTASK_B_BSCE21012_FUNCTIONS_H

#endif //INC_2022_FALL_CE_DSA_WEEK10_LABTASK_B_BSCE21012_FUNCTIONS_H

#include <iostream>

using namespace std;


class sort {
public:
    int *arr;
    int noOfElements;                             //we have declared the attributes of the class
    int size;

    sort(int s) {
        size = s;                       //a constructor to det the size, no. of elements in the array and to allocate the memory
        noOfElements = s;
        arr = new int[s];
    }

    void display() {
        for (int i = 0; i < size; i++)                      //a function to display the array
            cout << arr[i] << " ";
        cout << endl;
    }

    int parentNode(int i) {                           //a parent node which only get the parent
        return (i - 1) / 2;
    }

    int leftNode(int i) {
        return (2 * i + 1);                    //which gives the left child
    }

    int rightNode(int i) {
        return (2 * i + 2);                    //which gives the right child
    }

    void minHeap(int i) {
        int temp;
        int l = leftNode(i);                              //storing the get left node in the l
        int r = rightNode(i);                             //storing the right node in the r
        int smallest = i;                                //making the i the smallest element
        if (l < size && arr[l] < arr[i])
            smallest = l;                                  //comparing if the left child is less than size and the child value at l index is less than i then making smallest the l
        if (r < size && arr[r] < arr[smallest])            //comparing if the right child is less than size and the child value at r index is less than smallest then making smallest the r
            smallest = r;
        if (smallest != i) {                    //if smallest is not w=equal to i
            temp=arr[i];
            arr[i]=arr[smallest];                        //swapping
            arr[smallest]=temp;
            minHeap(smallest);                //calling the min heap function
        }
    }

    int extractMin() {
        if (size <= 0) {                                 //if the size is less than zero
            cout << "SIZE IS NEGATIVE";
        }
        if (size == 1) {                                 //if size is equal to 1
            size--;                       //decrement the size and return the zero index
            return arr[0];
        }
        int root = arr[0];                 //making root as zero index
        arr[0] = arr[size - 1];            // storing the second last element at zero index
        size--;                          //decrementing the size
        minHeap(0);                      //and calling
        return root;
    }

    void addElements() {
        cout << "ENTER " << noOfElements << " NO. OF ELEMENTS TO SORT USING HEAPSORT" << endl;
        for (int i = 0; i < noOfElements; i++)
            cin >> arr[i];                      //taking elemnt from the user
    }

    void heapSort() {
        int temp[noOfElements];
        for (int j = 0; j < noOfElements; j++) {                   //making a loop till no of elements
            temp[j] = extractMin();                         //storing thr elements extracted from the extract min function
            cout << temp[j] << " ";                       //displaying
        }
    }

    void maxHeap(int arr[], int n, int i) {
        int temp;                                    //declaring
        int largest, left, right;
        largest = i;
        left = (2 * i) + 1;                          //initializing
        right = (2 * i) + 2;
        if (left < n && arr[left] > arr[largest]) {                //checking and comparing that if the array element at left index is greater than largest then store left in largest
            largest = left;
        }
        if (right < n && arr[right] > arr[largest]) {
            largest = right;                //checking and comparing that if the array element at right index is greater than largest then store left in largest
        }
        if (largest != i) {                 //if largest is not equal to i
            temp = arr[i];
            arr[i] = arr[largest];                   //swapping
            arr[largest] = temp;
            maxHeap(arr, n, largest);                 //calling the same function
        }
    }

    void heapSortMax(int arr[], int n) {
        int temp;
        for (int i = n / 2 - 1; i >= 0; i--)  {
            maxHeap(arr, n, i);                              //calling
        }
        for (int i = n - 1; i >= 0; i--) {
            temp = arr[0];
            arr[0] = arr[i];                            //swapping arr of zero and arr of i
            arr[i] = temp;
            maxHeap(arr, i, 0);                  //calling
        }
    }
};
