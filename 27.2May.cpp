#include <iostream>
using namespace std;

int sumArray(int arr[ ], int size){
	int sum = 0;
	for(int i = 0; i<size; i++){
		sum = sum + arr[i];
	}
	return sum;
}

int main( ){
	int nums[4] = {7,6,5,4};
	int addition;
	addition = sumArray(nums, 4);
	cout<<"Sum of Array:  "<<addition<<endl;
	
	return 0;
}

