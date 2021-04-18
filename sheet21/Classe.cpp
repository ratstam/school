#include <iostream>
using namespace std;

int divisors_sum(int n){
	int s=0;
	for(int i = 1; i <= n/2; i++){
		if(n%i==0){
			s+=i;
		}
	}

	return s;
}


bool is_deficinet(int n){
	return (n > divisors_sum(n));
}

bool is_abundant(int n){
	return (n < divisors_sum(n));
}

bool is_perfect(int n){
	return (n == divisors_sum(n));
}
int main(){
	int n, deficinet_amount = 0, abundant_amount = 0, perfect_amout = 0;
	cout << "Analisys of numbers ";
	cin >> n;

	int i = 2;
	while( i <= n){
		if(is_abundant(i)){
			cout << "abundant:" << i << " ";
			abundant_amount++;
		}
		if(is_deficinet(i)){
			cout << "deficient:" << i << " ";
			deficinet_amount++;
		}
		if(is_perfect(i)){
			cout << "perfect:" << i << " ";
			perfect_amout ++;
		}
		i++;
	}

	cout << "\nThere are:\n" << deficinet_amount << " deficiente numbers\n" << abundant_amount << " abundant numbers\n" << perfect_amout << " perfect numbers"<<endl;

}

