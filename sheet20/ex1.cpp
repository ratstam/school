#include <iostream>
using namespace std;

string repeat(string str, int n){
	int i = n;
	string repeated_str = "";
	while(i > 0){
		repeated_str += str;
		i--;
	}
	return repeated_str;
}

int main(){
	int n;
	string s;
	cout << "\nString:"
	cin >> s;
	cout << "\nTimes to repeat:"
	cin >> n;
	cout <<  repeat(s, n);
}