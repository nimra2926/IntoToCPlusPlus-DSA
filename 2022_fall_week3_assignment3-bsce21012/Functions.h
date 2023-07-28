//
// Created by Lenovo on 9/17/2022.
//

#ifndef MAIN_CPP_FUNCTIONS_H
#define MAIN_CPP_FUNCTIONS_H

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//class mergeArray {
//
//public:
//    int sizeOfArray;                                                                //declaring
//    int NoOfElement;                                                                //declaring
//    int *array;
//public:
//
//    mergeArray(int s) {
//        sizeOfArray = s;                                                           //copying
//        NoOfElement = 0;                                                                //placing it to zero
//        array = new int[sizeOfArray];
//        for (int i = 0; i < sizeOfArray; i++) {
//            array[i] = 0;                                                   //setting values to zero
//        }
//    }
//
//    void add() {
//        cout << "ENTER NUMBERS IN ARRAY TO BE SORTED = ";
//        for (int i = 0; i < sizeOfArray; i++) {
//            cin >> array[i];                                                    //taking elements in the array
//        }
//    }
//
//    void display() {
//        cout << "THE SORTED ARRAY =";
//        for (int i = 0; i < sizeOfArray; i++) {
//            cout << array[i] << " ";                                         //displaying the array
//        }
//        cout << endl;
//    }
//
//    void selectionSort(){
//        int temp;
//        for(int i=0;i<sizeOfArray-1;i++){                                    //applying loop till the size-1 starting from 0
//            int min=i;
//            for(int j=i+1;j<sizeOfArray;j++){                                          //applying inner loop starting from i to greater than zero
//                if(array[j]<array[min]){                                   //comparing
//                    min=j;
//                }
//            }
//            if(min!=i){
//                temp=array[i];                                     //swapping
//                array[i]=array[min];
//                array[min]=temp;
//            }
//        }
//    }
//    void insertionSort() {
//        int temp;
//        for (int i = 1;
//             i < sizeOfArray; i++) {                                    //applying loop till the size starting from 1
//            for (int j = i; j >
//                            0; j--) {                                          //applying inner loop starting from i to greater than zero
//                if (array[j - 1] > array[j]) {                                   //comparing
//                    temp = array[j - 1];                                       //swapping
//                    array[j - 1] = array[j];
//                    array[j] = temp;
//                }
//            }
//        }
//    }
//
//    void merge(int *arr, int lowerBound, int upperBound, int midTerm) {
//        int i = lowerBound;;                                             //I have copied the lowerbound in i
//        int j = midTerm + 1;                                           //I have copied the midTErm +1 in j
//        int z = lowerBound;                                           //I have copied the lowerbound in z
//        int arr1[100];
//        while (j <= upperBound && i <=
//                                  midTerm) {                   //then applied an loop to check that if j and i are between the midterm and upperbound
//            if (arr[i] < arr[j]) {                       //checking which element is greater
//                arr1[z] = arr[i];                        //putting the value
//                i++;                                     //iterating i
//            } else {
//                arr1[z] = arr[j];                        //putting this element
//                j++;
//            }
//            z++;
//        }
//        while (i <= midTerm) {                        //checking the i <= midterm
//            arr1[z] = arr[i];                        //putting
//            z++;
//            i++;
//        }
//        while (j <= upperBound) {                //checking that j is less than upper bound
//            arr1[z] = arr[j];
//            z++;
//            j++;
//        }
//        for (i = lowerBound; i < z; i++) {
//            arr[i] = arr1[i];                                   //copying
//        }
//    }
//
//    void mergeSort(int *arr, int lowerBound, int upperBound) {
//        int midTerm;                                               //declaring
//        if (lowerBound < upperBound) {                              //checking
//            midTerm = (lowerBound + upperBound) / 2;                     //calculating the mid of the array
//            mergeSort(arr, lowerBound, midTerm);                     //calling the function
//            mergeSort(arr, midTerm + 1, upperBound);         //calling the function itself
//            merge(arr, lowerBound, upperBound, midTerm);               //calling
//        }
//    }
//
//};

