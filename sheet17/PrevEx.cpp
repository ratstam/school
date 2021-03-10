#include <iostream>
using namespace std;

bool is_prime(n){
	for (i = 2; i <= n / 2; ++i) {
		if (n % i == 0) {
			return false;
			break;
		}
	}
	else return true;
}

int main(){
	
}