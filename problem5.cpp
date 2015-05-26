// Nick Kasten
// Project Euler - Problem #5
// Smallest Multiple
// 5-26-2015

/*-- problem5.cpp ----------------------------------------------------------------

	2520 is the smallest number that can be divided by each of the numbers 
	from 1 to 10 without any remainder.
	
	What is the smallest positive number that is evenly divisible by all of 
	the numbers from 1 to 20?

--------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

// Function Prototypes
bool divisibleThru20( int num );

// Main Function
int main()
{
	bool evenlyDivisible = false;
	int num;
	
	for (num = 1; num < 1000000000; num++)
	{
		if( divisibleThru20( num ) )
		{
			evenlyDivisible = true;
		}
		
		if ( evenlyDivisible )
		{
			break;
		}
	}
	
	cout << num;
	
	return 0;
}

// Function Definitions
bool divisibleThru20( int num )
{
	for ( int divisor = 1; divisor <= 20; divisor++ )
	{
		if ( num % divisor )
		{
			return false;
		}
	}
	return true;
}
