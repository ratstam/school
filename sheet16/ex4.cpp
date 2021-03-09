#include <iostream>
#include <iterator>
using namespace std;

double min (double x, double y){
	if(x < y)
		return x;
	else
		return y;
}

double max (double x, double y){
		if(x > y)
		return x;
	else
		return y;
}


int main(){
	double min_num, max_num;
	double num[4];

	for(int i = 0; i < 4; i++){
		cout<< "\n Number: ";
		cin >> num[i];
	}

	min_num = min(num[0], num[1]);
	for (int i = 2; i < 4; i++){
		min_num = min(min_num, num[i]);
	}

	max_num = max(num[0], num[1]);
	for (int i = 2; i < 4; i++){
		max_num = max(max_num, num[i]);
	}
	
	cout << "Min: " << min_num << "\nMax: " << max_num<< endl;
	cout <<min(num[0], num[1]);
}