//array  list
//class arrayList {
//private:
//    int data;
//    int *array;
//    int count;
//    int index;
//    int size;
//public:
//    arrayList(int d, int s) {
//        data = d;
//        size = s;
//        array = new int[size];
//        for (int i = 0; i < size; i++) {
//            array[i] = 0;
//        }
//        index = 0;
//        count = 0;
//    }
//    ~arrayList() {
//        delete [] array;
//    }
//    void setData(int d) {
//        data = d;
//    }
//    int getData() {
//        return data;
//    }
//    void setSize(int s) {
//        size = s;
//    }
//    int getSize() {
//        return size;
//    }
//    void addData() {
//        for (int i = 0; i < size; i++) {
//            cin >> array[i];
//            count++;
//        }
//    }
//    void display() {
//        for (int i = 0; i < size; i++) {
//            cout << array[i] << " ";
//        }
//    }
//
//    void append() {
//        size = size + 1;
//        int *arr = new int[size];
//        int value = getData();
//        for (int i = 0; i < size; i++) {
//            if (i == size - 1) {
//                arr[i] = value;
//                count++;
//            } else
//                arr[i] = array[i];
//        }
//        delete array;
//        array = arr;
//    }
//
//    void append1() {
//        size = size + 1;
//        int *arr = new int[size];
//        for (int i = 0; i < size; i++) {
//            arr[i] = array[i];
//        }
//        delete array;
//        array = arr;
//        int value = getData();
//        array[size - 1] = value;
//        count++;
//    }
//
//    void prepend() {
//        size = size + 1;
//        int *arr = new int[size];
//        int value = getData();
//        for (int i = size; i >= 0; i--) {
//            arr[i] = array[i - 1];
//            if (i == 0) {
//                arr[i] = value;
//                count++;
//            }
//        }
//        delete array;
//        array = arr;
//    }
//
//    void addAtSpecificIndex() {
//        cout << "ENTER THE INDEX = ";
//        cin >> index;
//        size = size + 1;
//        int *arr = new int[size];
//        int value = getData();
//        for (int i = 0; i < size; i++) {
//            arr[i] = array[i];
//        }
//        for (int i = size - 1; i >= index - 1; i--) {
//            arr[i] = array[i - 1];
//            if (i == index) {
//                arr[i] = value;
//                count++;
//            }
//        }
//        delete array;
//        array = arr;
//    }
//    void deleteAtTheEnd() {
//        size = size - 1;
//        count--;
//        int *arr = new int[size];
//        for (int i = 0; i < size; i++) {
//            arr[i] = array[i];
//        }
//        delete array;
//        array = arr;
//    }
//    void deleteAtFirstIndex() {
//        int *arr = new int[size];
//        for (int i = 0; i < size; i++) {
//            arr[i] = array[i + 1];
//        }
//        delete array;
//        size = size - 1;
//        count--;
//        array = arr;
//    }
//    void deleteAtASpecificIndex() {
//        cout << "ENTER INDEX = ";
//        cin >> index;
//        int *arr = new int[size];
//        for (int i = 0; i < size; i++) {
//            arr[i] = array[i];
//        }
//        for (int i = index; i <= size; i++) {
//            arr[i] = array[i + 1];
//        }
//        delete array;
//        size = size - 1;
//        count--;
//        array = arr;
//    }
//    void displayCount() {
//        cout << "count = " << count << endl;
//    }
//    void displayNodeByIndex() {
//        cout << "ENTER INDEX = ";
//        cin >> index;
//        for (int i = 0; i < size; i++) {
//            if (i == index) {
//                cout << "NODE AT " << i << " " << " = " << array[i] << endl;
//            }
//        }
//    }
//    void maxNode() {
//        int max;
//        max = array[0];
//        for (int i = 0; i < size; i++) {
//            if (max < array[i]) {
//                max = array[i];
//            }
//        }
//        cout << " max = " << max << endl;
//    }
//
//    void minNode() {
//        int min;
//        min = array[0];
//        for (int i = 0; i < size; i++) {
//            if (min > array[i]) {
//                min = array[i];
//            }
//        }
//        cout << "MIN = " << min << " " << endl;
//    }
//
//};


//singly linklist
//class node {
//public:
//    int data;
//    node *nextPtr;
//
//    node(int d) {
//        data = d;
//        nextPtr = nullptr;
//    }
//
//    ~node() {
//        nextPtr = nullptr;
//    }
//};
//
//class linkList {
//private:
//    node *head;
//    node *tail;
//    int count;
//public:
//    linkList() {
//        head = nullptr;
//        tail = nullptr;
//        count = 0;
//    }
//
//    ~linkList() {
//        head = nullptr;
//        tail = nullptr;
//    }
//
//    void append(int value) {
//        node *temp = new node(value);
//        temp->data = value;
//        temp->nextPtr = nullptr;
//        if (head == nullptr) {
//            head = temp;
//        } else {
//            node *temp1 = head;
//            while (temp1->nextPtr != nullptr) {
//                temp1 = temp1->nextPtr;
//            }
//            temp1->nextPtr = temp;
//
//        }
//        count++;
//    }
//
//    void display() {
//        node *temp = head;
//        while (temp != nullptr) {
//            cout << temp->data << "->";
//            temp = temp->nextPtr;
//        }
//        cout << "NULL" << endl;
//    }
//
//    void prepend(int value) {
//        node *temp = new node(value);
//        temp->data = value;
//        temp->nextPtr = head;
//        head = temp;
//        count++;
//    }
//
//    void addAtASpecificIndex(int value, int index) {
//        cout << "ENTER VALUE = ";
//        cin >> value;
//        cout << "ENTER INDEX = ";
//        cin >> index;
//        if (index <= 0) {
//            cout << "enter positive." << endl;
//        }
//        node *temp = new node(value);
//        if (index == 1) {
//            head = temp;
//        } else {
//            int i = 0;
//            node *temp1 = head;
//            while (i < index - 1) {
//                temp1 = temp1->nextPtr;
//                i++;
//            }
//            if (temp1 != nullptr) {
//                temp->nextPtr = temp1->nextPtr;
//                temp1->nextPtr = temp;
//            } else {
//                cout << "NO ITEM PRESENT BEHIND." << endl;
//            }
//        }
//        count++;
//
//    }
//
//    void deleteAtTheEnd() {
//        if (head == nullptr) {
//            cout << "empty list." << endl;
//        }
//        else{
//            if(head->nextPtr== nullptr){
//                head= nullptr;
//            } else{
//                node*temp=head;
//                while(temp->nextPtr->nextPtr!= nullptr){
//                    temp=temp->nextPtr;
//                }
//                node *temp1=temp->nextPtr;
//                temp->nextPtr= nullptr;
//                delete temp1;
//            }
//        }
//        count--;
//    }
//    void deleteAtFirst(){
//        if(head== nullptr){
//            cout<<"LIST IS EMPTY."<<endl;
//        }
//        else{
//            node *temp=head;
//            head=head->nextPtr;
//            delete temp;
//        }
//        count--;
//    }
//    void deleteAtASpecificIndex(int index){
//        cout<<"ENTER INDEX = ";
//        cin>>index;
//        if (index <= 0) {
//            cout << "enter positive." << endl;
//        }
//        if (index == 1) {
//            node *temp=head;
//            head=head->nextPtr;
//            delete temp;
//        }
//        else{
//            int i=0;
//            node *temp1=head;
//            while(i<index-1){
//                temp1=temp1->nextPtr;
//                i++;
//            }
//            node *toDelete=temp1->nextPtr;
//            temp1->nextPtr=temp1->nextPtr->nextPtr;
//            delete toDelete;
//        }
//        count--;
//    }
//    void displayCount(){
//        cout<<"COUNT = "<<count;
//    }
//    void findMax(){
//        int max;
//        node *temp=head;
//        max=temp->data;
//        while(temp!= nullptr){
//            if(max<temp->data){
//                max=temp->data;
//            }
//            else{
//                temp=temp->nextPtr;
//            }
//        }
//        cout<<"\nmax = "<<max;
//    }
//    void findMin(){
//        int min;
//        node *temp=head;
//        min=temp->data;
//        while(temp!= nullptr){
//            if(min>temp->data){
//                min=temp->data;
//            }
//            else{
//                temp=temp->nextPtr;
//            }
//        }
//        cout<<"\nmin = "<<min;
//    }
//    void displaySpecificNode(){
//        node *temp=head;
//        int index;
//        cout<<"enter index =";
//        cin>>index;
//        int i=0;
//        while(i<index-1){
//            temp=temp->nextPtr;
//            i++;
//        }
//        cout<<"NODE NEEDED AT INDEX = "<<index<<" = "<<temp->nextPtr->data;
//    }
//};

