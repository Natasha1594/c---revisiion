#include <iostream>

using namespace std;

void display(int arr[])
{
    for(int i = 0; i<4; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int input[5] = {4,8,12,7}, output[4], count = 4;
    for(int i = 0; i<5;i++)
    {
        output[i] = 2*(input[count-i-1]);
    }
    display(output);
    return 0;
}