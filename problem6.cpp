// Nick Kasten
// Project Euler - Problem #6
// Sum Square Difference
// 6-3-2015

/*-- problem6.cpp ----------------------------------------------------------------

	The sum of the squares of the first ten natural numbers is,

	12 + 22 + ... + 102 = 385
	The square of the sum of the first ten natural numbers is,
	
	(1 + 2 + ... + 10)2 = 552 = 3025
	Hence the difference between the sum of the squares of the first ten natural 
	numbers and the square of the sum is 3025 - 385 = 2640.
	
	Find the difference between the sum of the squares of the first one hundred 
	natural numbers and the square of the sum.

--------------------------------------------------------------------------------*/

#include <iostream>
#include <cmath>
using namespace std;

// Function Prototypes
int sumOfSquares( int maxNum );
int squareOfSum( int maxNum );

// Main Function
int main()
{
	int max = 100;
	int diff = squareOfSum( max ) - sumOfSquares( max );
	
	cout << diff;
	
	return 0;
}

// Function Definitions
int sumOfSquares( int maxNum )
{
	int total = 0;
	
	for ( int i = 1; i <= maxNum; i++ )
	{
		total += pow( i, 2 );
	}
	
	return total;
}

int squareOfSum( int maxNum )
{
	int total = 0;
	
	for ( int i = 1; i <= maxNum; i++ )
	{
		total += i;
	}	
	
	return total = pow( total, 2 );
}
