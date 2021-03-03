#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){
	string giorni[7] = {"Lunedì", "Martedì", "Mercoledì", "Giovedì", "Venerdì", "Sabato", "Domenica"};
	string giorniPericolosi[7];
	int incidenti[7], s, cont = 0, cont2 = 0, ngp = 0;
	double media;

	for(int i = 0; i < 7; i++){
		cout << "Inserisci il numero di incidenti di " << giorni[i] <<endl;
		cin >> incidenti[i];
		cout << endl;
		if(incidenti[i] < 0){
			cout << "Inserisci un numero maggiore di 0 \n";
			i--;
		}
	}

	do{
		s += incidenti[cont];
	}while (cont < 7);
	media = s / 7.0;

	for( int i = 0; i < 7; i++){
		if(incidenti[i] > 2*media){
			giorniPericolosi[i] = giorni[i];
			ngp += 1;
		}
	}

	if(ngp == 0){
		cout << "non ci sono giorni pericolosi" << endl;
	}else{
		while (cont2 <= ngp){
			cout << giorniPericolosi[cont2] << " ";
			cont2++ ;
		}
		cout << "sono giorni pericolosi\n";
	}

}