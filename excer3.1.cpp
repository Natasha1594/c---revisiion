#include <iostream>
using namespace std;

int main(void){
    int a, b, z;
    float result;
    char c;
    

    cout<<"Enter first number :   "; 
    cin>>a;
    cout<<"Enetr second number:   ";
    cin>>b;


    cout<<"1 for Addition\n2 for Subtraction\n";
    cout<<"3 for Multiplication\n4 for Division\n";

    do {
        cin>>z;
    }while( (z<1)  ||  (z>4) );

    switch(z){
        case 1:
            c = '+';
            result = a + b;
            break;
        case 2:
            c = '-';
            result = a - b;
            break;
        case 3:
            c = '*';
            result = a * b;
            break;
        case 4:
            c = '/';
            result = a / b;
            break;
    }

    cout<< a <<"  "<< c <<" "<< b <<" - "<< result;
    return 0;



int addition(int a, int b){
    return(a+b);
}

int substraction(int a, int b){
    return(a-b);
}

int multiplication(int a, int b){
    return(a*b);
}

float division(int a, int b){
    return( (float) a/b );
}



    return 0;
}