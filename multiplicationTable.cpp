#include <iostream>
using namespace std;

int main(){
    int y;

    cout<<"Enter a number: ";
    cin>>y;

    cout<<"Multiplication table for "<<y<<" up to 10: ";

    for (int i = 0; i <= 10; i++)
    {
        cout<<y<<" * "<<i<<"="<<y * i<< endl;
    }
    

    return 0;
}