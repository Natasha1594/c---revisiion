#include <iostream>
using namespace std;

int main(void){
    int num;
    cout<<"Enter your number\n";
    cin>>num;




    if (num%5 == 0 && num%3 == 0)
    {
        cout<<"Number is divisible by both 5 and 3\n";
    } else if (num % 5 == 0)
    {
        cout<<"The number is divisible by 5\n";
    } else if (num % 3 == 0)
    {
        cout<<"The number is divisible by 3\n";
    }else{
        cout<<"The number is not divisible by both 3 and 5";
    }
    
    return 0;
    
}