#include <iostream>
#include <string>
#include <cstring>
using namespace std;


void print_symbol (char c, int n){
	cout << string(n, c);
}


void centerstring(char c, int n){

	int l = string(n, c).length();
	int pos = (80-l)/2;
	print_symbol(' ', pos);

	print_symbol(c, n);
	cout << "\n";
}

int main() {
	int n_r, n_c;
	char c;

	cout << "Input a char, the number of rows and columns: \n";
	cin >> c >> n_r >> n_c;

	for (int i = 1; i <= n_r; i++)
		centerstring(c, n_c);
}