#include <iostream>
#include <random>
using namespace std;

void load_random(int array[]){
	for(int i = 0; i < sizeof(array); i++){
		array[i] = rand();
	}
}


void print(int array[]){
	for(int i = 0; i < sizeof(array); i++){
		cout << array[i] << " ";
	}

}

void reverse(int array[]){
	int temp[sizeof(array)];
	int position = sizeof(array)-1;


	for(int i = 0; i < sizeof(array); i++){
		temp[position] = array[i];
		position--;
	}

	for(int i = 0; i < sizeof(array); i++){
		array[i] = temp[i];
	}

}

int main(){
	const int n = 10;
	int array[n];

	load_random(array);
	print(array);
	cout << "\n";
	reverse(array);
	print(array);

}