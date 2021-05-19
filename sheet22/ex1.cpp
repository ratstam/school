#include <iostream>
using namespace std;


void function(int n, int m, int &sum, double &avarage){
	sum = 0;
	if(n <= m){
		sum = m*(m+1)/2 - (n-1)*(n)/2;
		avarage = (double)sum/(m-n+1);
	}else{
		sum = n*(n+1)/2 - (m-1)*(m)/2;
		avarage = (double)sum/(n-m+1);
	}
}
/*
void functionOld(int n, int m, int &sum, int &avarage){
	sum = 0;
	if(n <= m){
		for(int i = n; i <= m; i++){
			sum+=i;
		}
		avarage = sum/(m-n+1);
	}else{
		for(int i = m; i <= n; i ++){
			sum+=i;
		}
		avarage = sum/(n-m+1);
	}
}
*/
int main(){
	int n, m, sum;
	double avarage;

	cout << "\nN:";
	cin >> n;
	cout << "\nM:";
	cin >> m;

	function(n, m, sum, avarage);

	cout << "\nThe sum is:" << sum << "\nand the varage is:" << avarage << endl;
}