#include <iostream>
using namespace std;
int main()
{
  double x, y;
  char operazione;
  while (true)
     {
	 cout << "\n\n DIGITA N1 OP N2 : ";
     cin >> x >> operazione >> y;
     cout << "\n                   " << x << " " << operazione << " " << y << " = ";
     switch (operazione)
        { case '+': cout << x + y;break;
          case '-': cout << x - y;break;
          case 'X':
		  case 'x':
          case '*': cout << x * y;break;
          case ':':
      	  case '/':if (y!=0) cout << x / y; else cout << "OPERAZIONE IMPOSSIBILE" ;break;
          default: cout << "OPERAZIONE SCONOSCIUTA"; break;
        }
     }
}