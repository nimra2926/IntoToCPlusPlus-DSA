//
// Created by Lenovo on 12/5/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK8_LABTASK_A_BSCE21012_BST_H
#define INC_2022_FALL_CE_DSA_WEEK8_LABTASK_A_BSCE21012_BST_H

#endif //INC_2022_FALL_CE_DSA_WEEK8_LABTASK_A_BSCE21012_BST_H

#include "Stacks.h"
#include <iostream>
#include "Queues.h"
#include "Node.h"

using namespace std;

template<typename T>
class BST {
public:
    Node<T> *root;
    int countOfElement;
    int height;

    BST() {
        root = nullptr;
        countOfElement = 0;
        height = 0;
    }

    void insert(Node<T> *temp, T value) {
        auto *temp1 = new Node<T>(value);
        if (root == nullptr) {
            root = temp1;
        } else {
            if (value < temp->element) {
                if (temp->left != nullptr) {
                    insert(temp->left, value);
                } else {
                    temp->left = temp1;
                }
            }
            if (value >= temp->element) {
                if (temp->right != nullptr) {
                    insert(temp->right, value);
                } else {
                    temp->right = temp1;
                }
            }
        }
    }

    void insertNode(T key) {
        insert(root, key);
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

    void DFSPostorder(Node<T> *temp) {
        if (temp == nullptr) {
            return;
        }
        DFSPostorder(temp->left);
        DFSPostorder(temp->right);
        cout << temp->element << " ";
    }

    void display_bft(Node<T> *leaf) {
        Queue<Node<T> *> q; //MAKE QUEUE POINTER OF NODE TYPE
        q.enqueue(leaf);   //TO START PUSHING ROOT IN QUEUE
        while (!q.isEmpty())  //WHILE QUEUE IS FILLED LOOP WILL RUN
        {
            Node<T> *temp = q.showFront(); //STORE FIRST VALUE OF QUEUE

            cout << temp->element << " "; //DISPLAY THAT VALUE
            q.dequeue();    //POPING FIRST VALUE
            //IF CHILDREN EXIST STORE THEM IN QUEUE
            if (temp->left != nullptr) {
                q.enqueue(temp->left);
            }
            if (temp->right != nullptr) {
                q.enqueue(temp->right);
            }
        }
    }

    bool search(Node<T> *temp, T value) {
        if (temp == nullptr) {
            return false;
        }
        if (temp->element == value) {
            return true;
        }
        if (value < temp->element) {
            return search(temp->left, value);
        }
        if (value > temp->element) {
            return search(temp->right, value);
        }
    }

    bool search(int key) {
        return search(root, key);
    }

    Node<T> *inorderMin(Node<T> *temp) {

        while (temp && temp->left != nullptr) {
            temp = temp->left;
        }
        return temp;
    }

    Node<T> *deleteNode(Node<T> *temp, int key) {
        if (temp != nullptr) {
            if (key < temp->element) {
                temp->left = deleteNode(temp->left, key);
            } else if (key > temp->element) {
                temp->right = deleteNode(temp->right, key);
            } else {
                if (temp->left == nullptr) {
                    Node<T> *temp1 = temp->right;
                    free(temp);
                    return temp1;
                }
                if (temp->right == nullptr) {
                    Node<T> *temp1 = temp->left;
                    free(temp);
                    return temp1;
                }
                if (temp->left != nullptr && temp->right != nullptr) {
                    Node<T> *newTemp = inorderMin(temp->right);
                    temp->element = newTemp->element;
                    temp->right = deleteNode(temp->right, temp->element);
                }
            }
        }
        return temp;
    }

    void update(T key, T updated) {
        if (search(key)) {
            deleteNode(root, key);
            insertNode(updated);
        } else {
            cout << "ARE YOU MAD??" << endl;
        }
    }

    bool isBSTUtil(Node<T> *temp, Node<T> *&prev) {
        // traverse the tree in inorder fashion and
        // keep track of prev node
        if (temp) {
            if (!isBSTUtil(temp->left, prev))
                return false;

            // Allows only distinct valued nodes
            if (prev != NULL && temp->element <= prev->element)
                return false;

            prev = temp;

            return isBSTUtil(temp->right, prev);
        }

        return true;
    }

    void maxHeap(int arr[], int n, int i) {
        int largest = i;
        int left = 2 * i+1;
        int right = 2 * right + 2;
        while (left < n && arr[left] > arr[largest]) {
            largest = left;
        }
        while (right < n && arr[right] > arr[largest]) {
            largest = right;
        }
        if (largest != i) {
            int temp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = temp;
        }
        maxHeap(arr,n,largest);
    }

    void heapSort(int arr[], int n) {
        for (int i = (n / 2)-1; i >= 0; i--) {
            maxHeap(arr, n, i);
        }
        for (int i = n-1; i >= 0; i--) {
            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;
            maxHeap(arr, i, 0);
        }
    }
    void maxheap(Node<T> **head,int n,int i) {
        int larg, l, r, tem, lar;

        larg = i;
        l = (2 * i) + 1;
        r = (2 * i) + 2;

        lar = larg;
        Node<T> *temp = *head;
        while (lar != 0 && lar < n) {
            temp = temp->next;
            lar--;
        }

        Node<T> *temp1 = *head;
        lar = l;
        while (lar != 0 && lar <= n) {
            temp1 = temp1->next;
            lar--;
        }


        if (l < n && temp->data < temp1->data) {
            larg = l;
            lar = l;
            temp = *head;
            while (lar != 0 && lar < n) {
                temp = temp->next;
                lar--;
            }
        }

        lar = r;
        temp1 = *head;
        while (lar != 0 && lar < n) {
            temp1 = temp1->next;
            lar--;
        }


        if (r < n && temp->data < temp1->data) {
            larg = r;
            lar = r;
            temp = *head;
            while (lar != 0 && lar <= n) {
                temp = temp->next;
                lar--;
            }
            if (larg != i) {
                tem = temp->data;
                temp->data = temp1->data;
                temp1->data = tem;

                maxheap(&(*head), n, larg);
            }
        }
    }
    bool isBST(Node<T> *temp) {
        Node<T> *prev = NULL;
        return isBSTUtil(temp, prev);
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
                T key;
                cout << "\t\t\tENTER VALUE TO INSERT = ";
                cin >> key;
                insertNode(key);
            }
            if (opt == 2) {
                cout << "DISPLAYING = ";
//                DFSPreorder(root);
                display();
            }
            if (opt == 3) {
                T key;
                T updated;
                cout << "\t\t\tENTER VALUE TO CHECK = ";
                cin >> key;
                cout << "\t\t\tENTER VALUE TO UPDATE WITH = ";
                cin >> updated;
                update(key, updated);
                DFSPreorder(root);
            }
            if (opt == 4) {
                T value;
                cout << "\t\t\tENTER VALUE TO CHECK = ";
                cin >> value;
                deleteNode(root, value);
                display();
                T key;
                cout << "\t\t\tENTER VALUE TO CHECK = ";
                cin >> key;
                if (search(key)) {
                    cout << "HAVE VALUE." << endl;
                } else {
                    cout << "DO NOT HAVE VALUE." << endl;
                }
            }
            if (opt == 5) {
//              if(isBST(root)){
//                  cout<<"IS BSt."<<endl;
//              }
//              else{
//                  cout<<"IS NOT."<<endl;
//              }
                int n;
                cout << "ENTER SIZE = ";
                cin >> n;
                int arr[n];
                cout << "ENTER VALUE = ";
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                cout << "\n\nBEFORE HEAP SORT= ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << "\n\nAFTER HEAP SORT= ";
                heapSort(arr, n);
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
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
                display_bft(root);
            }
            if (opt == 10) {
                cout << "YOU CHOOSE TO EXIT." << endl;
                exit(0);
            }
        } while (opt >= 1 && opt <= 10);
    }
};