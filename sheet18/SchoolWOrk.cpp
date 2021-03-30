#include <iostream>
using namespace std;

int cambia( int &a, int b){
	return a += b;
}

int main(){
	int c,x, y;
	cout << "\nc:";
	cin >> c;
	cout << "\nx:";
	cin >> x;
	cout << "\ny:";
	cin >> y;

	cout << "cambia c di 1: " << cambia(c, 1)<< endl;
	cout << "cambia c di x + y: " << cambia(c, x + y)<< endl;
	cout << "cambia c di -2: " << cambia(c, -2)<< endl;
}