#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;

int main(){
	while (true){
		int numero;
		cout << "\nDigita un numero tra 1 e 12";
		cin >> numero;

		switch (numero)
		{
		case 1: cout << "gennaio"; break;
		case 2: cout << "Febbraio"; break;
		case 3: cout << "Marzo"; break;
		case 4: cout << "Aprile"; break;
		case 5: cout << "MAggio"; break;
		case 6: cout << "giugno"; break;
		case 7: cout << "luglio"; break;
		case 8: cout << "agosto"; break;
		case 9: cout << "settembre"; break;
		case 10: cout << "ottobre"; break;
		case 11: cout << "nocembre"; break;
		case 12: cout << "dicembre"; break;
		default: cout << "ma che mese è?"; break;
	}
}
