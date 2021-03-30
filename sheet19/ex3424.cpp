#include <iostream>
using namespace std;

bool palindromo(int n)
{
int n_inv, n2;
n2=n;
n_inv=n2%10;
while (n2>=10)
 {
  n2=n2/10;
  n_inv=n_inv*10+n2%10;
 }
 return n_inv == n;
}

bool is_prime (int k)
{
int cont=0;
for(int j=1; j<=k/2; j++)
  {
   if (k%j==0)
    {
   cont++;
    }
  }
  return cont==1;
}

int main()
{
int c_max=0;
for (int cont= 10000; cont<100000; cont++)
  {
   if(is_prime(cont) && palindromo(cont))
     {
      cout<< cont <<"  ";
      c_max++;
     }
    if (c_max==8)
    {
     cout<<endl;
     c_max=0;
    }
  }
}