#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

template<typename Container_, 
	typename value_type = std::remove_cv_t<std::remove_reference_t<Container_>>::value_type>
std::vector<std::vector<value_type> > 
	Combination(Container_&& container, int r) 
	/*
		Container_ should implement : 
		1. Bidirectional Iterator for next_permution
		2. Operator< for next_permutation
	*/
{
	int n = container.size();
	if (n < r) return {};
	if (r < 0) return {};

	std::vector<std::vector<value_type> >totVec;//return 2d-vector
	std::vector<int> idxVec(r);//saves temporary combination

	std::vector<bool> v(n);
	std::fill(v.end() - r, v.end(), true);
	int idx;
	do {
		idx = 0;
		for (int i = 0; i < n; ++i) {
			if (v[i]) {
				idxVec[idx++] = i;
			}
		}

		totVec.emplace_back(0);
		for(auto& idx : idxVec)
			totVec.back().push_back(*(container.begin() + idx));
	} while (std::next_permutation(v.begin(), v.end()));

	return totVec;
}