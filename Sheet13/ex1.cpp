#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){
	double t[3];

	while (true){
		for (int i = 0; i < 3; i++){
			cout << "give me the lenghts of the " << i+1 << " side of a triangle: ";
			cin >> t[i];
			cout << endl;
		}

		if (t[0] == t[1] or t[1] == t[2] or t[2] == t[0]){ // ???
			if (t[0] == t[1] && t[0] == t[2])
				cout << " the triangle is equilateral" << endl;
			else
				cout << " the triangle is isocile" << endl;
		}else{
			cout << " the triangle is isocile" << endl;
		}
	}
}