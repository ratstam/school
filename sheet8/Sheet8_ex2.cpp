#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	while (true){
		int n = 0, input = 0, media = 1;

		cout<< "\nAmount of numers: ";
		cin>>n;
			
			for(int i = 0; i<n; i++){
				cout<< "Numer: ";
				cin >> input;
				media *= input;
			}

		cout << "\nGeometric mean: " << pow(media, 1.0/n)<< endl;
	}
}