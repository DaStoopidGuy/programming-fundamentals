#include <iostream>
using namespace std;

int main() {
    // Declaring Matrices A and B 
    // 3x3 matrices
    int matA[3][3] = {
        {3, 7, 4},
        {2, 1, 5},
        {9, 8, 6}
    };
    int matB[3][3] = {
        {1, 5, 2},
        {7, 6, 3},
        {4, 7, 5}
    };

    // Print A + B
    cout << "A + B\n";
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << matA[i][j] + matB[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << endl;

    // Print A - B
    cout << "A - B\n";
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << matA[i][j] - matB[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << endl;

    // TODO: Print A * B

    cout << "A * B\n";
    int matC[3][3];

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            /*matC[i][j] = dd*/
            int result = 0;
            for (int k=0; k<3; k++){
                result +=  matA[i][k] * matB[k][j];
            }
            matC[i][j] = result;
            cout << matC[i][j] << "\t";
        }
        cout<<"\n";
    }

    cout << endl;


    // Print Transpose of Matrix A
    cout << "Transpose of Matrix A\n";
    for (int j=0; j<3; j++) {
        for (int i=0; i<3; i++){
            cout << matA[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}
