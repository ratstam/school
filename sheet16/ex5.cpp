#include <iostream>
using namespace std;

bool is_perfect (int k){
	unsigned int cont = 1, sum = 0;	


	while(cont <= k/2){
		if(k%cont == 0)
			sum += cont;
		cont++;
		}

	return (sum == k);
}


bool branchless_is_perfect(int k){
	unsigned int cont = 1, sum = 0;
	while(cont <= k/2){
		sum += cont*(k%cont == 0);
		cont ++;
	}

	return (sum == k);
}


int main(){
	while (true){
		unsigned int n_max = 1;

		cout << "\nRange: ";
		cin >> n_max;

		if(n_max >= 6){
			int k = 6;

			cout << "\nPerfect numbers in range 1-" << n_max << ":\n";

			while(k <= n_max){
				if(branchless_is_perfect(k) == true){
					cout << k <<" ";
				}
				k++;
			}
		}
		else{
			cout << "\nThere aren't any perfect numbers in this range" << endl;
			}

	}
}