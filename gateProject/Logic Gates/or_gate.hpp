#pragma once

#include"logic_gate.hpp"

class Or : public Logic_gate {
public:
	bool compute(bool a, bool b);
};