#include <iostream>
using namespace std;

int mcd (int n,int m){ // This functions return the gcd(int) of n(int) and m(int)
	int k = n;
	while (m%!=0 || n%k!=0)
		k--;
	return k;
}

int main(){}