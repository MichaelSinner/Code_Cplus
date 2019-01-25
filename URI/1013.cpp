#include<iostream>
#include<windows.h>
using namespace std;
int greatest(int n1, int n2)
{
return ((n1+n2+abs(n1-n2)) / 2);
}
int main()
{
int a, b, c;
cin >> a >> b >> c;
a = greatest(a, b);
b = greatest(b, c);
c = greatest(a, b);
cout << "" << c << " eh o maior" << endl;
system("pause");
return 0;
}
