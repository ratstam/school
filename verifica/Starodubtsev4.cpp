#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	int k,j;

	cout<<"k: ";
	cin>>k;

	j = k;
	if (k%2==1){
		while (j>10){
			j/=10;
		}
		if (j%2==1){
			cout << k << " è superdispari";
		}else{
			cout<< k << " non è superdispari";
		}
		
	}else{
		
		cout<< k << " non è superdispari";
	}
}