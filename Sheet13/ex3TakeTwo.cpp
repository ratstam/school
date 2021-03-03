#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;

int main(){
	srand(time(NULL));

	int num[10], min;


	for (int i=0; i<10; i++){
		num[i] = rand()%100 +1;
		cout << " " << num[i];
	}

	min = num[0];
	for (int j = 1; j < 10; j++){
		if(num[j] < min)
			min = num[j];
	}

	cout << "\nMin : " << min << endl;
	system("pause");
	
}