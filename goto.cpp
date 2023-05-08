#include <iostream>
using namespace std;

int main(void){
   for( int i=0; i<10; i++ ){
     if (i==5)
        goto myLabel;
     cout << i << endl;
   }

   myLabel: cout<<"Out of the loop\n";

   return 0;
}