//                            //doubly linklist
//class node {
//public:
//    int data;
//    node *nextPtr;
//    node *previousPtr;
//
//    node(int d) {
//        data = d;
//        nextPtr = nullptr;
//    }
//
//    ~node() {
//        nextPtr = nullptr;
//    }
//};


//class doubly {
//private:
//    node *head;
//    node *tail;
//    int count;
//public:
//    doubly() {
//        head = nullptr;
//        tail = nullptr;
//        count = 0;
//    }
//
//    ~doubly() {
//        head = nullptr;
//        tail = nullptr;
//    }
//
//void append(int value){
//        node *temp=new node(value);
//        temp->data=value;
//        if(head== nullptr){
//            temp->nextPtr= nullptr;
//            temp->previousPtr= nullptr;
//            head=temp;
//        }
//        else{
//           node *newTemp=head;
//           while(newTemp->nextPtr!= nullptr){
//               newTemp= newTemp->nextPtr;
//           }
//           newTemp->nextPtr=temp;
//           temp->previousPtr= newTemp;
//        }
//    }
//    void prepend(int value){
//        node *temp=new node(value);
//        temp->data=value;
//        if(head== nullptr){
//            temp->nextPtr= nullptr;
//            temp->previousPtr= nullptr;
//            head=temp;
//        }
//        else{
//            head->previousPtr=temp;
//            temp->nextPtr=head;
//            head=temp;
//        }
//    }
//    void addAtASpecificIndex(){
//        int value;
//        node *temp=new node(value);
//
//        cout<<"enter value = ";
//        cin>>value;
//        int index;
//        cout<<"enter index = ";
//        cin>>index;
//        if(index<=0){
//            cout<<"ENTER POSITIVE VALUE."<<endl;
//        }
//        if(index==1){
//            temp->data=value;
//            if(head== nullptr){
//                temp->nextPtr= nullptr;
//                temp->previousPtr= nullptr;
//                head=temp;
//            }
//            else{
//                head->previousPtr=temp;
//                temp->nextPtr=head;
//                head=head->nextPtr;
//                head=temp;
//            }
//        }
//        else{
//            int i=1;
//            temp->data=value;
//            node *newTemp=head;
//            while(i<=index-1){
//                newTemp=newTemp->nextPtr;
//                i++;
//            }
//            if(newTemp->nextPtr!= nullptr){
//                temp->nextPtr=newTemp->nextPtr;
//                temp->previousPtr= newTemp;
//                newTemp->nextPtr=temp;
//                if(temp->nextPtr!= nullptr){
//                    temp->nextPtr->previousPtr=temp;
//                }
//                else{
//                    cout<<"NO ITEM PRESENT BEHIND."<<endl;
//                }
//            }
//        }
//    }
//    void deleteFromLast(){
//      if(head== nullptr){
//          cout<<"LIST IS EMPTY."<<endl;
//      }
//      else{
//          node *temp=head;
//          while(temp->nextPtr!= nullptr){
//              temp=temp->nextPtr;
//          }
//          temp->previousPtr->nextPtr= nullptr;
//          free(temp);
//      }
//    }
//    void deleteFromStart(){
//        if(head== nullptr){
//            cout<<"LIST IS EMPTY."<<endl;
//        }
//        else{
//            node *temp=head;
//            head=head->nextPtr;
//            free(temp);
//        }
//    }
//    void deleteAtASpecificIndex(){
//        int index;
//        cout<<"enter index = ";
//        cin>>index;
//        if(index<=0){
//            cout<<"ENTER POSITIVE VALUE."<<endl;
//        }
//        if(index==1){
//            node *temp=head;
//            if(head== nullptr){
//               cout<<"LIST IS EMPTY."<<endl;
//            }
//            else{
//               head=head->nextPtr;
//               free(temp);
//            }
//        }
//        else{
//            int i=1;
//            node *newTemp=head;
//            while(i<=index-1){
//                newTemp=newTemp->nextPtr;
//                i++;
//            }
//            if(newTemp->nextPtr!= nullptr){
//                node *toDelete=newTemp->nextPtr;
//                newTemp->nextPtr=newTemp->nextPtr->nextPtr;
//                if(newTemp->nextPtr->nextPtr!= nullptr){
//                    newTemp->nextPtr->nextPtr->previousPtr= newTemp->nextPtr;
//                }
//                delete toDelete;
//            }
//        }
//    }
//    void display() {
//        node *temp = head;
//        while (temp != NULL) {
//            cout << "" << temp->data << "-> ";
//            temp = temp->nextPtr;
//        }
//        cout << "NULL" << endl;
//    }
//
//};

