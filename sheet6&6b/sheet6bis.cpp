#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::cin;


main()
{
	int n;
	int n1;

	cout << "Numero:";
	cin >> n;

	do{
		n = n1;
		cout<<"\n Numero:";
		cin >> n;
	}while(n!=2*n1);
	cout << "arrivederci";
}
