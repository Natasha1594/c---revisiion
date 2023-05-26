#include <iostream>
using namespace std;



void display_array(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Create a two-dimensional array with 4 rows and 3 columns
    int array[4][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9},
                       {10, 11, 12}};

    // Display the array elements in row-column order
    display_array(array, 4);

    return 0;
}
