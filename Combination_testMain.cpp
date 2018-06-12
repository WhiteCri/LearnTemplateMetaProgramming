#include <iostream>
#include <vector>
#include <string>
#include "Combination.h"
#include "printContainer.h"

int main() {
	std::vector<std::string> strVec{ "Apple", "Banana", "Car", "Dad", "Evil", "Frank" };

	for (auto& comb : Combination(strVec, 3)) {
		for (auto& str : comb) {
			std::cout << str << ' ';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	for (auto& comb : Combination(std::vector<int>{1, 2, 3, 4, 5, 6, 7}, 2)) {
		for (auto iVal : comb)
			std::cout << iVal << ' ';
		std::cout << std::endl;
	}
}