#include <iostream>
#include "Functions.h"

using namespace std;

//
int main() {

//    // Call all functions one by one here to test the output
//    int opt;
//    cout << "PLEASE ENTER YOUR CHOICE." << endl;
//    cout << "1.SELECTION SORT." << endl;
//    cout << "2.INSERTION SORT." << endl;                                       //displaying options
//    cout << "3.MERGE SORT." << endl;
//    cout << "4.EXIT." << endl;
//    cin >> opt;
//    if (opt == 1) {
//        mergeArray M(5);                                    //making an object
//        M.add();
//        M.selectionSort();                                     //calling
//        M.display();
//    }
//    if (opt == 2) {
//        mergeArray M(5);                                         //making an object
//        M.add();
//        M.insertionSort();
//        M.display();
//    }
//    if (opt == 3) {
//        mergeArray M(5);
//        int size;                                                        //declaring
//        int *array1 = new int[size];                                     //making an
//        cout << "ENTER SIZE OF ARRAY = ";
//        cin >> size;                                              //taking size of array
//        cout << "ENTER ELEMENTS OF ARRAY = ";
//        for (int i = 0; i < size; i++) {
//            cin >> array1[i];                                   //taking input
//        }
//        M.mergeSort(array1, 0, size - 1);             //calling function
//        cout << "SORTED ARRAY AFTER MERGE SORT = ";
//        for (int i = 0; i < size; i++) {
//            cout << array1[i] << " ";                                     //displaying
//        }
//        cout << endl << endl;
//    }
//    if (opt == 4) {
//        cout << "YOU CHOOSE TO EXIT..." << endl;
//        exit(2);
//    }
//    return 0;


//    arrayList l(0, 0);
//    l.setData(2);
//    l.getData();
//    l.setSize(5);
//    l.getSize();
//    l.addData();
//    cout << "before\n";
//    l.display();
//    cout << endl;
//    l.append();
//    cout << "AFTER FIRST APPEND= ";
//    l.display();
//    cout << endl;
//    l.append1();
//    cout << "AFTER 2 APPEND= ";
//    l.display();
//    cout<<endl;
//    l.prepend();
//    cout<<"DISPLAY AFTER PREPEND = ";
//    l.display();
//    cout<<endl;
//    l.addAtSpecificIndex();
//    cout<<"ADDED AT SPECIFIC INDEX = ";
//    l.display();
//    cout<<endl;
//    l.deleteAtTheEnd();
//    cout<<"AFTER DELETING = ";
//    l.display();
//    cout<<endl;
//    l.deleteAtFirstIndex();
//    cout<<"AFTER DELETING AT FIRST = ";
//    l.display();
//    cout<<endl;
//    l.deleteAtASpecificIndex();
//    cout<<"AFTER DELETION AT SPECIFIC INDEX = ";
//    l.display();
//    cout<<endl;
//    l.displayCount();
//    l.displayNodeByIndex();
//    l.maxNode();
//    l.minNode();


//linkList a;
//a.append(2);
//a.append(3);
//a.append(4);
//a.append(5);
//a.append(6);
//a.display();
//a.prepend(2);
//a.prepend(4);
//a.prepend(6);
//a.display();
//int index;
//int value;
//a.addAtASpecificIndex(value,index);
//a.display();
//a.deleteAtTheEnd();
//a.display();
//a.deleteAtFirst();
//a.display();
//a.deleteAtASpecificIndex(index);
//a.display();
//a.displayCount();
//a.findMax();
//a.findMin();
//a.displaySpecificNode();


//doubly d;
//d.append(3);
//d.append(4);
//d.append(5);
//d.append(6);
//d.display();
//d.prepend(0);
//d.prepend(1);
//d.prepend(9);
//d.display();
//d.addAtASpecificIndex();
//d.display();
//d.deleteFromLast();
//d.display();
//d.deleteFromStart();
//d.display();
//d.deleteAtASpecificIndex();
//d.display();


//queueWithArray q(5);
//q.enqueue(0);
//q.enqueue(1);
//q.enqueue(2);
//q.display();
//q.showFront();
//q.dequeue();
//q.display();


//stack s;
//s.pushElement();
//s.displayStack();
//s.showFrontInStacks();
//s.popElement();
//s.displayStack();
//s.showFrontInStacks();


//queueWithLinkedList q;
//q.pushElement();
//q.displayQueue();
//q.showFrontOfQueue();
//q.popElement();
//q.displayQueue();
//q.showFrontOfQueue();

//
//linkedList l;
//l.append(3);
//l.append(4);
//l.append(5);
//l.display();
//l.prepend(1);
//l.display();
//int value;
//int index;
//l.addAtASpecificIndex(value,index);
//l.display();
//l.deleteLastIndex();
//l.display();
//l.deleteAtFirst();
//l.display();
//l.deleteAtSpecificIndex(index);
//l.display();

//stack from linked list
//stack s;
//s.pushElement();
//s.popElement();
//s.showElementAtFront();

//stack with arrays
//stack s;
//s.pushElement();
//s.popElement();
//s.showFrontValue();

//queues with linked list
//queue q;
//q.pushElement();
//q.popElement();
//q.showFrontElement();

//queues with arrays
//queue q;
//q.pushElement();
//q.pop();
//q.showFrontElement();

//stacks using queues
//    Stack s;
//    s.push(1);
//    s.push(2);
//    s.push(3);
//
//    cout << s.top() << endl;
//    s.pop();
//    cout << s.top() << endl;
//    s.pop();
//    cout << s.top() << endl;

//queues using stacks
//Queues q;
//q.push1(0);
//q.push1(3);
//q.push1(4);
//q.push1(5);
//cout<<q.pop1()<<endl;
//cout<<q.pop1()<<endl;
//cout<<q.pop1()<<endl;
//cout<<q.pop1()<<endl;

//queues with arrays
//    Queue<int> q;
//    q.enqueue(2);
//    q.enqueue(3);
//    q.enqueue(4);
//    q.enqueue(5);
//    q.enqueue(6);
//    q.display();
//    q.dequeue();
//    q.display();
//    q.enqueue(7);
//    q.display();
//    cout << "FRONT VALUE = ";
//    cout << q.showFront();

//stacks with arrays
//Stacks<int > s;
//s.push(2);
//s.push(3);
//s.push(4);
//s.push(5);
//s.display();
//s.pop();
//s.display();
//s.showFront();

    return 0;
}
