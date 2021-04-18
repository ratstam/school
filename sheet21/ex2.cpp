#include <iostream>
using namespace std;

void getScore(int &test){
	cout << "Test Score:" << endl;
	cin >> test;
	if(test<0 || test>100){
		cout << "\nThe Score shall be between 0 adn 100"<<endl;
		getScore(test);
		}
}

int findLowest(int test1, int test2, int test3, int test4, int test5){
	int lowest = test1*(test1 < test2 && test1 < test3 && test1 < test4 && test1 < test5) + test2*(test2 < test1 && test2 < test3 && test2 < test4 && test2 < test5) + test3*(test3 < test2 && test3 < test1 && test3 < test4 && test3 < test5) + test4*(test4 < test2 && test4 < test3 && test4 < test1 && test4 < test5) + test5*(test5 < test2 && test5 < test3 && test5 < test4 && test5 < test1);test1*(test1 < test2 && test1 < test3 && test1 < test4 && test1 < test5) + test2*(test2 < test1 && test2 < test3 && test2 < test4 && test2 < test5) + test3*(test3 < test2 && test3 < test1 && test3 < test4 && test3 < test5) + test4*(test4 < test2 && test4 < test3 && test4 < test1 && test4 < test5) + test5*(test5 < test2 && test5 < test3 && test5 < test4 && test5 < test1);;
	
	return lowest + test1*(lowest==0);
}

void calcAverage(int test1, int test2, int test3, int test4, int test5, double &avarage){
	avarage = (test1 + test2 + test3 + test4 + test5 - findLowest(test1, test2, test3, test4, test5) )/4.0  ;
}

int main(){
	int test1, test2, test3, test4, test5;
	double avarage;

	getScore(test1);
	getScore(test2);
	getScore(test3);
	getScore(test4);
	getScore(test5);

	calcAverage(test1, test2, test3, test4, test5, avarage);

	cout << "\nAvarage of the 5 tests:" << avarage;
	
}