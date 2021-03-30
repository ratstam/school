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

	// Get Height
	do{
	cout << "\nHeight: ";
	cin >> h;
	if( h <= 0){ valid = false; cout << "\nInvalid number, please retry\n";}
	else valid = true;
	}while( valid == false);
	// get Width
	do{
	cout << "\nWidth: ";
	cin >> w;
	if( w <= 0){ valid = false; cout << "\nInvalid number, please retry\n";}
	else valid = true;
	}while( valid == false);
	// get the Character
	cout << "\nCharacter: ";
	cin >> c;


	step = 2*w/h;	// Difference between a line and the next one
	centerstring(c,(w%2!=0 && h != 1)); // uneven widht first line
	cout << "\n";
	if(h > 1){
	for (int i = 1; i <= h/2 - 1*(h%2!=0); i++){ //first half
		centerstring(c, i*step);
		cout << "\n";
		}}
	if(h%2!=0){ centerstring(c, w); cout << "\n";} // uneven height central line
	if(h>1){
	for (int i = h/2 - 1*(h%2!=0); i > 0; i--){ // second half
		centerstring(c, i*step);
		cout << "\n";
	}}
	centerstring(c,(w%2!=0 && h != 1));// uneven width last line
}