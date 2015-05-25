// Nick Kasten
// Project Euler - Problem #3
// Largest Prime Factor of 600851475143
// 5-25-2015

/*-- problem3.cpp ----------------------------------------------------------------

	The prime factors of 13195 are 5, 7, 13 and 29.
	
	What is the largest prime factor of the number 600851475143 ?

--------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
	long long myNum = 600851475143;
	int prime = 3;
	int largestPrime = 0;
	
	while ( myNum >= prime )			// keep looping until myNum < prime
	{
		if ( myNum % prime == 0 )		// if prime is a factor of myNum
		{
			largestPrime = prime;		// largestPrime is equal to most current prime
			myNum /= prime;				// divide myNum by prime to avoid unneccesary comparisons
		}
		else
		{
			prime += 2;					// advance to next prime
		}
	}

	cout << largestPrime;				// display largest
	
	return 0;
}

