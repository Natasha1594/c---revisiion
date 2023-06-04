#include <iostream>

using namespace std;

int functionl(int y)
{
    int i;
    for(i = 0; i < 5; i += 2)
    {
        y += i;
    }
    cout<<y<< " ";
    return y;
}

int main(void)
{
    int x = 10;
    functionl(x);
    cout<<x<<endl;
    return 0;
}