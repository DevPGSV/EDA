#include <iostream>
#include "Stack.h"


void block(int coaches) {
	bool isPossible = true;
	int incomming = 1;
	Stack<int> station = Stack<int>();
	int input;
	std::cin >> input;
	while (input != 0) {
		
		station.push(incomming++);

		for (int i = 1; i <= coaches; i++) {

			if (isPossible) {
				if (input >= incomming) { // next is in A
					while (incomming != input) {
						station.push(incomming++); // Moving from A to station
					}
					incomming++;  // Moving from A to B
				}
				else { // next is in station
					if (station.top() == input) { // if it is the first
						station.pop(); // Move from station to B
					}
					else { // if it is not the first -> not possible
						isPossible = false;
					}
				}
			}
			std::cin >> input;
		}
		std::cout << (isPossible ? "Yes" : "No") << std::endl;
		incomming = 1;
		isPossible = true;
	}
}

int main() {
	int coaches;
	std::cin >> coaches;

	while (coaches != 0) {

		block(coaches);

		std::cin >> coaches;
		std::cout << std::endl;
	}
	return 0;
}