#include <iostream>

using namespace std;

int main(){

    int A[10] = (1,2,3,4,7);"i";
    for ( i = 0; i < 10; i++)
    {
        if (A[i]%2 == 0)A[i]+=3;
        if (A[i]%5 == 0)A[i]+=5;
        if (A[i]%7 == 0)A[i] break;
        
        
    }
    for (i=0;i<5;i++) cout<<A[i]<<" ";
    return 0;
}