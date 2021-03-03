#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std;

int main(){
	string cities[5] = {"pincopallinopoli", "paperopoli",  "montelusa", "vicata", "topolinia"}; // pincopallinopoli, paperopoli,  montelusa, vicata, topolinia
	int ml[5], sempl[5], mcd;

	for (int i = 0; i < 5; i++){
	cout <<"\nMl di pioggia a " << cities[i]<< ": ";
	cin >> ml[i];
	}

	for (int j =3; j < 5; j++){
}