#pragma once

#include"logic_gate.hpp"

class And : public Logic_gate {
public:
	bool compute(bool a, bool b);
};