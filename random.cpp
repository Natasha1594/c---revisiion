#include <iostream>
#include <cstdlib>
#include <ctime>

using namespaces std;

int main(void){
    int min=1, max=100, secretNmuber, guess, attempts=0;
    srand(time(NULL));
    secretNumber = (rand()    %    (max-min+1))  ) + min;



    cout<<"I have a number between 1 and 100."<<endl;
    cout<<"Can you guess my number?"<<"\n";
    cout<<"Please type your first guess: ";

    do
    {
        cin>>gues;
    } while (/* condition */);
    
}