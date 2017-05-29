#include "largest_prime_factor.h"
#include <iostream>

bool isDividible(long long a, long long b) {
	return a % b == 0;
}

bool isPrime(long long a) {
	for (long long i = 3; i < a; i += 2) {
		if (isDividible(a, i))
			return false;
	}
	return true;
}

long long getLargestPrimeFactor(long long i)
{
	for (long long j = sqrt(i); j > 0; j --) {
		if (isDividible(i, j)) {
			if (isPrime(j))
				return j;
		}
	}
}
