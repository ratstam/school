#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	while (true){
		int n = 0, input = 0, prodotto = 1;
		bool positive=true;

		do{
			cout<< "Number: ";
			cin >> input;
			

			if(input<0){
				positive=false;
			}else{
				n +=1 ;
				prodotto *= input;
			}

		}while(positive == true);
		

		cout << "\nGeometric mean: " << pow(prodotto, 1.0/n )<< endl;
	}
}