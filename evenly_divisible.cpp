#include "evenly_divisible.h"
#include <limits>

bool isDividible(int a, int b) {
	return a % b == 0;
}

bool evenlyDivisible(int a, int divisorMax) {
	for (int j = 1; j < divisorMax; j++) {
		if (!isDividible(a, j))
			return false;
	}
	return true;
}

long getSmallestEvenlyDivisibleNumber(int divisorMax)
{
	for (long i = divisorMax; i < LONG_MAX; i += divisorMax) {
		if (evenlyDivisible(i, divisorMax))
			return i;
	}
}
