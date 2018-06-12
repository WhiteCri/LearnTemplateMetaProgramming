#include <iostream>
#include "CalcTime.h"

void Test(void) {
	for (int i = 0; i < 10000000; ++i)
		i = i * 3 / 3;
}

void Test2(int n) {
	for (int i = 0; i < n; ++i)
		i = i * 3 / 3;
}

int main() {
	CalcTime(Test);
	CalcTime(Test2, 100000000);
}