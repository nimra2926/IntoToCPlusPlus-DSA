//
// Created by Lenovo on 12/4/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK10_LABTASK_A_BSCE21012_BINARYTREE_H
#define INC_2022_FALL_CE_DSA_WEEK10_LABTASK_A_BSCE21012_BINARYTREE_H

#endif //INC_2022_FALL_CE_DSA_WEEK10_LABTASK_A_BSCE21012_BINARYTREE_H

#include <iostream>
#include "Queues.h"
#include "Stacks.h"
#include "Node.h"
#include <cmath>
using namespace std;

template<typename T>
class BinaryTree {
public:
    Node<T> *root;
    int countOfElement;
    int height;
                                           // 1
                                         // 2    3
                                        //4   5 6  7
    BinaryTree() {
        root = nullptr;
        countOfElement = 0;
        height = -1;
    }

    Node<T> *findParentToInsert(Node<T> *temp, Queue<Node<T> *> &Q) {
        if (temp->countOfChildren != 2) {
            return temp;
        } else {
            if (temp->left != nullptr) {
                Q.enqueue(temp->left);
            }
            if (temp->right != nullptr) {
                Q.enqueue(temp->right);
            }
            temp = findParentToInsert(Q.dequeue(), Q);
            return temp;
        }
    }

    void insert(T value) {
        auto *newNode = new Node<T>(value);
        if (root == nullptr) {
            root = newNode;
        } else {
            Queue<Node<T> *> Q(countOfElement);
            Node<T> *temp = root;
            temp = findParentToInsert(temp, Q);
            if (temp->countOfChildren == 0) {
                temp->left = newNode;
            } else {
                temp->right = newNode;
            }
            temp->countOfChildren++;
            newNode->parent = temp;
        }
        countOfElement++;
        height = log2(countOfElement);
    }

    Node<T> *findParentToUpdate(Node<T> *temp, Queue<Node<T> *> &Q, T value) {
        if (temp->element == value) {
            return temp;
        } else {
            if (temp->left != nullptr) {
                Q.enqueue(temp->left);
            }
            if (temp->right != nullptr) {
                Q.enqueue(temp->right);
            }
            temp = findParentToUpdate(Q.dequeue(), Q, value);
            return temp;
        }
    }

    void update(T value, T updatedValue) {
        if (root->element == value) {
            root->element = updatedValue;
        } else {
            Queue<Node<T> *> Q(countOfElement);
            Node<T> *temp = root;
            temp = findParentToUpdate(temp, Q, value);
            if (temp->element == value) {
                temp->element = updatedValue;
            }
            if (temp->element != value) {
                cout << "NO SUCH VALUE IS PRESENT." << endl;
            }
        }
    }

    Node<T> *findParentToDelete(Node<T> *temp, Queue<Node<T> *> &Q, T value) {
        if (temp->element == value) {
            return temp;
        } else {
            if (temp->left != nullptr) {
                Q.enqueue(temp->left);
            }
            if (temp->right != nullptr) {
                Q.enqueue(temp->right);
            }
            temp = findParentToUpdate(Q.dequeue(), Q, value);
            return temp;
        }
    }

    void deleteNode(T value) {
        if (root->element == value) {
            root = nullptr;
        } else {
            Queue<Node<T> *> Q(countOfElement);
            Node<T> *temp = root;
            Node<T> *temp2;
            temp = findParentToDelete(temp, Q, value);
            while (temp->right != nullptr) {
                temp->element = temp->right->element;
                temp = temp->right;
            }
            temp2 = temp->parent;
            temp2->countOfChildren--;
            if (temp2->left == temp) {
                delete temp;
                temp2->left = nullptr;
            } else {
                delete temp;
                temp2->right = nullptr;
            }
            countOfElement--;
            height = log2(countOfElement);
        }
    }

    void display() {
        Node<T> *temp = root;
        int j;
        for (int i = 0; i <= height; i++) {
            j = height;
            while (j > i) {
                cout << " ";
                j--;
            }
            dl(temp, i);
            cout << endl;
        }
    }

    void dl(Node<T> *temp, int level) {
        if (level == 0) {
            cout << temp->element << " ";
        } else if (level > 0) {
            if (temp->left != nullptr) {
                dl(temp->left, level - 1);
            } else {
                cout << "null" << " ";
            }
            if (temp->right != nullptr) {
                dl(temp->right, level - 1);
            } else {
                cout << "null" << " ";
            }
        }
    }

    bool checkIfItIsCompleteOrNot() {
        Queue<Node<T> *> Q(countOfElement);
        Stacks<Node<T> *> S(countOfElement);
        Node<T> *temp = root;
        bool check = false;
        Q.enqueue(temp);
        while (!Q.isEmpty()) {
            temp = Q.dequeue();
            if (temp->left != nullptr) {
                if (check)
                    return false;
                Q.enqueue(temp->left);
            } else {
                return true;
            }
            if (temp->right != nullptr) {
                if (check)
                    return false;
                Q.enqueue(temp->right);
            } else {
                return true;
            }
        }
        return true;
    }


    void menu() {
        int opt;
        do {
            cout << "\nENTER CHOICE." << endl;
            cout << "1.INSERT." << endl;
            cout << "2.DISPLAY." << endl;
            cout << "3.UPDATE ELEMENT." << endl;
            cout << "4.DELETE ELEMENT." << endl;
            cout << "5.CHECK." << endl;
            cout << "6.EXIT." << endl;
            cin >> opt;
            if (opt == 1) {
                T value;
                cout << "\t\t\tENTER VALUE TO INSERT = ";
                cin >> value;
                insert(value);
            }
            if (opt == 2) {
                display();
            }
            if (opt == 3) {
                T value;
                T updateElement;
                cout << "\t\t\tENTER VALUE TO CHECK = ";
                cin >> value;
                cout << "\t\t\tENTER VALUE TO UPDATE WITH = ";
                cin >> updateElement;
                update(value, updateElement);
                display();
            }
            if (opt == 4) {
                T value;
                cout << "\t\t\tENTER VALUE TO CHECK = ";
                cin >> value;
                deleteNode(value);
                display();
            }
            if (opt == 5) {
                if (checkIfItIsCompleteOrNot()) {
                    cout << "IS COMPLETE." << endl;
                } else {
                    cout << "IS NOT COMPLETE." << endl;
                }
            }
            if (opt == 6) {
                cout << "YOU CHOOSE TO EXIT." << endl;
                exit(0);
            }
        } while (opt >= 1 && opt <= 6);
    }

    ~BinaryTree() {
        Stacks<Node<T> *> S(countOfElement);
        Queue<Node<T> *> Q(countOfElement);
        Node<T> *temp = root;
        Q.enqueue(temp);
        while (!Q.isEmpty()) {
            temp = Q.dequeue();
            if (temp->left != nullptr) {
                Q.enqueue(temp->left);
            }
            if (temp->right != nullptr) {
                Q.enqueue(temp->right);
            }
            S.push(Q.dequeue());
            if (!Q.isEmpty()) {
                temp = Q.showFront();
            }
        }
        while (!S.isEmpty()) {
            temp = S.pop();
            delete temp;
        }
        root = nullptr;
        countOfElement = 0;
    }
};