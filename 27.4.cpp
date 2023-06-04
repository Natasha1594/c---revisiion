#include <iostream>
using namespace std;

int main() {
  const int rows = 3;
  const int cols = 4;
  
  int myArray[rows][cols] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };
  
  // Accessing and printing the elements of the array
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << myArray[i][j] << " ";
    }
    cout << endl;
  }
  
  return 0;
}
