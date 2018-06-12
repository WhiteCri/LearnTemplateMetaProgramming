#pragma once
#include <iostream>
template <typename Container_>
void printContainer(const Container_& container) {
	for (auto& ele : container)
		std::cout << ele << ' ';
	std::cout << std::endl;
}