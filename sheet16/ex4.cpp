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
	double min_num, max_num, num[4];

	for(int i = 0; i < num.size; i++){
		cout<< "\n Number: ";
		cin >> num[i];
	}

	min_num = min(num[1], num[2]);
	for (int i = 3; i < size(num); i++){
		min_num = min(min_num, num[i]);
	}

	max_num = max(num[1], num[2]);
	for (int i = 3; i < size(num); i++){
		max_num = max(max_num, num[i]);
	}
	
	cout << "Min: " << min_num << "\nMax: " << max_num;
}