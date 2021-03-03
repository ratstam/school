#include <iostream>
#include <string>
#include <cmath>

using namespace std;

main(){
	int n, pari = 0, dispari=0, potenza = 10;
	cout << "numero: ";
	cin >> n;

	while(n != 0){
		int n1 = n;
		while (n1>10)
		{
			n1 /= potenza;
			potenza *= 10;
		}

		if(n1%2==0){
			pari += n1;
		}else{
			dispari += n1;
		}
		n -= n1*potenza;
	}
	if(dispari == pari){
		cout << "il numero è bilancaito";
	}else{
		cout << "il numero non è binìlanciato";
	}
}