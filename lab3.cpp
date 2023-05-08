#include <iostream>
using namespace std;

int main(){
    int num1, num2, largest;

    //This is to input the first number
    cout<<"Enter num1:";
    cin>>num1;

    //This is to input the second number
    cout<<"Enter num2:";
    cin>>num2;

    if (num1>num2)

    {
       
        cout<<num1<<"This the greatest number\n"<<num2;
    }else{
        cout<<num2<<"This the greatest number than\n"<<num1;
    }

    

    //This is to find the largest number between num1 and two
    // largest=(num1>num2)?num1:num2;

    // cout<<"The largets number is:"<<largest<<endl;


    return 0;
}