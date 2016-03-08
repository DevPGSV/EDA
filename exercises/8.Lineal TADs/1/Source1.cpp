/*
 * Source1.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: DevPGSV
 */


#include <iostream>

int main() {
	char inChar;
	int sum, input;

	std::cin.get(inChar);
	while (inChar != '\n' && inChar != '-' && !std::cin.eof()) {
		sum = 0;

		input = inChar - '0';
		sum += input;
		std::cout << input;
		std::cin.get(inChar);

		while (inChar != '\n' && inChar != '-' && !std::cin.eof()) {
			input = inChar - '0';
			sum += input;
			std::cout << " + " << input;
			std::cin.get(inChar);
		}
		std::cout << " = " << sum << std::endl;

		std::cin.get(inChar);
	}

	return 0;
}
