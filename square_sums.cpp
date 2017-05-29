#include "square_sums.h"
#include <cmath>

int squareSums(int n)
{
	int sum = 0;
	int sumSquare = 0;
	for (int i = 1; i <= n; i++) {
		sumSquare += pow(i, 2);
		sum += i;
	}
	return (pow(sum, 2) - sumSquare);
}
