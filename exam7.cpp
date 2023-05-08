#include <iostream>

using namespace std;

int power(int y)
{
    return pow(y,3);
}
int F(int x)
{
    return power(x)*2;
}

int main()
{
    cout<<F(2);
    return 0;
}