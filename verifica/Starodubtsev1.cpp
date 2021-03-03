#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	int d,ex;
	double q = 20;
	cout<< "Distanza: ";
	cin >> d;
	if (d>100){
		d-=100;
		q += d*0.35;
	}

	cout<< "Quota: "<< q << endl;

}