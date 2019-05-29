#include <iostream>

using std::cout;

int main () {
	int *p = new int(5);
	cout << "*p = " << *p << endl;

	delete p;
	*p = 10; // errore: deallocato
	// delete p; // DA SEGNALARE A RS
	cout << "*p dealloc. = " << *p << endl;

	return 0;
}
