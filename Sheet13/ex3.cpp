#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){
	int num[1], input, size = 1;

	while(input != 0){
		cout << "\nNumero: ";
		cin >> input;
		if (input != 0){
			num[size-1] = input;
			size++;
			int *num = new int[size];

		}
	}

	for(int j = size; j>= 0; j--){
		cout << num[j] << endl;
	}
	delete [] num;

}