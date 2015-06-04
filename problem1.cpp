// Nick Kasten
// Project Euler - Problem #1
// Multiples of 3 and 5
// 5-25-2015

/*-- problem1.cpp ----------------------------------------------------------------

	If we list all the natural numbers below 10 that are multiples of 3 or 5, 
	we get 3, 5, 6 and 9. The sum of these multiples is 23.

	Find the sum of all the multiples of 3 or 5 below 1000.

--------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
	const int MAX = 1000;
	int total = 0;
	
	for ( int i=0; i < MAX; i++ )				// for all numbers less than 1000
	{
		if ( i % 3 == 0 || i % 5 == 0 )		// if number is a multiple of 3 or 5
		{
			total += i;						// add it to running total
		}
	}
	
	cout << total;							// output total
	
	return 0;
}
