#include <iostream>
using namespace std;

int main(){
	const int range = 100000000;
	long double sum = 0;
	int segno = 1;
	cout.precision(32);
	for(int i = 1; i <= range; i+= 2){
		sum += (1.0/i)*segno;
		segno*= -1;
	}
	cout << "Pi: " << sum*4;
}



/* int main(){
	const int range = 100000000;
	double sum = 0;
	cout.precision(16);

	for(int i = 1; i <= range; i+= 4){
		sum += (1.0/i);
	}
	for(int i = 3; i <= range; i+= 4){
		sum -= (1.0/i);
	}

	cout << "Pi: " << sum*4;
} */