#pragma once

#include"Logic_includes.hpp"

#include<functional>

template<typename Function>
inline bool invert(Function&& compute) {
	return compute();
}