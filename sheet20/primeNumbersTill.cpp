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
	int n, i = 0;

	cout<<"Limite massimo: ";
	cin >> n;

	while(i <= n){
		if(is_prime(i))
			cout << i << " ";
		i++;
	}
	cout <<endl;

	i = n;
	while(i>0){
		if(is_prime(i))
			cout << i << " ";
		i--;
	}

	
}