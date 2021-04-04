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

 int reverse_integer (int n){
	 int rev_n = 0;

	 while (n != 0) {
        rev_n = rev_n * 10 + n % 10;
        n = n / 10;
    }
    return rev_n;
 }
 
 int main(){
	int n, n_start = 10000, n_end =100000, cont = 0;

	cout << "Intervallo:";
	cin >> n_start >> n_end;
	n= n_start;

	while(n<n_end){
		if(is_prime(n) && n == reverse_integer(n)){
			cout << n << " ";
			cont++;
			if(cont%8==0)
				cout << '\n';	
		}
	n++;
	}
	if(cont == 0){
		cout << "non sono stati trovato numeri primi palindromi in questo intervallo";
	}
 }