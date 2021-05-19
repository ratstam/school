#include <iostream>
using namespace std;

int main(){
	int senza_zeri = 0;
		for(int a = 1; a < 100; a++){
		for(int b = 1; b < 100; b++){
			for(int c = 1; c < 100; c++){
				if(b*b - 4*a*c < 0)
					senza_zeri += 1;
			}
		}
	}

	cout << "il numero di polinomi quadrinteri sottocentenari senza zeri reali e': " << senza_zeri;
}