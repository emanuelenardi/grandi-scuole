#include <iostream>

using std::cout;

int main () {
	int x = 7;
	int *p = new int(5);
	int *q = p;

	p = &x;
	// cout << p << endl;
	// cout << &x << endl;

	delete q;
	cout << *p << endl; // 7
	cout << *q << endl; // 0
	cout << x << endl;  // 7


	return 0;
}
