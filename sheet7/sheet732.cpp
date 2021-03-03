#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	while(true){	
		int n;
		cout << "Il numero digitato è ";
		cin >> n;
		if(n>0){
			cout << "Positivo";
		}else if (n<0)
		{
			cout << "Negativo";
		}else{
			cout << "Nullo";
		}
	}
}