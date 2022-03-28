#pragma once

class Logic_gate {
public:
	virtual bool compute(bool a, bool b) = 0;
};