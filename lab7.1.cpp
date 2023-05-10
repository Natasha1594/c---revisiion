#include <iostream>
using namespaces std;

void printArrary(int arr[][3], int m, int n){
    for (int i = 0; i < m; i++) //row
    {
        for (int j = 0; j < n; i++)//column
        {
           cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}
