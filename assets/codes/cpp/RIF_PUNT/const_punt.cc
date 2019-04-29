// ESEMPIO DI COSTANTE PUNTATORE

#include <iostream>
using namespace std;

int main () {
	int a, b;
	int *const pa = &a;
	*pa = 3;  // ok
	// pa = &b   // errore: pa e' costante

	return 0;
}
