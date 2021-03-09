#include <iostream>
using namespace std;

int main(){
	int n, repetitions[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

	do {
		cout << "\nNumber: " ;
		cin >> n;


		repetitions[n]++;
	}while(n>=0 && n<=8);

	cout << "\n Repetitions:" <<endl;
	for(int i = 0; i <=8; i++){
		cout << " Number " << i << " was repeated " << repetitions[i]<< " times\n";
	}
}