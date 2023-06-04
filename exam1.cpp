#include <iostream>

using namespace std;

int fl(int);

int main()
{
    int a;
    for (int x = 3; x <= 5; x++)
    {
       a=f1(x);
       cout<<a;
    }
    return 0;
    
}
int fl(int i){
    if (i <= 5)
    {
        cout<< i;
    }
    return i;
    
}