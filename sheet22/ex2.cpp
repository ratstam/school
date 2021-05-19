#include <iostream>
using namespace std;

int biggestInArray(int a[]){
	int m = a[0];
	for(int i = 1; i < sizeof(a); i++){
		if(a[i] > m)
			m = a[i];
	}
	return m;
}

int smallerInArray(int a[]){
	int s = a[0];
	for(int i = 1; i < sizeof(a); i++){
		if(a[i] < s)
			s = a[i];
	}
	return s;
}


int main(){
	const int k = 5;
	int x[k], y[k], biggestX, biggestY, smallerX, smallerY;

	for(int i = 0; i < k; i++){
		cout << "\ncoordinates of the " << i+1  << " point:";
		cin >> x[i] >> y[i];
	}

	biggestX = biggestInArray(x);
	biggestY = biggestInArray(y);
	smallerX = smallerInArray(x);
	smallerY = smallerInArray(y);
	
	cout << biggestX << " " << smallerX << " " << biggestY << " " << smallerY << "\n";

	cout << "This are the vertices of the rectangle: A(" <<smallerX<< "," << biggestY << ") B(" <<biggestX<< "," << biggestY << ") C(" <<biggestX<< "," << smallerY << ") D(" <<smallerX<< "," << smallerY << ")" << endl;
}