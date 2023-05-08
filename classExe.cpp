#include <iostream>
using namespace std;

int main(){
    int size = 10;
    int arr[size];
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the 10 integers: ";
        cin >> arr[i];

        if (arr[i] == num)
        {
            cout<<"The number entered is in the array"<<num<<endl;
        }
        else{
            cout<<"The number entered is not in the arrary"<<num<<endl;
        }
        
        
    }
    
}