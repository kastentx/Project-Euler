// Nick Kasten
// Project Euler - Problem #4
// Largest Palindrome product
// 5-26-2015

/*-- problem4.cpp ----------------------------------------------------------------

	A palindromic number reads the same both ways. The largest palindrome made 
	from the product of two 2-digit numbers is 9009 = 91 × 99.
	
	Find the largest palindrome made from the product of two 3-digit numbers.

--------------------------------------------------------------------------------*/

// Largest Product of two 3-digit numbers:
// 999 * 999 = 998,001

#include <iostream>
#include <cmath>
using namespace std;

// Function Prototypes
bool isPal( int myNum );

// Main Function
int main()
{
	int myNum, 
		largest = 0;

	for ( int a = 999; a >= 100; a-- )
	{
		for ( int b = 999; b >= 100; b-- )
		{
			myNum = a * b;
			if ( isPal( myNum ) )
			{
				if ( myNum > largest )
				{
					largest = myNum;	
				}
			}
		}
	}
	
	cout << largest << " is the largest palindrome.\n";

	return 0;
}

// Function Definitions
bool isPal( int myNum )
{
	bool valid      = true;
	int  origNum    = myNum,
		 reverseNum = 0,
		 digit;
		
	while ( myNum )
	{
		digit = myNum % 10;
		myNum /= 10;
		reverseNum = ( reverseNum * 10 ) + digit;
	}
	
	if ( reverseNum == origNum )
	{
		return true;
	}
	else
	{
		return false;	
	}
}
