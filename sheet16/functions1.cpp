#include <iostream>
using namespace std;

int mcd (int n,int m){ // This functions return the gcd(int) of n(int) and m(int)
	int k = n;
	while (m%k!=0 || n%k!=0)
		k--;
	return k;
}

int main(){
	int n,d,dc;
	char operazione;
	cout << "\n\n DIGITA N / D: ";
	cin >> n >> operazione >> d;
	dc = mcd(n,d);
	cout << "\n" << dc << "\n";
	cout << "\n                   " << n << " " << operazione << " " << d << " = ";
	if (d==0) cout << "OPERAZIONE IMPOSSIBILE"<< endl;
	else switch (operazione){
				case ':':
				case '/':
					if( dc==1) cout << " GIA' SEMPLIFICATA";
					else cout << n/dc << "/" << d/dc << endl; break;
				default: cout << "OPERAZIONE SCONOSCIUTA"<< endl; break;
			}
}