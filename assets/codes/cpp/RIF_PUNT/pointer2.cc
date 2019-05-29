#include <iostream>
using std::cout;

int main () {
	int i = 0, j = 1;
	int *p, *q;
	p = &i;
	q = &j;
	// double x = 1.0;
	// p = &x; // ERRORE: tipo incompatibile!!!
	// cout << "i = " << i << ", j = " << j << endl;
	*p = *q;
	// cout << "i = " << i << ", j = " << j << endl;
	i++;
	// cout << "i = " << i << ", *p = " << *p << endl;
	j--;
	// cout << "i = " << i << ", j = " << j << endl;

	// cout << "q = " << q << ", p = " << p << endl;
	// cout << "*q = " << *q << ", *p = " << *p << endl;
	q = p;
	// cout << "q = " << q << ", p = " << p << endl;
	// cout << "*q = " << *q << ", *p = " << *p << endl;

	// cout << "*p = " << *p << ", i = " << i << endl;
	(*p)++;
	// cout << "*p = " << *p << ", i = " << i << endl;
	(*q)++;
	// cout << "*p = " << *p << ", i = " << i << endl;

	// cout << "*p = " << *p << ", i = " << i << endl;
	i++;
	// cout << "*p = " << *p << ", i = " << i << endl;
	j--;
	// cout << "*p = " << *p << ", i = " << i << endl;

	cout << "i = " << i << endl;
	cout << "j = " << j << endl;

	cout << "*p = " << *p << endl;
	cout << "*q = " << *q << endl;
	cout << "&i = " << long(&i) << endl;

	cout << " p = " << long(p) << endl;
	cout << " q = " << long(q) << endl;

	return 0;
}
