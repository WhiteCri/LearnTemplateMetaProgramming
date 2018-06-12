#pragma once
#include <iostream>
#include "pow.h"
long long unsigned pow_(long long unsigned base, int exp) {
	if (exp == 0) return 1;
	return base * pow_(base, exp - 1);
}


int main() {
	for (int i = 0; i < 100; ++i)
		std::cout << pow(i, 1000) << std::endl;
}