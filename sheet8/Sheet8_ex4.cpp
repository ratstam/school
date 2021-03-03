#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int divisors_sum(int n){
	int s = 0;
	for(int i=1; i<=n/2; i++){
		if(n%i == 0)
		s += i;
	}
	return s;
}

int main() {
	int n1, n2;

	cout << "Primo nunero: ";
	cin >> n1;
	cout << "Secondo numero: ";
	cin >> n2;

	int s1 = divisors_sum(n1);
	int s2 = divisors_sum(n2);

	if( s1==n2 && s2==n1 ){
		cout << "\nI due numeri sono amicabili"<< endl;
	}else{
		cout << "\nI due numeri non sono amicabili"<< endl;
	}
	
	system("pause");
	system("start Sheet8_ex4");
}