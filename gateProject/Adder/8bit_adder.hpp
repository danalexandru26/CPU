#pragma once

#include"full_adder.hpp"

class Byte_Adder {
	std::array<bool, 8> add(std::array<bool, 8> data, bool carry) {

	}

private:
	std::array<Half_adder, 8> adders;
};