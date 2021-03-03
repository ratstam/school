#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std;

int main(){
	string cities[5] = {"pincopallinopoli", "paperopoli",  "montelusa", "vicata", "topolinia"}; // pincopallinopoli, paperopoli,  montelusa, vicata, topolinia
	int mm[5], sempl[5], fin[5], mcd = 1, max = 0, size = 40;
	double multiplier = 1;

	for (int i = 0; i < 5; i++){
		cout <<"\nMl di pioggia a " << cities[i]<< ": ";
		cin >> mm[i];
	}

	mcd = __gcd(mm[1], mm[2]);
	for (int j =3; j < 5; j++)
		mcd = __gcd(mcd, mm[j]);

	for(int l = 0; l < 5; l++){
		sempl[l] = mm[l]/mcd;
	}

	for(int n = 0; n < 5; n++){
		if(sempl[n] > max)
			max = sempl[n];
	}

	multiplier = (double) size / max;

	for(int o = 0; o < 5; o++){
		fin[o] = sempl[o] * multiplier;
	}


	for( int m = 0; m < 5; m++){
		cout << cities[m]<< " : \n" << string(fin[m], '*')<<"\n";
	}

	system("pause");
}
