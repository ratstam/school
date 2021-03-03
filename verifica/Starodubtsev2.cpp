#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	int Xp,Yp, Xq,Yq,Xm,Ym;
	cout<<"coordinate di p:";
	cin>> Xp >> Yp;
	cout<<"coordinate di q:";
	cin>> Xq >> Yq;

	if(Xp==Xq && Yp==Yq){
		cout<< "P e Q coincidono";
	}else{
		Xm = (Xp + Xq)/2;
		Ym = (Yp + Yq)/2;
		if(Xm==Ym){
			cout << "il punto medio è equidistante dai due assi";
		}else{
			cout << "Il punto medio non è equidistante dagli assi";
		}
	}
}