#include <iostream>
#include <cstdlib>
using namespace std;

//this program creates random umbers between -150 to 150
int main(void){
    int arrayA[20];
    srand(time(0));
    //this is to generate the elements of the array
    for (int i = 0; i < 20 ; i++)
    {
        int randomNumber = -150 + rand()%300;
        arrayA[i] = randomNumber;
    }
    cout<<"The elements of the array are: "<<endl;
    for (int j = 0; j < 20; j++)
    {
        cout<<arrayA[j]<< " ";
    }
    cout<<"\nThe even numbers are: "<<endl;
    for(int h =0; h<20; h++)
    {
        if (arrayA[h] % 2 == 0)
        {
           cout<<arrayA[h]<< " ";
        }
        
    }

    cout<<"\nThe negative numbers are: "<<endl;

    for(int e = 0; e<20; e++)
    {
        if(arrayA[e] < 0)
        {
            cout<<arrayA[e]<<" ";
        }
    }
    
    
    return 0;
}