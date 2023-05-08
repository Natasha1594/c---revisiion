#include <iostream>
using namespace std;

int main(void){
   int result;

   for( int i=10; i>5; --i ){
      for( int j=1; j<=2; ++j ){
         result = i*j;
         cout << " " << result;
      }

      cout << "\n";
   }

   return 0;
}
