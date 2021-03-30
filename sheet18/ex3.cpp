#include <iostream>
using namespace std;

 int reverse_integer (int n){
	 int rev_n = 0;

	 while (n != 0) {
        rev_n = rev_n * 10 + n % 10;
        n = n / 10;
    }
    return rev_n;
 }

int main(){
	int n, reversed_n;
	
	cout << "Number to reverse:";
	cin >> n;

	reversed_n = reverse_integer(n);

	cout << "\nResult: " << reversed_n;
	}