//queues with arrays
//class queueWithArray{
//public:
//    int size;
//    int rear;
//    int front;
//    int *array;
//    queueWithArray(int s){
//        size=s;
//        rear=0;
//        front=0;
//        array=new int [size];
//        for(int i=0;i<size;i++){
//            array[i]=0;
//        }
//    }
//    void enqueue(int data){
//        if(size==rear){
//            cout<<"ARRAY IS FULL."<<endl;
//        }
//        else{
//            array[rear]=data;
//            rear++;
//        }
//        return;
//    }
//    void dequeue(){
//        if(rear==front){
//            cout<<"ARRAY IS EMPTY."<<endl;
//        }
//        else{
//            int i=0;
//            while(i<rear-1){
//                array[i]=array[i+1];
//                i++;
//            }
//            rear--;
//        }
//        return;
//    }
//    void display(){
//        if(rear==front){
//            cout<<"ARRAY IS EMPTY."<<endl;
//        }
//        else{
//            for(int i=0;i<size;i++){
//                cout<<array[i]<<"->";
//            }
//            cout<<"NULL."<<endl;
//        }
//        return;
//    }
//    void showFront(){
//        if(rear==front){
//            cout<<"ARRAY IS EMPTY."<<endl;
//        }
//        else {
//            cout << "ARRAY FRONT = "<<array[front]<<endl;
//        }
//        return;
//    }
//};


//stacks with linked list
//class node {
//public:
//    int data;
//    node *nextPtr;
//
//    node(int d) {
//        data = d;
//        nextPtr = nullptr;
//    }
//    ~node(){
//        nextPtr= nullptr;
//    }
//};
//class linkedList{
//public:
//    node * head;
//    linkedList(){
//        head= nullptr;
//    }
//    ~linkedList(){
//        head= nullptr;
//    }
//    void push(int val){
//        node *temp=new node(val);
//        temp->data=val;
//        temp->nextPtr=head;
//        head=temp;
//    }

//    void pop(){
//        if(head== nullptr){
//            cout<<"STACK IS EMPTY."<<endl;
//        }
//        else{
//            node *temp=head;
//            head=head->nextPtr;
//            delete temp;
//        }
//        return;
//    }
//    void showFront(){
//        if(head== nullptr){
//            cout<<"STACK IS EMPTY."<<endl;
//        }
//        else{
//            node *temp=head;
//            cout<<"VALUE AT FRONT = "<<temp->data<<" "<<endl;
//        }
//        return;
//    }
//    void display(){
//        node *temp=head;
//        if(head== nullptr){
//            cout<<"STACK IS EMPTY."<<endl;
//        }else{
//            while(temp!= nullptr){
//                cout<<temp->data<<"->";
//                temp=temp->nextPtr;
//            }
//            cout<<"NULL."<<endl;
//        }
//        return;
//    }
//};
//class stack{
//public:
//    linkedList l;
//    void pushElement(){
//        l.push(2);
//        l.push(3);
//        l.push(4);
//        l.push(0);
//    }
//    void popElement(){
//        l.pop();
//    }
//    void showFrontInStacks(){
//        l.showFront();
//    }
//    void displayStack(){
//        l.display();
//    }
//};


