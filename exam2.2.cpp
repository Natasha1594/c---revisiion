#include <iostream>

using namespace std;

int temp1, temp2, result = 0;

int f1(int arr[5][5])
{
    for ( temp1 = 0; temp1 < 5; temp1++)
    {
        result += arr[temp1][temp2];
        for (temp2 = 0; temp2 < 5; temp2++)
        {
            result += arr[temp1][temp2];
        }
        
    }
    return result;
}

int main()
{
    int arr[5][5] = {{10,1},{20,2},{30,3},{4,2},{5}};
     cout<<"The dispalyed output: "<<endl;
     cout<<f1(arr);
    return 0;
}