#include <iostream>
using namespace std;

int main(void){
    int num;
    cout<<"Enter a number\n";
    cin>>num;

    if (num >=10 && num>=20)
    {
        cout<<"Number is between 10 and 20";
    }else{
        cout<<"Number is not between 10 and 20";
    }
    return 0;
}