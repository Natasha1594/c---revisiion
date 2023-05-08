#include <iostream>
using namespace std;


int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int byte = sizeof(arr);

    cout<<"The size in byte is: "<<byte<<endl;

    cout<<"The size of the arrary is: "<<size<<endl;
    return 0;
}
