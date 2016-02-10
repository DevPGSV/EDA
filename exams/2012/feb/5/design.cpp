#include <iostream>

template <typename Type>
Type getTop(Type vect[], int n);

int main() {
	int vect[] = {1, 6, 7, 8, 15, 14, 6, 1};

	std::cout << getTop(vect, sizeof(vect) / sizeof(int)) << std::endl;

	return 0;
}

/**
 * <p>Get the maximum value of the vector <i>vect</i> of <i>n</i> elements of type <i>Type</i></p>
 * <p>The type <i>Type</i> has to be sortable</p>
 * <p>The vector <i>vect</i> has to be "mountain"
 * 
 * @param vect input vector (mountain)
 * @param n the size of <i>vect</i>
 *
 * @return The top of the mountain, ie. the maximum value in <i>vect</i>
 */
template <typename Type>
Type getTop(Type vect[], int n) {
	Type top = vect[0];
   
	int i = 0, topI = 0;
	while (i < n) {
		if (vect[i] > top) {
         topI = i;
			top = vect[topI];
		}
		i++;
	}

	return top;
}