//queues with linked list
//class node {
//public:
//    int data;
//    node *nextPtr;
//
//    node(int d) {
//        data = d;
//        nextPtr = nullptr;
//    }
//    ~node(){
//        nextPtr= nullptr;
//    }
//};
//class linkedList{
//public:
//    node * head;
//    linkedList(){
//        head= nullptr;
//    }
//    ~linkedList(){
//        head= nullptr;
//    }
//    void push(int val){
//       node *temp=new node(val);
//       temp->data=val;
//       if(head== nullptr){
//           head=temp;
//       }
//       else{
//           node *newNode= head;
//           while(newNode->nextPtr!= nullptr){
//               newNode=newNode->nextPtr;
//           }
//           newNode->nextPtr=temp;
//       }
//        return;
//    }
//    void pop(){
//        if(head== nullptr){
//            cout<<"QUEUE IS EMPTY."<<endl;
//        }
//        else{
//            node *temp=head;
//            head=head->nextPtr;
//            delete temp;
//        }
//        return;
//    }
//    void showFront(){
//        if(head== nullptr){
//            cout<<"QUEUE IS EMPTY."<<endl;
//        }
//        else{
//            node *temp=head;
//            cout<<"VALUE AT FRONT = "<<temp->data<<" "<<endl;
//        }
//        return;
//    }
//    void display(){
//        node *temp=head;
//        if(head== nullptr){
//            cout<<"QUEUE IS EMPTY."<<endl;
//        }else{
//            while(temp!= nullptr){
//                cout<<temp->data<<"->";
//                temp=temp->nextPtr;
//            }
//            cout<<"NULL."<<endl;
//        }
//        return;
//    }
//};
//class queueWithLinkedList{
//public:
//    linkedList l;
//    void pushElement(){
//        l.push(2);
//        l.push(3);
//        l.push(4);
//        l.push(5);
//        l.push(0);
//    }
//    void popElement(){
//        l.pop();
//    }
//    void showFrontOfQueue(){
//        l.showFront();
//    }
//    void displayQueue(){
//        l.display();
//    }
//};
//class node {
//public:
//    node *nextPtr;
//    node *previousPtr;
//    int data;
//    node(int d) {
//        data = d;
//        previousPtr = nullptr;
//        nextPtr = nullptr;
//    }
//    ~node() {
//        previousPtr = nullptr;
//        nextPtr = nullptr;
//    }
//};
//
//class linkedList {
//public:
//    node *head;
//    int count;
//
//    linkedList() {
//        head = nullptr;
//        count = 0;
//    }
//
//    ~linkedList() {
//        head = nullptr;
//    }
//    void append(int value){
//        node *temp=new node(value);
//        temp->data=value;
//        if(head== nullptr){
//            head=temp;
//            temp->nextPtr= nullptr;
//            temp->previousPtr= nullptr;
//        }
//        else{
//            node *temp1=head;
//            while(temp1->nextPtr!= nullptr){
//                temp1=temp1->nextPtr;
//            }
//            temp1->nextPtr=temp;
//            temp->previousPtr=temp1;
//        }
//        count++;
//    }
//
//    void display() {
//        node *temp = head;
//        while (temp != nullptr) {
//            cout << temp->data << "->";
//            temp = temp->nextPtr;
//        }
//        cout << "NULL" << endl;
//    }
//    void prepend(int value){
//        node *temp=new node(value);
//        temp->data=value;
//        head->previousPtr=temp;
//        temp->nextPtr=head;
//        head=temp;
//    }
//    void addAtASpecificIndex(int value,int index){
//        cout << "ENTER VALUE = ";
//        cin >> value;
//        node *temp = new node(value);
//        temp->data = value;
//        cout << "ENTER INDEX = ";
//        cin >> index;
//        if (index < 0) {
//            cout << "ENTER POSITIVE." << endl;
//        }
//        if(index==0){
//            head->previousPtr=temp;
//            temp->nextPtr=head;
//            head=temp;
//            count++;
//        }
//        else{
//            node *temp1=head;
//            int i=0;
//            while(i<index-1){
//                temp1=temp1->nextPtr;
//                i++;
//            }
//            if(temp1!= nullptr){
//                temp->nextPtr=temp1->nextPtr;
//                temp1->nextPtr=temp;
//                temp->previousPtr=temp1;
//                count++;
//            }
//            else{
//                cout<<"NO SUCH INDEX."<<endl;
//            }
//        }
//
//    }
//    void deleteLastIndex(){
//        node *temp=head;
//        if(head== nullptr){
//            cout<<"LIST IS EMPTY."<<endl;
//        }
//        while(temp->nextPtr!= nullptr){
//            temp=temp->nextPtr;
//        }
//        temp->previousPtr->nextPtr= nullptr;
//        free(temp);
//    }
//    void deleteAtFirst(){
//        node *temp=head;
//        if(head== nullptr){
//            cout<<"LIST IS EMPTY."<<endl;
//        }
//        else{
//            head=head->nextPtr;
//            head->previousPtr= nullptr;
//            delete temp;
//        }
//
//    }
//    void deleteAtSpecificIndex(int index){
//        cout << "ENTER INDEX = ";
//        cin >> index;
//        if (index < 0) {
//            cout << "LIST IS EMPTY." << endl;
//        }
//        if(index==0){
//            node *temp=head;
//            if(head== nullptr){
//                cout<<"LIST IS EMPTY."<<endl;
//            }
//            else{
//                head=head->nextPtr;
//                head->previousPtr= nullptr;
//                delete temp;
//            }
//        }
//        else{
//            node *temp=head;
//            int i=0;
//            while(i<index-1){
//                temp=temp->nextPtr;
//                i++;
//            }
//            node* temp1=temp->nextPtr;
//            temp->nextPtr=temp->nextPtr->nextPtr;
//            delete temp1;
//        }
//    }
//};


