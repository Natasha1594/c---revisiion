#include <iostream>
using namespace std;

int main(){
    int arr[2] [3] = {{},{}};
    {
     int row = sizeof(arr)/ sizeof(arr[0]);
       cout<<row<<endl;

       int column = sizeof(arr[0])/ sizeof(arr[0][0]);
       cout<<column<<endl;
       for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < column; j++)
       {
        
        cin>>arr[i][j];
       }
       
    }
    
    }
    
   
    





    return 0;
}