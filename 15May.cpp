#include <iostream>
using namespace std;

int main(){
int a[] = {1,0,2,9,4,9,5,7,8,9,16};
int n = 5;
n = a[a[n] / 3];
cout << a[n] / 2;
return 0;
}
