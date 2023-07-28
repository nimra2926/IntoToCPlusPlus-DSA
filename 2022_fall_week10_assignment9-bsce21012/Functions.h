//
// Created by Lenovo on 11/6/2022.
//

#ifndef INC_2022_FALL_WEEK10_ASSIGNMENT9_BSCE21012_FUNCTIONS_H
#define INC_2022_FALL_WEEK10_ASSIGNMENT9_BSCE21012_FUNCTIONS_H

#endif //INC_2022_FALL_WEEK10_ASSIGNMENT9_BSCE21012_FUNCTIONS_H

#include <iostream>

using namespace std;

class node {
public:
    int data;
    node *left;                                          //declaring
    node *right;

    node(int d) {
        data = d;
        left = nullptr;                                     //initializing
        right = nullptr;
    }

    static node *newNode(int val) {
        cout << "ENTER VALUE TO ENTER OF CHILD\nENTER -1 FOR NO VALUE." << endl;     //taking value
        cin >> val;
        if (val < 0 && val != -1) {                              //checking that if the value is less than zero and is not equal to -1 then the value is negative
            cout << "VALUE ENTERED IS NEGATIVE." << endl;
        }
        if (val == -1) {
            return nullptr;        //if value is negative then return null
        }
        node *temp = new node(val);
        temp->data = val;                      //making a new pointer and then storing the val in the data
        temp->right = nullptr;                   //pointing right and left to null
        temp->left = nullptr;
        return temp;
    }

    node *insert(node *root, int val) {            //in case of inserting
        if (root == nullptr) {
            node *temp1 = newNode(val);         //if the roll is null then make a new temp and store the value in it
            return temp1;                    //then return temp
        }
        if (root->left == nullptr) {                 //if the left side is null

            root->left = insert(root->left, data);        //call the insert function on left side of tree
        }
        if (root->right == nullptr) {
            root->left = insert(root->left, data);       //call the insert function on left side of tree
        }
        return root;
    }

    void deleteTree(node *root) {
        if (root == nullptr)                            //if root is null
            return;

        deleteTree(root->left);                //calling the left side of the tree
        deleteTree(root->right);                  //calling the left side of the tree

        cout << "\n Deleting node: " <<root->data;    //displaying
        delete root;                              //deleting
    }

    int height(node *root) {
        if (root == nullptr)                           //checking that if the root is null
            return 0;
        else {
            int left_side;
            int right_side;                           //declaring
            left_side = height(root->left);                         //calling left and right side of trees and storing then in the variables
            right_side = height(root->right);
            if (left_side >= right_side) {            //if left is equal or greater than display the left by adding 1 to it
                return left_side + 1;
            } else {
                return right_side + 1;       //if right is greater than display the right by adding 1 to it
            }
        }
    }

    int size(node *root) {
        if (root == nullptr)                //checking if the root is null
            return 0;
        else {
            int left_side;                          //declaring
            int right_side;
            left_side = size(root->left);
            right_side = size(root->right);                    //calling left and right sides and displaying
            return (left_side + 1 + right_side);               //returning by adding left and right as well as 1 to it
        }

    }

    int helper(node *root, int val, int level) {
        if (root == nullptr)
            return 0;                                         //checking if the root is null

        if (root->data == val)                        //if data is equal to val
            return level;

        int downlevel = helper(root->left, val, level + 1);          //calling it by level+1 bcz the level increases and storing it in a variable
        if (downlevel != 0)
            return downlevel;             //if the variable is not zero then display that variable int

        downlevel = helper(root->right, val, level + 1);          //then increase the level and call the function and store the value in a variable
        return downlevel;               //then returning it
    }

    int degree(node *root, int val) {
        return helper(root, val, 1);                     //returning the value coming from the helper function
    }

    bool isLeaf(node *root, int val) {
        if (root != nullptr) {                          //checking if the root is null or not
            if (root->left == nullptr && root->right == nullptr) {           //checking that both the left and right are null or not
                if (root->data == val) {           //if null then checking that the value match with the data stored in root if yes then return tre else false
                    return true;
                } else {
                    return false;
                }
            } else if (root->left) {                 //if the above answer is false then call for the left side and is a recursive call
                isLeaf(root->left, val);
            } else if (root->right) {          //if the above answer is false then call for the left side and is a recursive call
                isLeaf(root->right, val);
            }
        }
        else{
            return false;
        }
    }

    bool isRoot(node *root, int val) {
        if (root == nullptr) {            //checking that the root is null or not
            return false;
        } else {
            if (root->data == val) {               //if not then checking if the value match with teh data stored in root then return true else false
                return true;
            } else {
                return false;
            }
        }
    }

    void display(node *root) {               //a function to display
        if (root == nullptr) {
            return;
        }
        cout << root->data << " ";                      //if root is not null then display
        display(root->left);                      //calling the left side
        display(root->right);                 //calling for the right side of the tree
    }
};