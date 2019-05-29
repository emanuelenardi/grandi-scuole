#include <iostream>
using std::cout;

int main () {
	int i = 1, j = 0;
	int *p, *q;

	p = &i;
	*p = 3;
	cout << "*p = " << *p << endl;

	j = *p; // j = 3
	// cout << "j = " << j << endl;
	q = p;  // q = 3
	// cout << "*q = " << *q << endl;
	(*p)++; // p = 4, i = 4
	// cout << "*p = " << *p << endl;
	// cout << "i = " << i << endl;
	(*q)++; // q = 5
	// cout << "*q = " << *q << endl;
	// cout << "*p = " << *p << endl;
	// cout << "i = " << i << endl;

	cout << "i = " << i << endl;   // 3
	cout << "j = " << j << endl;   // 3
	cout << "*p = " << *p << endl; // 4
	cout << "*q = " << *q << endl; // 5

	return 0;
}
