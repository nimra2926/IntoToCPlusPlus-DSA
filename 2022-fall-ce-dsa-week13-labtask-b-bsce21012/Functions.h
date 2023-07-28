//
// Created by Lenovo on 11/24/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK13_LABTASK_B_BSCE21012_FUNCTIONS_H
#define INC_2022_FALL_CE_DSA_WEEK13_LABTASK_B_BSCE21012_FUNCTIONS_H

#endif //INC_2022_FALL_CE_DSA_WEEK13_LABTASK_B_BSCE21012_FUNCTIONS_H

#include <iostream>
#include <iomanip>

using namespace std;

class graph {
public:
    int ver;                                                                        //declaring
    int **mat;
    int weight;

    graph(int v) {
        ver = v;                  //copying
        weight = 0;
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

    void addEdges() const {
        for (int i = 0; i < ver; i++) {
            for (int j = 0; j < ver; j++) {                                         //loops for adding an edge
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
                }
                if (i == j) {
                    cout << "ENTER 1 IF THE VERTEX " << i << " IS ADJACENT TO " << j << ",OTHERWISE ENTER 0";
                    cin >> mat[i][j];
                    if (mat[i][j] != 1) {
                        if (mat[i][j] !=
                            0) {                       //checking if the user has enter a number other than 1 and zero
                            cout << "INVALID ARGUMENT." << endl;
                            exit(3);
                        }
                    }
                }
            }
        }
    }

    void deleteEdge(int v1, int v2) const {

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

    void deleteNode(int node) const {
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
                cout << "ENTER WEIGHT = ";
                cin >> weight;
                mat[v1][v2] = weight;                  //checking if the value is 1 then putting it to zero
            }
        }
    }

    void check(int v1, int v2) const {
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
                if (mat[v1][v2] != 0) {                          //if the value is 1 then it means the element is 1

                    cout << "THE ELEMENT IS PRESENT." << endl;
                } else {
                    cout << "THE ELEMENT IS NOT PRESENT." << endl;
                }
            }
        }
    }

    void traverse(int node, bool visitedArray[]) {
        visitedArray[node] = true;                                     //initialize as visited
        for (int i = 0; i < ver; i++) {
            if (mat[node][i]) {
                if (!visitedArray[i])
                    traverse(i, visitedArray);
            }
        }
    }

    bool isConnected() {
        bool *vis = new bool[ver];
        for (int i; i < ver; i++) {
            for (int j = 0; j < ver; j++)
                vis[j] = false; //initialize node as not visited
            traverse(i, vis);
            for (int k = 0; k < ver; k++) {
                if (!vis[k])         //if the node is not visited then graph is acyclic
                    return false;
            }
        }
        return true;
    }

    void addWeight() {
        for (int i = 0; i < ver; i++) {
            for (int j = 0; j < ver; j++) {                          //applying nested loops and checking the one and putting weights at the specific index
                if (mat[i][j] != 0) {
                    cout << "ENTER WEIGHT YOU WANT TO PUT AT " << i << " AND " << j << " =";
                    cin >> weight;             //taking input
                    mat[i][j] = weight;                      //storing
                }
            }
        }
    }

    void graphRepresentationIn2d() {
        cout << "\n\n" << setw(4) << " ";
        cout << setw(3) << "WEIGHT " << setw(5) << "1st VERTEX " << setw(5)
             << "2nd VERTEX";                                                        //displaying the nodes 0,1,2,3 etc.
        cout << "\n\n";
        for (int i = 0; i < ver; i++) {
            for (int j = 0; j <=3; j++) {
                if (mat[i][j] != 0) {
                    cout << setw(7) << mat[i][j] << " " << setw(8);
                    cout << i << " " << setw(8);                        //displaying the mat weight and vertex
                    cout << j;
                }
            }
            cout << endl;
        }
    }
    void changeIntoAcyclic() {
        int max = mat[0][0];
        for (int i = 0; i < ver; i++) {
            for (int j = 0; j <= 3; j++) {
                if (mat[i][j] > max) {
                    max = mat[i][j];                           //taking max weight
                }
            }
        }
        int temp;
        int temp1;
        for (int i = 0; i < ver; i++) {
            for (int j = 0; j <= 3; j++) {
                if (mat[i][j] == max) {
                    cout << "THE VERTEX " << i << " AND VERTEX " << j << " HAVE THE HIGHEST WEIGHT = " << mat[i][j]<<endl;
                    temp = i;                               //taking index i=of the max
                    temp1 = j;
                }
            }
        }
        for (int i = 0; i < ver; i++) {
            for (int j = 0; j <= 3; j++) {
                mat[temp][temp1]=0;                            //storing at to zero
            }
        }
    }
};
