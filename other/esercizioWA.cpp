#include <iostream>

using namespace std;

int main(){
	int bevanda = 0;
	double prezzo_caffe = 0.50, prezzo_cioccolata = 1.00, importo = 0;

	cout << " Selezione il tipo di bevanda, 1 per il caffe 0.50 , 2 per cioccolata 1.00\n";
	cin >> bevanda;
	cout << " Inserisci la moneta\n";
	cin >> importo;


	if (bevanda == 1){
		if(importo >= prezzo_caffe){
			cout << "caffe";
			if (importo > prezzo_caffe){
				cout << " resto: " << importo - prezzo_caffe << endl;
			}
		}else{
			cout << "Importo isufficiente per compare il caffe" << endl;
		}
		
	}


	if (bevanda == 2){
		if(importo >= prezzo_cioccolata){
			cout << "cioccolata";
			if (importo > prezzo_cioccolata){
				cout << " resto: " << importo - prezzo_cioccolata << endl;
			}
		}else{
			cout << "Importo isufficiente per comparela cioccolata" << endl;
		}
	}
}