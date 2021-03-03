#include <iostream>
#include <string>
#include <cmath>

using namespace std;

main(){
	while(true){
		int n1,n,mcm,cont=1;
		cout<< "Numero 1: ";
		cin>>n;
		cout<< "Numero 2: ";
		cin>>n1;
		while(n1*cont%n!=0){
			cont+=1;
		}
		mcm = n1*cont;
		cout << "il minimo comune multiplo è: "<< mcm << endl;
	}
}
