#include <iostream>
using namespace std;

int main() {
    int row1, col1, row2, col2;

    // Input the dimensions of the matrices
    cout << "Enter the number of rows and columns for Matrix 1 (m x n): ";
    cin >> row1 >> col1;
    cout << "Enter the number of rows and columns for Matrix 2 (n x p): ";
    cin >> row2 >> col2;

    // Matrix multiplication is possible only if col1 == row2
    if (col1 != row2) {
        cout << "Matrix multiplication is not possible. The number of columns of Matrix 1 must be equal to the number of rows of Matrix 2." << endl;
        return 0;
    }

    // Declare matrices
    int data1[row1][col1], data2[row2][col2], result[row1][col2];

    // Input elements for the first matrix
    cout << "Enter elements for Matrix 1:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> data1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements for Matrix 2:" << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> data2[i][j];
        }
    }

    // Display the first matrix
    cout << "Matrix 1:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cout << data1[i][j] << " ";
        }
        cout << endl;
    }

    // Display the second matrix
    cout << "Matrix 2:" << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cout << data2[i][j] << " ";
        }
        cout << endl;
    }

    // Initialize the result matrix with zeros
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication (dot product)
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += data1[i][k] * data2[k][j];  // dot product
            }
        }
    }

    // Display the resulting matrix
    cout << "Resultant Matrix after multiplication:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
