#pragma once

#include <random>

class MyRandom {
	std::default_random_engine m_generator;
public:
	MyRandom();
	double real();
	int integer(int);
};