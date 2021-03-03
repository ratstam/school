#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std;

int main(){
	int numeri[8] = {1, 3, 5, 7, 9, 11, 13 , 15}, index;
	srand (time(NULL));

	while (true){
		cout << "numbers in range (-100; 100):\n ";
		for(int i = 1; i <= 15; i++)
			cout << ((rand()%201)+1)-100 << ", ";
		cout <<endl;

		cout << "random number between {1, 3, 5, 7, 9, 11, 13 , 15}: \n";
		
		for(int j = 1; j <= 15; j++){
			cout << numeri[rand()%8] << ", ";
		}
		cout <<endl;
		system("pause");
	}

}