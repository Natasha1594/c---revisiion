#include <iostream>
using namespace std;

int largest(int arr[ ], int size){
	int max = arr[0];
	for(int i=1; i<size; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	int nums[4] = {7,6,5,4};
	int largest_elem;

	largest_elem = largest(nums, 4);
    cout<<"Largest element of the array: "<<largest_elem<<endl;

    return 0;
}
