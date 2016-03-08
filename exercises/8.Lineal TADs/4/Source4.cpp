/*
 * Source4.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: DevPGSV
 */


#include <iostream>
#include "Stack.h"

int main() {
	char inChar;
	bool unbalanced;
	Stack<char> chars;
	std::cin.get(inChar);
	while (inChar != '\n' && !std::cin.eof()) {
		unbalanced = false;
		chars = Stack<char>();
		while (inChar != '\n' && !std::cin.eof()) {
			if (!unbalanced) {
				switch (inChar) {
				case '(':
					chars.push(')');
					break;
				case '[':
					chars.push(']');
					break;
				case  '{':
					chars.push('}');
					break;
				case ')':
				case ']':
				case '}':
					if ((chars.size() != 0) && (inChar == chars.top())) {
						chars.pop();
					} else {
						unbalanced = true;
					}
					break;
				default:
					break;
				}
			}
			std::cin.get(inChar);
		}
		if (!unbalanced && chars.size() == 0) {
			std::cout << "YES" << std::endl;
		} else {
			std::cout << "NO" << std::endl;
		}
		std::cin.get(inChar);
	}
	return 0;
}



