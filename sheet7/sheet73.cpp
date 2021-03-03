#include <iostream>
#include <string>
#include <cmath>

using namespace std;

main()
{
	int n;
	cout << "n! = ";
	cin >> n;
	int k = 1;
	int f = 1;
	while (k <= n)
	{
		f*=k;
		k+=1;
	}
	cout<< f;
}
