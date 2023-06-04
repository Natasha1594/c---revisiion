#include <iostream>

using namespace std;

int main( ){

int sum = 6; //variable of type int
int* ptr = &sum;//pointer variable named ptr, storing the address to variable sum

cout<< "Value of sum is: "<<sum<<endl;
cout<<"Memory address of sum is: "<<&sum<<endl;
cout<<"Memory address of sum with pointer: "<<ptr<<endl;

}
