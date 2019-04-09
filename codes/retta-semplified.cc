#include <iostream>
using namespace std;

double f(double x);

int main() {
	// primo punto
	double x1 = 2;
	double y1 = 2;

	// secondo punto
	double x2 = 3;
	double y2 = 3;

	// coefficiente angolare
	double m = (y2 - y1) / (x2 - x1);

	// intercetta
	double q = y1 - m * x1;

	// stampa equazione a schermo
	cout << "y = " << m << "x + " << q << endl;

	return 0;
}
