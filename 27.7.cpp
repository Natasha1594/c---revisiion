#include <iostream>

using namespace std;


void swapNumbers(int *a, int *b){
	int temp;
	
	temp = *b;
	*b = *a;
	*a = temp;
}

int main( ){
	
	int num1 = 7;
	int num2 = 8;

	cout<< "num1 before swap: "<<num1<<endl;
	cout<<"num1 before swap: "<<num2<<endl;

	swapNumbers(&num1, &num2);

	cout<<"num1 after swap:  "<<num1<<endl;
	cout<<"num1 after swap:  "<<num2<<endl;

}
