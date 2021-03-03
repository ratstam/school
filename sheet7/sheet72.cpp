#include <iostream>
#include <string>
#include <cmath>

using namespace std;

main()
{
	
	while(true){
		int value= 0;
		char type;
		cout << "Value & type: ";
		cin >> value >> type;
		if(type == 'f'||type == 'c'){
			if(type == 'f'){
				cout << "Result: " << (value-32)/1.8 << endl ;
			}else{
				cout << "Result: " << value*1.8+32 << endl ;
			}
		}else{
			cout << "invalid input" << endl ;
			system("pause");
			}
	}
}