/*
 * Source8_9.cpp
 *
 *  Created on: Mar 8, 2016
 *      Author: DevPGSV
 */


#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main() {
	char input;
	bool errorS = false, errorQ = false;
	int o1, o2;
	Stack<int> operatorsS = Stack<int>();
	Queue<int> operatorsQ = Queue<int>();
	std::cin.get(input);
	while(input != '\n' && !std::cin.eof()) {
		operatorsS = Stack<int>();
		operatorsQ = Queue<int>();
		errorS = false;
		errorQ = false;
		do {

			// Stack
			if (!errorS) {
				if (input == '+') {
					o2 = operatorsS.top(); operatorsS.pop();
					o1 = operatorsS.top(); operatorsS.pop();
					//std::cout << " DEBUG(stack): add: " << o1 << " + " << o2 << " = " << o1 + o2 << std::endl;
					operatorsS.push(o1 + o2);
				} else if (input == '-') {
					o2 = operatorsS.top(); operatorsS.pop();
					o1 = operatorsS.top(); operatorsS.pop();
					//std::cout << " DEBUG(stack): sub: " << o1 << " - " << o2 << " = " << o1 - o2 << std::endl;
					operatorsS.push(o1 - o2);
				} else if (input == '*') {
					o2 = operatorsS.top(); operatorsS.pop();
					o1 = operatorsS.top(); operatorsS.pop();
					//std::cout << " DEBUG(stack): prod: " << o1 << " * " << o2 << " = " << o1 * o2 << std::endl;
					operatorsS.push(o1 * o2);
				} else if (input == '/') {
					o2 = operatorsS.top(); operatorsS.pop();
					o1 = operatorsS.top(); operatorsS.pop();
					if (o2 == 0) {
						//std::cout << " DEBUG(stack): div: ERROR" << std::endl;
						errorS = true;
					} else {
						//std::cout << " DEBUG(stack): div: " << o1 << " / " << o2 << " = " << o1 / o2 << std::endl;
						operatorsS.push(o1 / o2);
					}
				} else {
					//std::cout << " DEBUG(stack): input: " << input - '0' << std::endl;
					operatorsS.push(input - '0');
				}
			}

			// Queue
			if (!errorQ) {
				if (input == '+') {
					o2 = operatorsQ.front(); operatorsQ.pop_front();
					o1 = operatorsQ.front(); operatorsQ.pop_front();
					//std::cout << " DEBUG(queue): add: " << o1 << " + " << o2 << " = " << o1 + o2 << std::endl;
					operatorsQ.push_back(o1 + o2);
				} else if (input == '-') {
					o2 = operatorsQ.front(); operatorsQ.pop_front();
					o1 = operatorsQ.front(); operatorsQ.pop_front();
					//std::cout << " DEBUG(queue): sub: " << o1 << " - " << o2 << " = " << o1 - o2 << std::endl;
					operatorsQ.push_back(o1 - o2);
				} else if (input == '*') {
					o2 = operatorsQ.front(); operatorsQ.pop_front();
					o1 = operatorsQ.front(); operatorsQ.pop_front();
					//std::cout << " DEBUG(queue): prod: " << o1 << " * " << o2 << " = " << o1 * o2 << std::endl;
					operatorsQ.push_back(o1 * o2);
				} else if (input == '/') {
					o2 = operatorsQ.front(); operatorsQ.pop_front();
					o1 = operatorsQ.front(); operatorsQ.pop_front();
					if (o2 == 0) {
						//std::cout << " DEBUG(queue): div: ERROR" << std::endl;
						errorQ = true;
					} else {
						//std::cout << " DEBUG(queue): div: " << o1 << " / " << o2 << " = " << o1 / o2 << std::endl;
						operatorsQ.push_back(o1 / o2);
					}
				} else {
					//std::cout << " DEBUG(queue): input: " << input - '0' << std::endl;
					operatorsQ.push_back(input - '0');
				}
			}


			std::cin.get(input);
		} while (input != '\n' && !std::cin.eof());


		if (errorS && errorQ) {
			std::cout << "ERROR = ERROR" << std::endl;
		} else if (!errorS && !errorQ) {
			if (operatorsS.top() == operatorsQ.front()) {
				std::cout << operatorsS.top() << " = " << operatorsQ.front() << std::endl;
			} else {
				std::cout << operatorsS.top() << " != " << operatorsQ.front() << std::endl;
			}
		} else {
			if (errorS) {
				std::cout << "ERROR != ";
			} else {
				std::cout << operatorsS.top() << " != ";
			}
			if (errorQ) {
				std::cout << "ERROR" << std::endl;
			} else {
				std::cout << operatorsQ.front() << std::endl;
			}
		}

		std::cin.get(input);
	}

	return 0;
}
