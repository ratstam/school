#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){
	double alpha[50];

	for( int i = 0; i < 50; i++ ){
		if( i < 25)
			alpha[i] = pow( i, 2);
		else
			alpha[i] = 3*i;
		cout << alpha[i] << ", ";
		if ( i>0  && i%10 == 0 )
			cout << endl;

	}
}