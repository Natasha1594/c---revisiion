#include <iostream>
using namespace std;


//this is a function outside the main that will calculate the sum and called into the main
int sum(int arr[], int n){
    int sum = 0;
    for ( int i = 0; i < n; i++)
    {
       sum+= arr[i];

    }

    return sum;
    
}











//the function above is called in the main 
int main()
{

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total = sum(arr, n);
    cout<<"Sum of array elements is: "<< total << endl;

    return 0;
}