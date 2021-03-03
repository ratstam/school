#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){
	int array[5], max;

	for(int i = 0, i<5, i++){
		cout << "Numero: ";
		cin >> array[i];
	}
	max = array[0];
	for(int i = 0, i<5, i++){
		s += array[i];
		if( array[i] > max )
			max = array[i];
	}

	cout << "Max N: " << max << endl;
	cout << "Media: " << s/5.0 << endl;

	
	
	
}