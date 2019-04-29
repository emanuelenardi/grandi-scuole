// ESEMPIO DI COSTANTE PUNTATORE A COSTANTE

#include <iostream>
using namespace std;

int main () {
	const int b = 2;
	const int c = 3;
	const int *const a = &c;
	
	// a = &b; // errore
	// *a= 2;  // errore

	return 0;
}
