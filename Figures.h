#include <vector>;
#include <iostream>;

#pragma once
class Figure {
	std::vector<std::vector<bool>> figureMatrix;
public:
	void Print();
	void Circle();
	void Triangle();
	void Rectangle();

};