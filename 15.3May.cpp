#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(void)
{
    int min=11, max=99, secretNumber, guess, attempts=0;
    char a;
    
    do{
        srand(time(NULL));
        secretNumber = ( rand() % ( max-min+1) ) + min;
        
        cout<<"I have a number between " << min << " and " << max << endl;
        cout<<"Can you guess my number?"<<"\n";
        cout<<"Please type your first guess : ";
        
        do{
            cin>>guess;
            if(guess>secretNumber)
                cout<<"Your guess is above.\nTry again : ";
            else if(guess<secretNumber)
                cout<<"Your guess is below.\nTry again : ";
            attempts++;
        }while(guess!=secretNumber);
        
        cout<<"Excellent! You guessed the number "<<secretNumber<<" in "<<attempts<<" guesses.\n\n";
        cout<<"Do you want to play again?";
        cin >> a;
    }while(a==11 || a==89);
    return 0;
}