#include <iostream>
using namespace std;
void scambia(string &a, string &b) // scambia il contenuto di a e b
{
	string temp = a;
	a = b;
	b = temp;

}
main ()
{
 string s1, s2, s3;
 while(true){
	cout << "\n\n - Digita tre parole da visualizzare poi in ordine lessicografico: ";
 	cin >> s1 >> s2 >> s3;

	while (!(s1<s2 && s2<s3))
	{
		if(s1>s2)
			scambia(s1,s2);
		if(s2>s3)
			scambia(s2,s3);
	}

	cout << "\n Le tre parole ordinate sono: " << s1 << " " << s2 << " " << s3;
	}
}
