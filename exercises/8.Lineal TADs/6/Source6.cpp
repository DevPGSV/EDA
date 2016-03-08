/*
 * Source6.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: DevPGSV
 */

#include <iostream>
#include <string>

bool checkPalinIterative1(std::string str) {
	for (int i = 0; i < str.length() / 2; i++) {
		if (str[i] != str[str.length() - 1 - i]) return false;
	}
	return true;
}

int main() {
	std::cout << checkPalinIterative1("");
	std::cout << checkPalinIterative1("aa");
	std::cout << checkPalinIterative1("assa");
	std::cout << checkPalinIterative1("assssa");
	std::cout << checkPalinIterative1("qwertyytrewq");
	std::cout << checkPalinIterative1("qwerty0ytrewq") << std::endl;

	std::cout << checkPalinIterative1("awegew");
	std::cout << checkPalinIterative1("aaaafaaa");
	std::cout << checkPalinIterative1("aaaafaaa");


	return 0;
}




