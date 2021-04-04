#include <iostream>
using namespace std;

int main(){
	int n[10];

	for (int i = 0; i < 10; i++){
		cout << "\nInsert the "<< i+1 << " number out of 10: ";
		cin >> n[i];
	}

	cout << "Your numbers in reverse order:";
	for (int j = 9; j >= 0; j --){
		cout << n[j] << " ";
	}
}s