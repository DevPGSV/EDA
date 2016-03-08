/*
 * Source2.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: DevPGSV
 */


#include <iostream>
#include "Stack.h"

template <class T>
void printStackI(Stack<T> s) { // Iterative
	Stack<T> inverted = Stack<T>();
	while (s.size() != 0) {
		inverted.push(s.top());
		s.pop();
	}

	while (inverted.size() != 0) {
		std::cout << inverted.top() << " ";
		inverted.pop();
	}
}


template <class T>
void printStackR(Stack<T> s) { // Recursive
	if (s.size() != 0) {
		T elem = s.top();
		s.pop();
		printStackR(s);
		std::cout << elem << " ";
	}
}



int main() {
	Stack<int> s = Stack<int>();
	s.push(1); s.push(2); s.push(3); s.push(4);s.push(5); s.push(6); s.push(7);
	printStackI(s);
	std::cout << std::endl;
	printStackR(s);
	std::cout << std::endl;
	s.printAll();
	std::cout << std::endl;

	return 0;
}