//class linkedList {
//public:
//    node *head;
//    node *tail;
//    int count;
//
//    linkedList() {
//        head = nullptr;
//        tail = nullptr;
//        count = 0;
//    }
//
//    ~linkedList() {
//        head = nullptr;
//        tail = nullptr;
//    }
//
//    void append(int value) {
//        node *temp = new node(value);
//        temp->data = value;
//        if (head == nullptr) {
//            head = temp;
//        } else {
//            node *temp1 = head;
//            while (temp1->nextPtr != head) {
//                temp1 = temp1->nextPtr;
//            }
//            temp1->nextPtr = temp;
//        }
//        temp->nextPtr = head;
//        count++;
//    }
//    void display() {
//        node *temp = head;
//        if (head == nullptr) {
//            cout << "EMPTY." << endl;
//        } else {
//            do {
//                cout << temp->data << "->";
//                temp = temp->nextPtr;
//            } while (temp != head);
//            cout << "NULL." << endl;
//        }
//    }
//    void prepend(int value) {
//        node *temp = new node(value);
//        temp->data = value;
//        if (head == nullptr) {
//            head = temp;
//            temp->nextPtr = head;
//        } else {
//            node *temp1 = head;
//            while (temp1->nextPtr != head) {
//                temp1 = temp1->nextPtr;
//            }
//            temp1->nextPtr = temp;
//            temp->nextPtr = head;
//            head = temp;
//        }
//        count++;
//    }
//    void addAtASpecificIndex(int value, int index) {
//        cout << "ENTER VALUE = ";
//        cin >> value;
//        node *temp = new node(value);
//        temp->data = value;
//        cout << "ENTER INDEX = ";
//        cin >> index;
//        if (index < 0) {
//            cout << "ENTER POSITIVE." << endl;
//        }
//        if (index == 0) {
//            if (head == nullptr) {
//                head = temp;
//                temp->nextPtr = head;
//            } else {
//                node *temp1 = head;
//                while (temp1->nextPtr != head) {
//                    temp1 = temp1->nextPtr;
//                }
//                temp1->nextPtr = temp;
//                temp->nextPtr = head;
//                head = temp;
//            }
//            count++;
//        } else {
//            if (head->nextPtr == nullptr) {
//                head = nullptr;
//            } else {
//                node *temp1 = head;
//                int i = 0;
//                while (i < index - 1) {
//                    temp1 = temp1->nextPtr;
//                    i++;
//                }
//                if (temp1 != nullptr) {
//                    temp->nextPtr = temp1->nextPtr;
//                    temp1->nextPtr = temp;
//                } else {
//                    cout << "no such index." << endl;
//                }
//            }
//        }
//        count++;
//    }
//
//    void deleteAtLastIndex() {
//        node *temp = head;
//        if (head == nullptr) {
//            cout << "LIST IS EMPTY." << endl;
//        } else {
//            if (head->nextPtr == nullptr) {
//                head == nullptr;
//                free(head);
//            } else {
//                node *newNode;
//                while (temp->nextPtr != head) {
//                    newNode = temp;
//                    temp = temp->nextPtr;
//                }
//                newNode->nextPtr = temp->nextPtr;
//                free(temp);
//            }
//        }
//        count--;
//    }
//
//    void deleteAtFirst() {
//        node *temp = head;
//        if (head == nullptr) {
//            cout << "LIST IS EMPTY." << endl;
//        } else {
//            if (head->nextPtr == nullptr) {
//                head == nullptr;
//                free(head);
//            } else {
//                while (temp->nextPtr != head) {
//                    temp = temp->nextPtr;
//                }
//                temp->nextPtr = head->nextPtr;
//                free(head);
//                head = temp->nextPtr;
//            }
//        }
//        count--;
//    }
//
//    void deleteAtSpecificIndex(int index) {
//        cout << "ENTER INDEX = ";
//        cin >> index;
//        if (index < 0) {
//            cout << "LIST IS EMPTY." << endl;
//        }
//        if (index == 0) {
//            node *temp = head;
//            if (head == nullptr) {
//                cout << "LIST IS EMPTY." << endl;
//            } else {
//                if (head->nextPtr == nullptr) {
//                    head == nullptr;
//                    free(head);
//                } else {
//                    while (temp->nextPtr != head) {
//                        temp = temp->nextPtr;
//                    }
//                    temp->nextPtr = head->nextPtr;
//                    free(head);
//                    head = temp->nextPtr;
//                }
//            }
//        } else {
//            node *temp = head;
//            int i = 0;
//            while (i < index - 1) {
//                temp = temp->nextPtr;
//                i++;
//            }
//            if (temp == nullptr || temp->nextPtr == nullptr) {
//                return;
//            }
//            node *newTemp = temp->nextPtr->nextPtr;
//            free(temp->nextPtr);
//            temp->nextPtr = newTemp;
//        }
//        count--;
//    }
//};


//stack with linked list
//class node {
//public:
//    int data;
//    node *nextPtr;
//
//    node(int d) {
//        data = d;
//        nextPtr = nullptr;
//    }
//
//    ~node() {
//        nextPtr = nullptr;
//    }
//};
//
//class linkList {
//private:
//    node *head;
//    node *tail;
//    int count;
//public:
//    linkList() {
//        head = nullptr;
//        tail = nullptr;
//        count = 0;
//    }
//
//    ~linkList() {
//        head = nullptr;
//        tail = nullptr;
//    }
//
//    void push(int value) {
//        node *temp = new node(value);
//        temp->data = value;
//        temp->nextPtr = head;
//        head = temp;
//    }
//
//    void pop() {
//        if (head == nullptr) {
//            cout << "STACK IS EMPTY." << endl;
//            return;
//        } else {
//            node *temp = head;
//            cout<<"DELETED ELEMENT = "<<head->data<<endl;
//            head = head->nextPtr;
//            delete temp;
//        }
//    }
//
//    void showFront() {
//        if (head == nullptr) {
//            cout << "STACK IS EMPTY." << endl;
//            return;
//        } else {
//            cout << "ELEMENT AT FRONT = " << head->data << endl;
//        }
//    }
//    void display(){
//        if(head== nullptr){
//            cout<<"STACK IS EMPTY."<<endl;
//            return;
//        }else{
//            node *temp=head;
//            do{
//                cout<<temp->data<<"->";
//                temp=temp->nextPtr;
//            }while(temp!= nullptr);
//            cout<<"NULL."<<endl;
//        }
//    }
//};
//
//class stack {
//public:
//    linkList l;
//    void pushElement(){
//        l.push(3);
//        l.push(4);
//        l.push(5);
//        l.push(6);
//        l.push(8);
//        l.display();
//    }
//    void popElement(){
//        l.pop();
//        l.display();
//    }
//    void showElementAtFront(){
//        l.showFront();
//        l.display();
//    }
//};

