#include <iostream>

using std::cin;
using std::cout;

int main () {

	float peso, valore, prezzo;

	cout << "Dammi il tuo peso in kg: ";
	cin >> peso;

	cout << "dammi il valore in euro: ";
	cin >> valore;

	prezzo = valore * peso * ((peso > 10) ? 0.9 : 1.0);
	cout << "Il prezzo è " << prezzo << endl;

	return 0;
}
