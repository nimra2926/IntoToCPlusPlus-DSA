//
// Created by Lenovo on 12/5/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK9_LABTASK_B_BSCE21012_BINARYTREE_H
#define INC_2022_FALL_CE_DSA_WEEK9_LABTASK_B_BSCE21012_BINARYTREE_H

#endif //INC_2022_FALL_CE_DSA_WEEK9_LABTASK_B_BSCE21012_BINARYTREE_H

#include <iostream>
#include "Stacks.h"
#include "Queues.h"
#include "Node.h"

using namespace std;

template<typename T>
class BinaryTree {
public:
    Node<T> *root;
    int countOfElement;
    int height;

    BinaryTree() {
        root = nullptr;
        countOfElement = 0;
        height = 0;
    }

    int heightOfTree(Node<T> *temp) {
        int max1;
        if (temp == nullptr) {
            return -1;
        } else {
            int left = heightOfTree(temp->left);
            int right = heightOfTree(temp->right);
            max1 = max(left, right);
        }
        return max1 + 1;
    }

    Node<T> *findParentToInsert(Node<T> *temp, Queue<Node<T> *> &Q, T parentElement) {
        if (temp->element == parentElement) {
            return temp;
        } else {
            if (temp->left != nullptr) {
                Q.enqueue(temp->left);
            }
            if (temp->right != nullptr) {
                Q.enqueue(temp->right);
            }
            temp = findParentToInsert(Q.dequeue(), Q, parentElement);
            return temp;
        }
    }

    void insert(T value, T parentValue) {
        auto temp1 = new Node<T>(value);
        if (root == nullptr) {
            root = temp1;
        } else {
            Queue<Node<T> *> Q(countOfElement);
            Node<T> *temp = root;
            temp = findParentToInsert(temp, Q, parentValue);
            if (temp->countOfChildren == 0) {
                temp->left = temp1;
            } else if (temp->countOfChildren == 1) {
                temp->right = temp1;
            } else {
                cout << "CAN'T ENTER MORE THAN 2 CHILDREN." << endl;
                return;
            }
            temp->countOfChildren++;
            temp1->parent = temp;
        }
        countOfElement++;
    }

    Node<T> *findParentToUpdate(Node<T> *temp, Queue<Node<T> *> &Q, T parentElement) {
        if (temp->element == parentElement) {
            return temp;
        } else {
            if (temp->left != nullptr) {
                Q.enqueue(temp->left);
            }
            if (temp->right != nullptr) {
                Q.enqueue(temp->right);
            }
            temp = findParentToUpdate(Q.dequeue(), Q, parentElement);
            return temp;
        }
    }

    void update(T parentElement, T updatedValue) {
        if (root->element == parentElement) {
            root->element = updatedValue;
        } else {
            Queue<Node<T> *> Q(countOfElement);
            Node<T> *temp = root;
            temp = findParentToUpdate(temp, Q, parentElement);
            temp->element = updatedValue;
        }
    }

    Node<T> *findParentToDelete(Node<T> *temp, Queue<Node<T> *> &Q, T parentElement) {
        if (temp->element == parentElement) {
            return temp;
        } else {
            if (temp->left != nullptr) {
                Q.enqueue(temp->left);
            }
            if (temp->right != nullptr) {
                Q.enqueue(temp->right);
            }
            temp = findParentToDelete(Q.dequeue(), Q, parentElement);
            return temp;
        }
    }

    void deleteNode(T parentElement) {
        Queue<Node<T> *> Q(countOfElement);
        Node<T> *temp = root;
        Node<T> *temp2;
        temp = findParentToUpdate(temp, Q, parentElement);
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
    }

    void display() {
        Node<T> *temp = root;
        height = heightOfTree(temp);
        for (int i = 0; i <= height; i++) {
            int j = height;
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
        }
        if (level > 0) {
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
    // 1
    //2   3
  //4  5 6 7
    bool check(Node<T> *temp) {
        if (temp->left == nullptr && temp->right == nullptr) {
            return true;
        }
        if (temp->left != nullptr && temp->right != nullptr) {
            return (check(temp->left) && check(temp->right));
        }
        return false;
    }

    void DFSInorder(Node<T> *temp) {
        if (temp == nullptr) {
            return;
        }
        DFSInorder(temp->left);
        cout << temp->element << " ";
        DFSInorder(temp->right);
    }

    void DFSPreorder(Node<T> *temp) {
        if (temp == nullptr) {
            return;
        }
        cout << temp->element << " ";
        DFSPreorder(temp->left);
        DFSPreorder(temp->right);
    }

    void DFSPostorder(Node<T> *temp) {
        if (temp == nullptr) {
            return;
        }
        DFSPostorder(temp->left);
        DFSPostorder(temp->right);
        cout << temp->element << " ";
    }

    void BFS() {
        Node<T> *temp = root;
        Queue<Node<T> *> Q(countOfElement);
        Stacks<Node<T> *> S(countOfElement);
        Q.enqueue(temp);
        while (!Q.isEmpty()) {
            temp=Q.dequeue();
            cout<<temp->element<<"->";
            if (temp->left != nullptr) {
                Q.enqueue(temp->left);
            }
            if (temp->right != nullptr) {
                Q.enqueue(temp->right);
            }
        }
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
            cout << "6.DFS INORDER." << endl;
            cout << "7.DFS PREORDER." << endl;
            cout << "8.DFS POSTORDER." << endl;
            cout << "9.BFS." << endl;
            cout << "10.EXIT." << endl;
            cin >> opt;
            if (opt == 1) {
                T value;
                cout << "\t\t\tENTER VALUE TO INSERT = ";
                cin >> value;
                T parentValue;
                cout << "\t\t\tENTER THE VALUE OF THE PARENT YOU WANNA INSERT TO = ";
                cin >> parentValue;
                insert(value, parentValue);
            }
            if (opt == 2) {
                display();
            }
            if (opt == 3) {
                T parentElement;
                T updateElement;
                cout << "\t\t\tENTER VALUE TO CHECK = ";
                cin >> parentElement;
                cout << "\t\t\tENTER VALUE TO UPDATE WITH = ";
                cin >> updateElement;
                update(parentElement, updateElement);
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
                if (check(root)) {
                    cout << "IS FULL COMPLETE TREE." << endl;
                } else {
                    cout << "IS NOT FULL COMPLETE TREE." << endl;
                }
            }
            if (opt == 6) {
                DFSInorder(root);
            }
            if (opt == 7) {
                DFSPreorder(root);
            }
            if (opt == 8) {
                DFSPostorder(root);
            }
            if (opt == 9) {
                BFS();
            }
            if (opt == 10) {
                cout << "YOU CHOOSE TO EXIT." << endl;
                exit(0);
            }
        } while (opt >= 1 && opt <= 10);
    }
};