//stack with arrays
//class array {
//public:
//    int data;
//    int size;
//    int top;
//    int *arr;
//
//    array(int d) {
//        data = d;
//        size = 5;
//        top = 0;
//        arr = new int[size];
//        for (int i = 0; i < size; i++) {
//            arr[i] = 0;
//        }
//    }
//
//    array() {
//        int s;
//        cout << "ENTER SIZE = ";
//        cin >> s;
//        size = s;
//        int d;
//        data = d;
//        top = -1;
//        arr = new int[size];
//        for (int i = 0; i < size; i++) {
//            arr[i] = 0;
//        }
//    }
//
//    ~array() {
//        delete[]arr;
//    }
//
//    void push(int value) {
//        if (top == size - 1) {
//            cout << "ARRAY IS FULL." << endl;
//            return;
//        } else {
//            top++;
//            arr[top] = value;
//        }
//    }
//
//    void pop() {
//        if (top == 0) {
//            cout << "ARRAY IS NULL." << endl;
//            return;
//        } else {
//            top--;
//        }
//    }
//
//    void showFront() {
//        if (top == 0) {
//            cout << "ARRAY IS NULL." << endl;
//            return;
//        } else {
//            cout << "VALUE AT FRONT = " << arr[top] << endl;
//        }
//    }
//
//    void display() {
//        for (int i = 0; i <= top; i++) {
//            cout << arr[i] << "->";
//        }
//        cout << "NULL." << endl;
//    }
//
//};
//
//class stack {
//public:
//    array a;
//
//    void pushElement() {
//        a.push(2);
//        a.push(1);
//        a.push(3);
//        a.push(0);
//        a.display();
//    }
//
//    void popElement() {
//        a.pop();
//        a.display();
//    }
//
//    void showFrontValue() {
//        a.showFront();
//        a.display();
//    }
//};
//class node {
//public:
//    int data;
//    node *nextPtr;
//
//    node(int d) {
//        data = d;
//        nextPtr = nullptr;
//    }
//
//    ~node() {
//        nextPtr = nullptr;
//    }
//};
//
//class linkList {
//private:
//    node *head;
//    node *tail;
//    int count;
//public:
//    linkList() {
//        head = nullptr;
//        tail = nullptr;
//        count = 0;
//    }
//
//    ~linkList() {
//        head = nullptr;
//        tail = nullptr;
//    }
//
//    void push(int value) {
//        node *temp = new node(value);
//        temp->data = value;
//        temp->nextPtr = head;
//        head = temp;
//    }
//
//    void pop() {
//        node *temp = head;
//        if (head == nullptr) {
//            cout << "EMPTY." << endl;
//        }
//        if (head->nextPtr == nullptr) {
//            head = nullptr;
//        } else {
//            node *temp = head;
//            while (temp->nextPtr->nextPtr != nullptr) {
//                temp = temp->nextPtr;
//            }
//            node *temp1 = temp->nextPtr;
//            temp->nextPtr = nullptr;
//            delete temp1;
//        }
//    }
//
//void showFront() {
//    if (head == nullptr) {
//        cout << "empty." << endl;
//    } else {
//        cout << "front = " << head->data << endl;
//    }
//}
//
//void display() {
//    node *temp = head;
//    if (head == nullptr) {
//        cout << "empty." << endl;
//    } else {
//        do {
//            cout << temp->data << "->";
//            temp = temp->nextPtr;
//        } while (temp != nullptr);
//        cout << "NULL." << endl;
//    }
//}
//
//};
//
//class queue {
//public:
//    linkList l;
//
//    void pushElement() {
//        l.push(2);
//        l.push(3);
//        l.push(4);
//        l.push(5);
//        l.push(1);
//        l.display();
//    }
//
//    void popElement() {
//        l.pop();
//        l.display();
//    }
//
//    void showFrontElement() {
//        l.showFront();
//        l.display();
//    }
//};
//class array{
//public:
//    int data;
//    int size;
//    int top;
//    int *arr;
//
//    array(int d) {
//        data = d;
//        size = 5;
//        top = 0;
//        arr = new int[size];
//        for (int i = 0; i < size; i++) {
//            arr[i] = 0;
//        }
//    }
//
//    array() {
//        int s;
//        cout << "ENTER SIZE = ";
//        cin >> s;
//        size = s;
//        int d;
//        data = d;
//        top = -1;
//        arr = new int[size];
//        for (int i = 0; i < size; i++) {
//            arr[i] = 0;
//        }
//    }
//
//    ~array() {
//        delete []arr;
//    }
//    void push(int value){
//        if(top==size-1){
//            cout<<"ARRAY IS FULL."<<endl;
//        }
//        else{
//            top++;
//            arr[top]=value;
//        }
//    }
//    void pop(){
//        int *array1;
//        if(top==-1){
//            cout<<"ARRAY IS EMPTY."<<endl;
//        }
//        else{
//            array1=new int [top];
//            for(int i=0;i<=top;i++){
//                array1[i]=arr[i+1];
//            }
//            top--;
//            delete arr;
//            arr=array1;
//        }
//    }
//    int showFront(){
//        if(top==-1){
//            cout<<"EMPTY."<<endl;
//        }
//        else{
//            cout<<"FRONT = "<<arr[top]<<endl;
//        }
//        return arr[top];
//    }
//    void display(){
//        if(top==-1){
//            cout<<"EMPTY."<<endl;
//        }
//        else{
//            for(int i=0;i<=top;i++){
//                cout<<arr[i]<<"->";
//            }
//            cout<<"NULL"<<endl;
//        }
//    }
//    bool isEmpty(){
//        if(top==-1){
//            return true;
//        }
//        else{
//            return false;
//        }
//    }
//};
//class queue{
//public:
//    array a;
//    void pushElement(){
//        a.push(2);
//        a.push(3);
//        a.push(0);
//        a.display();
//    }
//    void pop(){
//        a.pop();
//        a.display();
//    }
//    int showFrontElement(){
//        int show = a.showFront();
//        a.display();
//        return show;
//    }
//    bool isEmptyQueue(){
//        if(a.isEmpty()){
//            return true;
//        }
//        else{
//            return false;
//        }
//    }
//};


