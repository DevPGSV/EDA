/*
 * Source5.cpp
 *
 *  Created on: Mar 9, 2016
 *      Author: DevPGSV
 */


#include <iostream>
#include "Stack.h"

int main() {
	char input;
	int diamonds = 0;
	Stack<char> chain = Stack<char>();
	std::cin.get(input);
	while(input != '\n' && !std::cin.eof()) {
		//std::cout << "DEBUG: input: " << input << std::endl;
		if (input == '<') {
			chain.push(input);
			//std::cout << "DEBUG: adding <" << std::endl;
		}
		else if (input == '>') {
			//std::cout << "DEBUG: found >" << std::endl;
			if (chain.size() != 0 && chain.top() == '<') {
				//std::cout << "DEBUG: removing <" << std::endl;
				diamonds++;
				chain.pop();
			}
		}
		std::cin.get(input);
	}

	std::cout << diamonds << std::endl;


}
