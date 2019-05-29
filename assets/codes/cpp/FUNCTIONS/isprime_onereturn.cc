//  Example 4.12, page 100
//  Schaum's Outline of Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1996

#include <iostream>
#include <cmath>

using std::cout;

bool isPrime(int);

int main() {
	for (int n = 1; n < 5000; n++)
		if (isPrime(n))
			cout << n << " ";
	cout << endl;

	return 0;
}

// restituisce TRUE se n è primo
bool isPrime (int n) {
	float sqrtn = sqrt(n);
	bool res = true;
		if (n < 2)
			res =  false;
		else if (n < 4)
			res =  true;
		else if (n%2 == 0)
			res =  false;
		else {
			for (int d = 3; d <= sqrtn; d += 2)
				if (n%d == 0)
					res =  false;
	}

	return res;
}
