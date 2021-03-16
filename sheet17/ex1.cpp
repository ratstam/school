#include <iostream>
using namespace std;

bool is_prime(int n){
	for (int i = 2; i <= n / 2 + 1; ++i) {
		if (n % i == 0) {
			return false;
			i = n;
		}else return true;
	}
	
}

int main(){
	int n;
	bool isPrime;
	cout << boolalpha;

	cout << "Number:";
	cin >> n;

	cout << "\nFuncion result: " << (bool)is_prime(n);

	if ( n == 2 || n == 3 ) { isPrime = true; }
    else if ( n <= 1 || n % 2 == 0 || n % 3 == 0 ) { isPrime = false; }

    int i = 5;
    while ( i*i <= n)
    {
        if ( n % i == 0 || n % (i + 2) == 0) { isPrime = false; }
        i += 6;
    }
    isPrime = true;

	cout <<"\nThe Funcion was correct: " << (bool)isPrime;
}