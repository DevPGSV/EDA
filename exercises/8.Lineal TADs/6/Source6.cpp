/*
 * Source6.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: DevPGSV
 */

#include <iostream>
#include <string>
#include "Deque.h"

bool checkPalinIterative(std::string str) {
	Deque<char> p = Deque<char>();
	for (int i = 0; i < str.length(); i++) {
		//if (str[i] != ' ')
		p.push_back(str[i]);
	}
	while (p.size() > 0) {
		while (p.size() > 0 && p.front() == ' ') p.pop_front();
		if (p.size() <= 1) return true;
		while (p.size() > 0 && p.back() == ' ') p.pop_back();
		if (p.size() <= 1) return true;

		if (p.front() == p.back()) {
			p.pop_front();
			p.pop_back();
		} else {
			return false;
		}
	}

	return true;
}

int main() {
	std::cout << checkPalinIterative("");
	std::cout << checkPalinIterative("   ");
	std::cout << checkPalinIterative("a a ");
	std::cout << checkPalinIterative("a ss a  ");
	std::cout << checkPalinIterative("  assss   a ");
	std::cout << checkPalinIterative("qw  er t yyt rewq     ");
	std::cout << checkPalinIterative(" q w e r t y 0 y trewq") << std::endl;

	std::cout << checkPalinIterative("awegew");
	std::cout << checkPalinIterative("aaaafaaa");
	std::cout << checkPalinIterative("aaaafaaa");


	return 0;
}




