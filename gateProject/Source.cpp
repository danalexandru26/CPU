#include<iostream>

#include"Logic Gates/Logic_utilities.hpp"
#include"Adder/half_adder.hpp"

#include"Adder/full_adder.hpp"

#include<array>

int main() {
	Full_adder full;

	auto a = full.add(true, true, false);

	std::cout << a[0] << ' ' << a[1];

	return 0;
}