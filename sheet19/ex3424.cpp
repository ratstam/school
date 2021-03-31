#include <iostream>
using namespace std;

bool is_palindromo (int n){
    int k=10,j,rev_n,i;
    rev_n=n%k;
    i=n;
    while(n>=10){
        n=n/10;
        j=n%10;
        rev_n=rev_n*10+j;}
    return i==rev_n;
 }

 bool is_prime(int n){
    int cont=0;
    for(int j=1; j<=n/2;j++){
        if(n%j==0)
            cont++;}
    return cont==1;}

 int main()
{
	cout << is_prime(10301) << " " << is_palindromo(10301 )<< endl;
    int k=10301,cont=0;
    while(k<10501)
     {
              if(is_prime(k) && is_palindromo(k)){
                  cout<<k<<" ";
                  k++;
                  }
              //if (cont%8==0){
                  //cout<<endl;}
    }
}