#include <iostream>

using std::cin;
using std::cout;

long long f (int n);

int main() {
	int n;
	cout << "n? ";
	cin >> n;

	cout << "f(" << n << ") = " << f(n) << endl;

	return 0;
}

long long f (int n) {
	long long res;

	if ( n==0 || n==1 )
		res = 1;
	else
		res = f(n-1) + f(n-2);

	return res;
}
