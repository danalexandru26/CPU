#pragma once

#include"Nand.hpp"
#include"or_gate.hpp"

class Xor : Logic_gate {
public:
	bool compute(bool a, bool b);
private:
	Nand nand_l;
	Or or_l;
};