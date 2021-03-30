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

int p(int x){
	return x*x + x + 41;
}

int main(){
	int k = 0;

	while(is_prime(p(k)))
	{
		k++;
	}
		cout << "\nThe First non prime number is: " << p(k) << "\nand it is obtained through p(" << k << ")";
}