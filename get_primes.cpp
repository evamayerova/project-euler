#include "get_primes.h"
#include <vector>

int getPrimeNumber(int order)
{
	std::vector<bool> a = std::vector<bool>(1000 * order);
	for (std::vector<bool>::iterator i = a.begin(); i != a.end(); ++i) {
		*i = true;
	}

	for (std::vector<bool>::iterator i = a.begin(); i != a.end(); ++i) {
		
	}

	return 0;
}
