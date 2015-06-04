// Nick Kasten
// Project Euler - Problem #7
// 10001st Prime
// 6-3-2015

/*-- problem7.cpp ----------------------------------------------------------------

	By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see 
	that the 6th prime is 13.

	What is the 10,001st prime number?

--------------------------------------------------------------------------------*/

#include <iostream>
#include <cmath>
using namespace std;

// Function Prototypes
bool isPrime( int myNum );

// Main Function
int main()
{
	int desiredPrimePos = 10001,		// This is the position of the desired prime number
		primeCount = 0,
		myNum = 1;
			
	do
	{
		myNum++;
		if ( isPrime( myNum ) )
		{
			primeCount++;
		}		
	} while ( primeCount != desiredPrimePos );
	
	cout << myNum;
	
	return 0;
}

// Function Definitions
bool isPrime( int myNum )
{
	    int root = sqrt( myNum );
	
		for ( int i = 2; i <= root; i++ )
		{
			if( ( myNum % i ) == 0 )
			{
				return false;
			}
		}
		return true;	
}
