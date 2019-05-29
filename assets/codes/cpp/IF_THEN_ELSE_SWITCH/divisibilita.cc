#include <iostream>

using std::cin;
using std::cout;

int main () {
	int n, d;

	cout << "Dammi due interi positivi n e d: ";
	cin >> n >> d;

	if (n%d == 0)
		cout << "Il risultato è " << n/d << endl;

	return 0;
}
