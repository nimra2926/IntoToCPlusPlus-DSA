//
// Created by Lenovo on 12/1/2022.
//
#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
    graph g(4);
    g.addEdges();
    cout << "THE MATRIX IS . ";
    g.displayMat();                                 //calling
    g.findSolution();
}

