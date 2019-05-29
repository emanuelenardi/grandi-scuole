#include <iostream>
using std::cout;

int main () {
	const int b = 2;
	const int c = 3;
	const int *const a = &c;

	// a = &b; // errore
	// *a= 2;  // errore

	return 0;
}