//stacks using queues
//class Stack {
//public:
//    int N;
//    queue<int> q;
//    queue<int> q1;
//
//    Stack() {
//        N = 0;
//    }
//
//    void push(int value) {
//        q.push(value);
//        N++;
//        while (!q1.empty()) {
//            q.push(q1.front());
//            q1.pop();
//
//        }
//        queue<int> temp = q1;
//        q1 = q;
//        q = temp;
//    }
//
//    void pop() {
//        if (q1.empty())
//            return;
//        q1.pop();
//        N--;
//    }
//
//    int top() {
//        if (q1.empty())
//            return -1;
//        return q1.front();
//    }
//};

//queues using stacks
//class Queues {
//public:
//    stack<int> s1, s2;
//
//    void push1(int value) {
//        while (!s1.empty()) {
//            s2.push(s1.top());
//            s1.pop();
//        }
//        s1.push(value);
//        while (!s2.empty()) {
//            s1.push(s2.top());
//            s2.pop();
//        }
//    }
//
//    int pop1() {
//        int x;
//        if (s1.empty()) {
//            cout << "EMPTY." << endl;
//            exit(0);
//        }
//        x = s1.top();
//        s1.pop();
//        return x;
//    }
//};



//queues
//
//template<typename T>
//
//class Queue {
//public:
//    int queue_size;
//    int array_size;
//    int front;
//    int back;
//    T *array;
//
//    Queue() { //default constructor
//        array_size = 5;
//        array = new T[array_size];
//        queue_size = 0;
//        front = 0;
//        back = -1;
//    }
//
//    Queue(int s) {
//        array_size = s;
//        queue_size = 0;
//        front = 0;
//        back = -1;
//        array = new T[array_size];
//    }
//
//    bool isFull() {
//        if (queue_size >= array_size)
//            return true;
//        else
//            return false;
//
//    }
//
//    bool isEmpty() {
//        if (queue_size == 0)
//            return true;
//        else
//            return false;
//    }
//
//    T showFront() {
//        return array[front];
//    }
//
//    void reSize() {
//        T *arr = new T[2 * array_size];
//        int i;
//        int j = front % array_size;
//        for (i = 0; i < queue_size; i++) {
//            arr[i] = array[j];
//            j++;
//            j = j % array_size;
//        }
//        back = i - 1;
//        front = 0;
//        delete array;
//        array = arr;
//        array_size = 2 * array_size;
//    }
//
//    void enqueue(T value) {
//        if (isFull())
//            reSize();
//        back++;
//        int index = back % array_size;
//        array[index] = value;
//        queue_size++;
//    }
//
//
//    T dequeue() {
//        if (isFull())
//            reSize();
//        queue_size--;
//        return array[front++];
//    }
//
//
//    void display() {
//        int j = front % array_size;
//        for (int i = 0; i < queue_size; i++) {
//            cout << array[j] << "->";
//            j++;
//            j = j % array_size;
//        }
//        cout << "NULL." << endl;
//        cout << "\nSIZE OF ARRAY = " << array_size << endl;
//        cout << "\nSIZE OF QUEUE = " << queue_size << endl;
//    }
//
//    ~Queue() {
//        delete[] array;
//    }
//};

//stacks with arrays
//template<typename T>
//class Stacks {
//public:
//    int stack_size;
//    int array_size;
//    int top;
//    T *array;
//
//    Stacks() {
//        stack_size = 0;
//        array_size = 5;
//        top = -1;
//        array = new T[array_size];
//    }
//
//    Stacks(T s) {
//        array_size = s;
//        stack_size = 0;
//        top = -1;
//        array = new T[array_size];
//    }
//
//    bool isFull() {
//        if (stack_size >= array_size)
//            return true;
//        else return false;
//    }
//
//    bool isEmpty() {
//        if (stack_size == 0)
//            return true;
//        else return false;
//    }
//
//    void reSize() {
//        T *arr = new T[2 * array_size];
//        for (int i = 0; i < stack_size; i++) {
//            arr[i] = array[i];
//        }
//        delete array;
//        array = arr;
//        array_size = 2 * array_size;
//
//    }
//
//    void push(int value) {
//        if (isFull()) {
//            reSize();
//        }
//        top++;
//        array[top] = value;
//        stack_size++;
//    }
//
//    T pop() {
//        if (isFull())
//            reSize();
//        stack_size--;
//        return array[top--];
//    }
//
//    T showFront() {
//        return array[top];
//    }
//
//    void display() {
//        for (int i = 0; i < stack_size; i++){
//            cout<<array[i]<<"->";
//        }
//        cout<<"NULL."<<endl;
//        cout<<"\nARRAY SIZE = "<<array_size<<endl;
//        cout<<"\nSTACK SIZE = "<<stack_size<<endl;
//    }
//};

#endif //MAIN_CPP_FUNCTIONS_H
