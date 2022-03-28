#include"half_adder.hpp"

std::array<bool, 2> Half_adder::add(bool a, bool b) {
	std::array<bool, 2> output{
		xor_l.compute(a, b),
		and_l.compute(a, b)
	};
	return output;
}