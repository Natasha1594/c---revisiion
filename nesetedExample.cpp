#include <iostream>
using namespace std;

int main(void)
{
	for( int i=0; i<6; i++ )
	{
		cout<<"\n";	
		for( int j=6; j>i; j-- )
			cout<<" * ";
	}
	
	for( int i=0; i<7; i++ )
	{
		cout<<"\n";
		for( int j=0; j<=i; j++ )
			cout<<" * ";
	}
	
	return 0;
}
