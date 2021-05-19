#include <iostream>
#include <cmath>
using namespace std;

const double g = 9.81;

void exit(){
	char s;
	cout << "\ntype anything to confirm exit\n";
	cin >> s;
}


int main(){
	int Vi = 0, h = 0, Vf = 0;
	int errori = 0;

	do{
		cout << "Velocità iniziale: ";
		cin >> Vi;
		cout << "Altezza: ";
		cin >> h;
		if(Vi < 0 || h < 0)
			errori+=1;
	}while(Vi < 0 || h < 0 || errori >= 8);
	if(errori >= 8){
		cout << "troppi errori\n";
	}else{
	Vf = sqrt(2*h*g+Vi*Vi);
	cout << "Velocità finale: " << Vf << endl;
	}

	exit();
}