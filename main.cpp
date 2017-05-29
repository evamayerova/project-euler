
#include <iostream>

#include "largest_prime_factor.h"
#include "palindroms.h"
#include "evenly_divisible.h"
#include "square_sums.h"
#include "get_primes.h"

#define TASK_7

int main() 
{
#ifdef TASK_3
	std::cout << "Task 3 " << getLargestPrimeFactor(600851475143) << std::endl;
#endif
#ifdef TASK_4
	std::cout << "Task 4 " << getLargestPalindrom(3) << std::endl;
#endif
#ifdef TASK_5
	std::cout << "Task 5 " << getSmallestEvenlyDivisibleNumber(20) << std::endl;
#endif
#ifdef TASK_6
	std::cout << "Task 6 " << squareSums(100) << std::endl;
#endif
#ifdef TASK_7
	std::cout << "Task 7 " << getPrimeNumber(10001) << std::endl;
#endif
	return 0;
}
