//
// Created by Lenovo on 12/1/2022.
//

#ifndef INC_2022_FALL_CE_DSA_WEEK15_LABTASK_A_BSCE21012_FUNCTIONS_H
#define INC_2022_FALL_CE_DSA_WEEK15_LABTASK_A_BSCE21012_FUNCTIONS_H

#endif //INC_2022_FALL_CE_DSA_WEEK15_LABTASK_A_BSCE21012_FUNCTIONS_H

#include <iostream>
#include <iomanip>

using namespace std;

class graph {
public:
    int ver;                                                                        //declaring
    int **mat;
    int **solArray;
    int rightPath;
    int downPath;

    explicit graph(int v) {
        cout << "ENTER THE NUMBER OF VERTEX = ";
        cin >> v;
        ver = v;                            //copying
        rightPath = 0;
        downPath = 0;
        mat = new int *[ver];                                                       //allocating memory to rows
        for (int i = 0; i < ver; i++) {
            mat[i] = new int[ver];                                   //allocating memory to each column
            for (int j = 0; j < ver; j++) {
                mat[i][j] = 0;                                 //at first storing zeros
            }
        }
        solArray = new int *[ver];                                                       //allocating memory to rows
        for (int i = 0; i < ver; i++) {
            solArray[i] = new int[ver];                                   //allocating memory to each column
            for (int j = 0; j < ver; j++) {
                solArray[i][j] = 0;                                 //at first storing zeros
            }
        }
    }

    void displayMat() const {
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

    void displaySolutionMat() const {
        cout << "\n\n" << setw(4) << " ";
        for (int i = 0; i < ver; i++) {
            cout << setw(3) << "( " << i << " )";           //displaying the nodes 0,1,2,3 etc.
        }
        cout << "\n\n";
        for (int i = 0; i < ver; i++) {
            cout << setw(3) << "( " << i << " )" << " ";             //displaying the nodes
            for (int j = 0; j < ver; j++) {
                cout << setw(4) << solArray[i][j]
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

    bool safePath(int sourceVertex1, int sourceVertex2, int destinationVertex1, int destinationVertex2) {
        rightPath = sourceVertex1;
        downPath = sourceVertex2;
        if ((rightPath >= 0 && rightPath <= destinationVertex1) && (downPath >= 0 && downPath <= destinationVertex2) &&
            mat[rightPath][downPath] == 1 &&                        //checking that the points added are in the matrix and the matrix is 1 or not
            solArray[rightPath][downPath] != 1) {
            return true;
        } else {
            return false;
        }
    }

    bool ratInMaze(int sourceVertex1, int sourceVertex2, int destinationVertex1, int destinationVertex2) {
        rightPath = sourceVertex1;
        downPath = sourceVertex2;
        if (rightPath == destinationVertex1 && downPath == destinationVertex2 && mat[rightPath][downPath] == 1) {
            solArray[rightPath][downPath] = 1;    //the base condition
            return true;
        }
        if (safePath(sourceVertex1, sourceVertex2, destinationVertex1, destinationVertex2)) {
            solArray[rightPath][downPath] = 1;                      //checking if it is safe if it is then putting 1 at sol matrix

            if (ratInMaze(sourceVertex1 - 1, sourceVertex2, destinationVertex1, destinationVertex2)) {
                return true;            //checking left side
            }
            if (ratInMaze(sourceVertex1 + 1, sourceVertex2, destinationVertex1, destinationVertex2)) {
                return true;        //checking right side
            }
            if (ratInMaze(sourceVertex1, sourceVertex2 + 1, destinationVertex1, destinationVertex2)) {
                return true;        //checking downward
            }
            if (ratInMaze(sourceVertex1, sourceVertex2 - 1, destinationVertex1, destinationVertex2)) {
                return true;        //checking upward
            }
            solArray[rightPath][downPath] = 0;          //if none of them is true then put zero on sol mat and return false
            return false;
        }
        return false;
    }
    bool findSolution() {
        if (!ratInMaze(0, 0, 3, 2)) {
            cout << "NO PATH FOUND." << endl;               //checking if path exist
            return false;
        } else {
            cout << "THE SOLUTION MATRIX IS . ";
            displaySolutionMat();               //if it does then display
            cout << "THE PATH TAKEN = ";
            for (int i = 0; i < ver; i++) {
                for (int j = 0; j < ver; j++) {
                    if (solArray[i][j] == 1) {
                        cout << "(" << i << ")" << "(" << j << ")" << "->";     //the path
                    }
                }
            }
            cout << "REACHED." << endl;
        }

        return true;
    }


};