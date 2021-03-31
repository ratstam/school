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
	int n = 10001, cont = 0;
	while(n<100000){
		if(is_prime(n) && n == reverse_integer(n)){
			cout << n << " ";
			if(cont%8==0)
				cout << '\n';
			cont++;
		}
	n++;
	}
 }