#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	int n,i;
	double result,s;

	cout<<"N: ";
	cin>>n;

	for(i=1; i<=n ; i++){
		s += pow(i , 1.0/2);
	}


	result = pow( 1+(1/n) , 1.0/3 ) / s;
	cout << "result: "<< result << endl;
}