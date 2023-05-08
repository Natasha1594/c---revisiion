#include <iostream>

using namespace std;

int mode(int num1, int num2){
    int modulas = num1 % num2;
    return modulas;
}





int main(){
    int a, b;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    int result = mode(a, b);

    cout<<"The mode of both the numbers is: "<<result;


}