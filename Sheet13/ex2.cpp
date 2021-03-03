#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){
	string animal[12] = {"Monkey", " Rooster", " Dog", "Pig", "Rat", "Ox", "Tiger", "Hare", "Dragon", "Snake", "Horse", "Sheep"};
	int year;

	while (true){
		cout << "Year: ";
		cin >> year;
		if(year < 0)
			cout << "insert a year greater or equal to 0 \n";
		else
			cout << "\nThe animal of the year " << year << "is:" << animal[year%12]<< endl;
	}
}