#include  <iostream>

using namespace std;

void f(int &x){
	x--;
}
void g(int y){
	y--;
}
int main( ){
	int a = 100;
	cout<<"a before: "<< a <<endl;
	f(a);
	cout<<"a after: "<< a <<endl;

	int b = 100;
	cout<<"b after: "<< b <<endl;
	g(b);
	cout<<"b after: "<< b <<endl;

	return 0;
}

