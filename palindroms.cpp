#include "palindroms.h"
#include <iostream>
#include <string>

bool isPalindrom(int n) {
	std::string s = std::to_string(n);
	for (int i = 0; i <= s.length() / 2; i++) {
		if (s[i] != s[s.length() - i - 1])
			return false;
	}
	return true;
}

int getLargestPalindrom(int digits)
{
	int tmpMax = 0;
	for (int i = pow(10, digits - 1); i < pow(10, digits); i++) {
		for (int j = i; j < pow(10, digits); j ++) {
			int mult = i * j;
			if (isPalindrom(mult)) {
				if (mult > tmpMax)
					tmpMax = mult;
			}
		}
	}
	return tmpMax;
}