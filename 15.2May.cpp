#include <iostream>
using namespace std;


int main(){
    for(int cnt=236, tnc=67; cnt>24;
    cnt-=5,tnc+=cnt){
        cnt = cnt - tnc; 
        cout<< cnt << endl;
    }
    return 0;
}