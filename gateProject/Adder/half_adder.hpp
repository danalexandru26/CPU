#pragma once

#include"../Logic Gates/Logic_includes.hpp"

#include<array>

class Half_adder {
public:
	std::array<bool, 2> add(bool a, bool b);
private:
	Xor xor_l;
	And and_l;
};