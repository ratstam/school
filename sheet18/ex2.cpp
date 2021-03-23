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
	bool goOn = true;
	int p = 0;
	int i = 0;

	while(goOn == true)
	{
		p = i*i + i +41;
		if (!is_prime(p))
		{
			goOn = false;
			cout << i << "\n" << p;
			cout << "\nThe First non prime number is: " << p << "\nand it is obtained through p(" << i << ")";
		}
		i++;
	}
}