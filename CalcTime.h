#pragma once
#include <iostream>
#include <ctime>

template <typename Func_, typename... Args> 
inline void CalcTime(Func_&& func, Args&&... args) 
	/*
		Calculates the time that function takes.
	*/
{
	clock_t begin, end;
	begin = clock();
	func(args...);
	end = clock();
	std::cout << "the function takes " <<  
		static_cast<double>(end - begin) / CLOCKS_PER_SEC << std::endl;
};