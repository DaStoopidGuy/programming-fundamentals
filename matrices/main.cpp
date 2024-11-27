#include <iostream>
using namespace std;

int main() {
    // Declare 2 Matrices
    // int or float??
    // TESTING: hardcode matrix A and B instead of input
    int matA[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int matB[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
/*
    // Take user input of both matrices
    // matA input
    cout << "Matrix A Input:\n";
    for (int i=0; i<3; i++)
        for (int j=0; j<4; j++)
        {
            cout << "Matrix A, [" << i << "][" << j << "]: ";
            cin >> matA[i][j];
        }

    // matB input
    cout << "Matrix B Input:\n";
    for (int i=0; i<3; i++)
        for (int j=0; j<4; j++)
        {
            cout << "Matrix B, [" << i << "][" << j << "]: ";
            cin >> matB[i][j];
        }
*/


    // print Matrices A + B
    cout << "Matrix A + B\n";
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<4; j++)
            cout << matA[i][j] + matB[i][j] << "\t";
        cout << "\n";
    }

    // print Matrices A - B
    cout << "Matrix A - B\n";
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<4; j++)
            cout << matA[i][j] - matB[i][j] << "\t";
        cout << "\n";
    }

    // print transpose of Matrix A
    int matTransposed[4][3];
    cout << "Transpose of Matrix A\n";
    for (int j=0; j<4; j++)
    {
        for (int i=0; i<3; i++)
        {
            matTransposed[i][j] = matA[i][j];
            // cout << matA[i][j] << "\t";
            // cout << matTransposed[i][j] << "\t";
        }
        cout << "\n";
    }

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<3; j++)
            cout << matTransposed[i][j] << "\t";

        cout << "\n";
    }

    return 0;
}
