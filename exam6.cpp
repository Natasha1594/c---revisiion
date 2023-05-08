#include <iostream>
using namespace std;



int F(int x){

    return x + 10;
}
int main(){
    cout<<F(F(10));
}