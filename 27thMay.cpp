#include  <iostream>

using namespace std;

int sum(int x, int y){
	//same function name, different parameters
	int sum = x+y;

	return sum;
}

int sum(double a, double b, double c){

	double sum = a+b+c;
	return sum;
}
int main( ){
	sum(4,5);
	sum(4.5,5.7,8.9);
	return 0;

}
