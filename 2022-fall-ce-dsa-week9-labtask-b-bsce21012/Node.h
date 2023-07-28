//
// Created by Lenovo on 12/5/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK9_LABTASK_B_BSCE21012_NODE_H
#define INC_2022_FALL_CE_DSA_WEEK9_LABTASK_B_BSCE21012_NODE_H

#endif //INC_2022_FALL_CE_DSA_WEEK9_LABTASK_B_BSCE21012_NODE_H
using namespace std;

template<typename T>
class Node {
public:
    T element;
    Node<T> *right;
    Node<T> *left;
    Node<T> *parent;
    int countOfChildren;

    Node() {
        right = nullptr;
        left = nullptr;
        parent = nullptr;
        countOfChildren = 0;
        element = 0;
    }

    Node(T data) {
        right = nullptr;
        left = nullptr;
        parent = nullptr;
        countOfChildren = 0;
        element = data;
    }

    ~Node() {
        right = nullptr;
        left = nullptr;
        parent = nullptr;
    }
};