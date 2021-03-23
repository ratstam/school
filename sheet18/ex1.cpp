#include <iostream>
using namespace std;

void print_symbol (char c, int n){
	cout << string(n, c);
}

void centerstring(char c, int n){

	int l = string(n, c).length();
	int pos = (80-l)/2;
	print_symbol(' ', pos);

	print_symbol(c, n);
}

int main(){
	int h = 1, w = 1, step;
	char c;
	bool valid = true;


	do{
	cout << "Height: ";
	cin >> h;
	if( h <= 0){ valid = false; cout << "\nInvalid number, please retry\n";}
	else valid = true;
	}while( valid == false);

	do{
	cout << "\nWidth: ";
	cin >> w;
	if( w <= 0){ valid = false; cout << "\nInvalid number, please retry\n";}
	else valid = true;
	}while( valid == false);

	cout << "\nCharacter: ";
	cin >> c;


	step = 2*w/h;
	centerstring(c,(w%2!=0 && h != 1));
	cout << "\n";
	if(h > 1){
	for (int i = 1; i <= h/2 - 1*(h%2!=0); i++){
		centerstring(c, i*step);
		cout << "\n";
		}}
	if(h%2!=0){ centerstring(c, w); cout << "\n";}
	if(h>1){
	for (int i = h/2 - 1*(h%2!=0); i > 0; i--){
		centerstring(c, i*step);
		cout << "\n";
	}}
	centerstring(c,(w%2!=0 && h != 1));
}