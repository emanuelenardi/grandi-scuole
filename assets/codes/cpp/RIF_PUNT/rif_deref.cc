using namespace std;
#include <iostream>

int main () {
	int n = 1;
	int* p = &n;
	int& r = *p;
	cout << "r = " << r << endl;
	// cout << "&n = " << long(&n) << endl;
	// cout << "&p = " << long(&p) << endl;
	// cout << "&r = " << long(&r) << endl;
	cout << endl;

	int m = 2;
	p = &m;
	cout << "r = " << r << endl;
	// cout << "&n = " << long(&n) << endl;
	// cout << "&m = " << long(&m) << endl;
	// cout << "&p = " << long(&p) << endl;
	// cout << "&r = " << long(&r) << endl;

	// Quanto vale r?
	// r "segue" p?
	return 0;
}
