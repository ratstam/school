#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){
	float n[7], ns[6], nm[6];
	double m = 0;
	int cnt1 = -1, cnt2 = -1;

	cout << "				Digita 7 numeri" << endl;

	for (int i = 0; i < 7; i++ ){
		cout << "Valore n. " << i+1 << " = ";
		cin >> n[i];
		cout << endl;
		m += n[i];
	}

	cout << "				Risultati\n";
	m /= 7;
	cout << " - Media = " << m << endl;

	for(int i = 0; i < 6; i++){
		if(n[i] < m ){
			cout << n[i] << " ";
			cnt1 += 1;
			cout << cnt1 << " " << i << " " << endl; 
			nm[cnt1] = n[i];
		} else {
			cnt2 += 1;
			nm[cnt2] = n[i];
		}
	}

	
	cout << " - Elementi inferiori alla media: ";
	for (int i = 0; i <= cnt1; i++)
		cout << nm[i] << "  ";
 	cout << endl;

	cout << " - Elementi NON inferiori alla media: ";
	for (int i = 0; i <= cnt2; i++)
		cout << ns[i] << "	";
 	cout << endl;
	
} 