#include <iostream>
using namespace std;

void input(int &k){
	cout << "Quantita' di numeri abbondanti:" << endl;
	cin >> k;
	if(k >= 1000){
		cout << "\nIl numero inserito deve essere minore di 1000"<<endl;
		input(k);
		}
}

int divisors_sum(int n){
	int s=0;
	for(int i = 1; i <= n/2; i++){
		if(n%i==0){
			s+=i;
		}
	}

	return s;
}

bool is_abundant(int n){
	return (n < divisors_sum(n));
}

int main(){
	int k, amount_found=0, i=1;
	input(k);
	int n[k];

	while (amount_found<k){
		if (is_abundant(i)){
			n[amount_found] = i;
			amount_found++;
		}
		i++;
	}

	for(int j = k-1; j >= 0; j--){
		cout << n[j] << " ";
	}
}