#include <iostream>
using std::cout;

int main () {
	int v0 = 10;
	int v1 = 20;
	int v2 = 30;
	int *pv = &v1;

	cout << " *(pv+1) = " << *(pv+1) << endl
		 << " (*pv)+1 = " << (*pv)+1 << endl
		 << " *pv+1   = " <<   *pv+1 << endl;
	return 0;
}
