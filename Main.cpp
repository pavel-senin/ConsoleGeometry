#include "Figures.h";
#include <iostream>;
#include <vector>;
#include <string>


int main() {
	system("cls");
	Figure figure;	
	std::string code = "";

	while (code != "0") {
		Figure figure;
		std::cout
			<< "Controls:" << "\n"
			<< "0 - exit" << "\n"
			<< "1 - choose a figure" << "\n"
			<< "2 - clear all " << "\n";
		std::cin >> code;
		if (code == "1") {
			std::cout
				<< "Controls:" << "\n"
				<< "1 - circle" << "\n"
				<< "2 - triangle" << "\n"
				<< "3 - rectangle " << "\n";
			std::cin >> code;
			if (code == "1") {
				figure.Circle();
				figure.Print();
			}
			if (code == "2") {
				figure.Triangle();
				figure.Print();
			}
			if (code == "3") {
				figure.Rectangle();
				figure.Print();
			}
		}
		else if (code=="2")
			system("cls");
	}

	return 0;
}