//
// Created by Lenovo on 10/25/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK9_LABTASK_A_BSCE21012_FUNCTIONS_H
#define INC_2022_FALL_CE_DSA_WEEK9_LABTASK_A_BSCE21012_FUNCTIONS_H

#endif //INC_2022_FALL_CE_DSA_WEEK9_LABTASK_A_BSCE21012_FUNCTIONS_H

#include <iostream>

using namespace std;

class node {
public:
    int data;
    node *right;
    node *left;
    node *parent;

    node() {
        data = 0;
        left = nullptr;
        right = nullptr;
        parent = nullptr;
    }

    node(int val) {
        data = val;
        right = nullptr;
        left = nullptr;
        parent = nullptr;
    }
};

class linklist {
public:
    node *root;

    linklist() {
        root = nullptr;
    }
    node *Insert(node *temp, int key) {
        if (temp == nullptr) {
            temp = new node;
            temp->data = key;
            temp->left = nullptr;
            temp->right = nullptr;
            temp->parent = nullptr;
        }

        else if (temp->data < key) {
            temp->right = Insert(temp->right, key);
            temp->right->parent = temp;
        }

        else {
            temp->left = Insert(temp->left, key);
            temp->left->parent = temp;
        }
        return temp;
    }
    void print( node *temp)
    {
        if(temp == nullptr)
            return;
        print(temp->left);
        cout<<temp->data;
        print(temp->right);
    }
    node* deleteNode(node* temp, int val) {
        if (temp == nullptr) {
            return nullptr;
        }
        temp->left = deleteNode(temp->left, val);
        temp->right = deleteNode(temp->right, val);
        // checking the current node data with x
        if (temp->data == val && temp->left == nullptr && temp->right == nullptr) {
            // deleting the node
            return nullptr;
        }
        return root;
    }


};