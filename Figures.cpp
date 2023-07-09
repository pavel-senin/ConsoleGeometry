#include "Figures.h";
#include <vector>;
#include <iostream>;
#include <cmath>

void Figure::Print()
{
	for (int i = 0; i < this->figureMatrix.size(); i++) {
		for (int j = 0; j < this->figureMatrix[i].size(); j++) {
			if (figureMatrix[i][j]==1)
				std::cout << "*" << " ";
			else {
				std::cout << "  ";
			}
		}
		std::cout << "\n";
	}
};

void Figure::Circle() {
	int radius;
	std::cout
		<< "Size:" << "\n"
		<< "1 - small" << "\n"
		<< "2 - average" << "\n"
		<< "3 - big " << "\n"
		<< "4 - very big " << "\n";
	std::cin >> radius;
	switch (radius) {
		case (1): 
			radius = 10;
			break;
		case (2):
			radius = 15;
			break;
		case (3): 
			radius = 20;
			break;
		case (4): 
			radius = 30;
			break;
		default:
			radius = 15;
			break;
	}

	for (int i = 0; i < 2*radius+1; i++) {
		std::vector<bool> temp;
		this->figureMatrix.push_back(temp);
		for (int j = 0; j < 2*radius+1; j++) {
			if (pow((i - radius), 2) + pow((j - radius), 2) <=pow(radius, 2)) {
				this->figureMatrix[i].push_back(1);
			}
			else {
				this->figureMatrix[i].push_back(0);
			}
		}
	}
};



void Figure::Triangle() {
	int basis;
	std::cout
		<< "Size:" << "\n"
		<< "1 - small" << "\n"
		<< "2 - average" << "\n"
		<< "3 - big " << "\n"
		<< "4 - very big " << "\n";
	std::cin >> basis;
	switch (basis) {
		case (1): 
			basis = 10;
			break;
		case (2):
			basis = 15;
			break;
		case (3): 
			basis = 20;
			break;
		case (4): 
			basis = 30;
			break;
		default:
			basis = 15;
			break;
	}

	for (int i = 0; i < basis+1; i++) {
		std::vector<bool> temp;
		this->figureMatrix.push_back(temp);
		for (int j = 0; j < 2*basis+1; j++) {
			if (abs(j-basis)<=i) {
				this->figureMatrix[i].push_back(1);
			}
			else {
				this->figureMatrix[i].push_back(0);
			}
		}
	}
};

void Figure::Rectangle() {
	int width;
	int height;
	std::cout
		<< "Width:" << "\n"
		<< "1 - small" << "\n"
		<< "2 - average" << "\n"
		<< "3 - big " << "\n"
		<< "4 - very big " << "\n";
	std::cin >> width;
	switch (width) {
	case (1):
		width = 10;
		break;
	case (2):
		width = 15;
		break;
	case (3):
		width = 20;
		break;
	case (4):
		width = 30;
		break;
	default:
		width = 15;
		break;
	}
	std::cout
		<< "Height:" << "\n"
		<< "1 - small" << "\n"
		<< "2 - average" << "\n"
		<< "3 - big " << "\n"
		<< "4 - very big " << "\n";
	std::cin >> height;
	switch (height) {
	case (1):
		height = 10;
		break;
	case (2):
		height = 15;
		break;
	case (3):
		height = 20;
		break;
	case (4):
		height = 30;
		break;
	default:
		height = 15;
		break;
	}

	for (int i = 0; i < height + 1; i++) {
		std::vector<bool> temp;
		this->figureMatrix.push_back(temp);
		for (int j = 0; j < width + 1; j++) {
			this->figureMatrix[i].push_back(1);
		}
	}
};