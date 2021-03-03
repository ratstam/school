#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){


	int n,k;
	cout<<"n: ";
	cin>>n;
	cout<<"k: ";
	cin>>k;

	if (n==0){
		
		cout<< 4*k;

	}else{
		do{
			k -= n%2;
			n += 3;
		}while( k>=0);

		cout<< n-1;

	}
}