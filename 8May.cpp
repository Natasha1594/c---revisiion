#include <iostream>
using namespace std;

int main(void){
    int a[10] [10], x=0;
    for (int i = 0; i < 3; i++)
    {
       for (int h = 0; h < 2; h++)
       {
        a[i] [h] = x + 1;
        x = x + 1;
        if (a[i] [h] == 3)
            break;
        cout<< a[i] [h] << "\t";
        
       }
       cout<< endl;
    }
    return 0;
}