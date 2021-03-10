#include <iostream>
using namespace std;

int main(){
	int n, repetitions[9] = {0};

	while(n>=0 && n<=8){
		cout << "\nNumber: " ;
		cin >> n;


		repetitions[n]++;
	}

	cout << "\n Repetitions:" <<endl;
	for(int i = 0; i <=8; i++){
		cout << " Number " << i << " was repeated " << repetitions[i]<< " times\n";
	}
}