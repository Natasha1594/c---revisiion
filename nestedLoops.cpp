#include <iostream>
using namespace std;

int main(void){
   cout << "i     j\n";
   cout << "-   -----" << endl;
   for( int i=0; i<5; i++ ){
      cout << i << "  ";
      for( int j=0; j<3; j++ ){
         cout << " " << j;
      }
      cout << "\n";
   }

    return 0;
}