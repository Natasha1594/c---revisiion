#include <iostream>

using namespace std;



int sum(int num1, int num2){
    int addition = num1 + num2;
    return addition;

}
int main(){

    int a, b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    
    int result = sum(a,b);
    cout<<"The sum of both the numbers is: "<<result;






    return 0;
}