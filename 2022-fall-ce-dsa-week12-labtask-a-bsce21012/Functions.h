//
// Created by Lenovo on 11/15/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK12_LABTASK_A_BSCE21012_FUNCTIONS_H
#define INC_2022_FALL_CE_DSA_WEEK12_LABTASK_A_BSCE21012_FUNCTIONS_H

#endif //INC_2022_FALL_CE_DSA_WEEK12_LABTASK_A_BSCE21012_FUNCTIONS_H

#include <iostream>
#include <iomanip>

using namespace std;

class graph {
public:
    int ver;                                                                        //declaring
    int **mat;

    graph(int v) {
        ver = v;                                                                //copying
        mat = new int *[ver];                                                       //allocating memory to rows
        for (int i = 0; i < ver; i++) {
            mat[i] = new int[ver];                                   //allocating memory to each column
            for (int j = 0; j < ver; j++) {
                mat[i][j] = 0;                                 //at first storing zeros
            }
        }
    }

    void displayMat() {
        cout << "\n\n" << setw(4) << " ";
        for (int i = 0; i < ver; i++) {
            cout << setw(3) << "( " << i << " )";           //displaying the nodes 0,1,2,3 etc.
        }
        cout << "\n\n";
        for (int i = 0; i < ver; i++) {
            cout << setw(3) << "( " << i << " )" << " ";             //displaying the nodes
            for (int j = 0; j < ver; j++) {
                cout << setw(4) << mat[i][j]
                     << " ";                    //displaying that weather the nodes is present at that point or not by zero or 1
            }
            cout << "\n\n";
        }
    }

    void addEdges() {
        for (int i = 0; i < ver; i++) {
            for (int j = 1; j < ver; j++) {                                         //loops for adding an edge
                if (i != j) {             //if i and j are not equal.
                    cout << "ENTER 1 IF THE VERTEX " << i << " IS ADJACENT TO " << j << ",OTHERWISE ENTER 0";
                    cin
                            >> mat[i][j];                      //entering zero and 1,1 if the nodes are present and zero if not
                    if (mat[i][j] != 1) {
                        if (mat[i][j] !=
                            0) {                       //checking if the user has enter a number other than 1 and zero
                            cout << "INVALID ARGUMENT." << endl;
                            exit(3);
                        }
                    }
                    mat[j][i] = mat[i][j];                //bcz the direction does not matter
                } else {
                    mat[i][j] = 0;                  //if the i and j are equal then store zero
                }
            }
        }
    }

    void deleteEdge(int v1, int v2) {

        cout << "ENTER V1 = ";                      //taking vertexes
        cin >> v1;
        cout << "ENTER V2 = ";
        cin >> v2;
        if (v1 >= ver) {             //checking if they are smaller than the vertex given by us in the start
            cout << "VERTEX NOT PRESENT." << endl;
        } else {
            if (v2 >= ver) {                                      //checking again
                cout << "VERTEX NOT PRESENT." << endl;
            } else {
                mat[v1][v2] = 0;                        //then storing it to zero
            }
        }
    }

    void deleteNode(int node) {
        cout << "ENTER NODE = ";
        cin >> node;                                          //taking node
        if (node < ver) {
            for (int i = 0; i < ver; i++) {
                mat[i][node] = 0;                               //then putting every node to zero
                for (int j = 0; j < ver; j++) {
                    mat[node][j] = 0;
                }
            }
        }
    }

    void update(int v1, int v2) {

        cout << "ENTER VERTEX V1 WHICH YOU WANT TO UPDATE = ";                  //taking vertexes
        cin >> v1;
        cout << "ENTER VERTEX V2 WHICH YOU WANT TO UPDATE = ";
        cin >> v2;
        if (v1 >= ver) {
            cout << "VERTEX NOT PRESENT." << endl;                   //checking if small
        } else {
            if (v2 >= ver) {
                cout << "VERTEX NOT PRESENT." << endl;
            } else {
                if (mat[v1][v2] == 1) {
                    mat[v1][v2] = 0;                  //checking if the value is 1 then putting it to zero
                } else {
                    mat[v1][v2] = 1;               //otherwise 1
                }
            }
        }
    }

    void check(int v1, int v2) {
        cout << "ENTER VERTEX V1 WHICH YOU WANT TO UPDATE = ";
        cin >> v1;
        cout << "ENTER VERTEX V2 WHICH YOU WANT TO UPDATE = ";
        cin >> v2;
        if (v1 >= ver) {
            cout << "VERTEX NOT PRESENT." << endl;
        } else {
            if (v2 >= ver) {
                cout << "VERTEX NOT PRESENT." << endl;
            } else {
                if (mat[v1][v2] == 1) {                          //if the value is 1 then it means the element is 1
                    cout << "THE ELEMENT IS PRESENT." << endl;
                } else {
                    cout << "THE ELEMENT IS NOT PRESENT." << endl;
                }
            }
        }

    }
};
