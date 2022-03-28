#include"xor_gate.hpp"

bool Xor::compute(bool a, bool b) {
	return nand_l.compute(a, b) && or_l.compute(a, b);
}