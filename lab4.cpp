#include <iostream>
using namespace std;

#define MAX_ROWS 100
#define MAX_COLS 100

void transpose(char matrix[MAX_ROWS][MAX_COLS], char transposed[MAX_COLS][MAX_ROWS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    char matrix[MAX_ROWS][MAX_COLS];
    char transposed[MAX_COLS][MAX_ROWS];
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter the matrix elements (single characters):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    transpose(matrix, transposed, rows, cols);

    cout << "Transposed matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
