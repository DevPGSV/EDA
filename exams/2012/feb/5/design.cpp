#include <iostream>

int getTop(int vect[], int n);

int main() {
	int vect[] = {1, 6, 7, 8, 15, 14, 6, 1};

	std::cout << getTop(vect, sizeof(vect) / sizeof(int)) << std::endl;

	return 0;
}

int getTop(int vect[], int n) {
	int top = vect[0];

	int i = 0;
	while (i < n) {
		if (vect[i] > top) {
			top = vect[i];
		}
		i++;
	}

	return top;
}
