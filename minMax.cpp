#include <iostream>
using namespace std;

int main(){
    int arr[5] = {};
    int max = arr[0], min = arr[0];




    for (int i = 0; i < 5; i++)
    {
       if (arr[i] > max)
       {
        max = arr[i];
       }
       if (arr[i] < min)
       {
         min = arr[i];
       }
       
        

    }
        cout << "Maximum element in the array: " << max << endl;
        cout << "Minimum element in the array: " << min << endl;
   return 0; 
}
