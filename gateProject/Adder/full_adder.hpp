#pragma once

#include"half_adder.hpp"

class Full_adder {
public:
	std::array<bool, 2> add(bool a, bool b, bool carry_in) {
		auto c = ha.add(a, b);
		auto d = hb.add(carry_in, c[0]);

		std::array<bool, 2> res{
			d[0],
			c[1] || d[1]
		};

		return res;
	}

private:
	Half_adder ha;
	Half_adder hb;
	Or or_l;
};