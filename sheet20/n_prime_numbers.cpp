#include <iostream>
using namespace std;

bool is_prime(int n){
	if(n==2 || n == 3) return true;
	else if (n <= 1 || n%2==0 || n%3==0) return false;

	int i = 5;
	while(i*i <= n){
		if (n%i == 0 || n%i+2==0) return false;
		i += 6;
	}
	return true;
}


int main(){
	int n,amount, i = 0;

	cout << "amount of prime numbers: ";
	cin >> amount;

	int primes[amount];
	i = 0;
	n = amount;
	while(n > 0){
		if(is_prime(i)){
			cout << i << " ";
			primes[amount-n]=i;
			n--;
			}
		i++;
	}

	cout << endl;

	i=amount-1;
	while(i >= 0){
		cout << primes[i] << " ";
		i--;
	}

}