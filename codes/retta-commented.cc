#include <iostream>
using namespace std;

double f(double x) {
	return 3 * (x * x) + 2;
}

int main() {
	// primo punto
	double x1 = 1;
	double y1 = f(x1);

	// secondo punto
	double x2 = x1 + 0.01;
	double y2 = f(x2);

	// coefficiente angolare
	double m = (y2 - y1) / (x2 - x1);

	// intercetta
	double q = y1 - m * x1;

	// stampa equazione a schermo
	cout << "y = " << m << "x + " << q << endl;

	// il programma è terminato correttamente
	return 0;
}
