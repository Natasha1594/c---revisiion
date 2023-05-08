#include <iostream>
using namespace std;

int main(){
    int value[10];
    

    for (int i = 0; i < 10; i++)
    {
        cout <<"Enter a value: ";
        cin >>value[i];

    }

    int large[value[0]] ;
    for (int i = 1; i < 10; i++)
    {
       if (value[i] > large) {
            large = large[i];
        }
    }
    
    int large_arr[1] = {};
    
   cout << "The largest value is: " << large << endl;
    
}