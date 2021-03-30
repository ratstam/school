#include <iostream>
using namespace std;
void find(int a, int &b)
{
 int temp;
 temp = a;
 a = b;
 b = temp - 1;
}
int main()
{
 int one, two;
 one = 5;
 two = 10;
 find(one + 2, two);
 cout << one << ", " << two;
}
