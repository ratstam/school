#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	int a,b,x;
	cout << "value of a: ";
	cin >> a;
	cout <<"Value of b: ";
	cin >> b;
	if(a==0||b==0)
		cout<<"equazione impossibile";
	x = 1/(a*b);
	if(x==0){
		cout<<"x non esiste";
	}else{
	cout<< "x: "<< x <<endl;
	}
	system("pause");
}