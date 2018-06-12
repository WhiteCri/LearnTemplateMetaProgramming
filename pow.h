#pragma once
#include <iostream>
#include <type_traits>

template<typename T>
constexpr T sqr(T a) {
	return a * a;
}

template<typename T>
constexpr T power(T a, std::size_t n) {
	return n == 0 ? 1 : sqr(power(a, n / 2)) * (n % 2 == 0 ? 1 : a);
}