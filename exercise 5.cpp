#include <iostream>
using namespace std;

int main() {
  const int row = 5;
  const int col = 5;
  int arr[row][col];

  // Store values in the array
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << "Enter value for arr[" << i << "][" << j << "]: ";
      cin >> arr[i][j];
    }
  }

  // Display 1 for odd numbers and 0 for even numbers
  cout << "The array values are:\n";
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (arr[i][j] % 2 == 0) {
        cout << "0 ";
      } else {
        cout << "1 ";
      }
    }
    cout << endl;
  }

  return 0;
}
