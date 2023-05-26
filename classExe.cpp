#include <iostream>
using namespace std;

void displayArray(int arr[][3], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int rows = 4;
    const int columns = 3;
    
    int array[rows][columns] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
    
    displayArray(array, rows, columns);
    
    return 0;
}
