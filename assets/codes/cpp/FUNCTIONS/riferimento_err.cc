#include <iostream>

using std::cout;

double pippo (long & x) {
 	return x;
}

int main() {
	int num = 1;
	cout << pippo(num) << endl;
}
