#include <iostream>
#include<cmath>
using namespace std;

int main(void)
{
    int num = 9742,d;

    for (int i = 3; i >= 0; i--)
    {
        d=num/int(pow(10,i));
        cout<<d<<endl;
        num%=int(pow(10,i));
    }
    return 0;
}