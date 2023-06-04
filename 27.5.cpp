#include <iostream>
using namespace std;


int main( ){
	int sum = 0;
	int dimensional_Array[4] [3] = { 	{2,3,4}, //2D array with 4 rows and 3 colmns
						{5,6,7},
						{8,9,10},
						{4,5,6}
						};
for(int i = 0; i<4 ; i++){//loop to control row
	for(int j = 0; j<3; j++){//loop to control column
		sum = sum + dimensional_Array[i] [j];
	}
}
cout<<"The sum of 2D Array is: "<<sum<<endl;

return 0;

}
