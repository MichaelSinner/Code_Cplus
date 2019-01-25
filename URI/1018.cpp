#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
int main(){
int n,x, a = 0, b = 0, c = 0,d = 0,e = 0,f = 0, g = 0;
cin>>n;
x=n;
if (n >= 100){
a = n / (100);
n %= (100);
}
if (n >= 50){
b = n / 50;
n %= 50;
}
if (n >= 20){
c = n / 20;
n %= 20;
}
if (n >= 10){
d = n / 10;
n %= 10;
}
if (n >= 5){
e = n / 5;
n %= 5;
}
if (n >= 2){
f = n / 2;
n %= 2;
}
g = n;
cout<<x<<endl;
cout<<fixed<<setprecision(2)<<a<<" nota(s) de R$ 100,00"<<endl;
cout<<fixed<<setprecision(2)<<b<<" nota(s) de R$ 50,00"<<endl;
cout<<fixed<<setprecision(2)<<c<<" nota(s) de R$ 20,00"<<endl;
cout<<fixed<<setprecision(2)<<d<<" nota(s) de R$ 10,00"<<endl;
cout<<fixed<<setprecision(2)<<e<<" nota(s) de R$ 5,00"<<endl;
cout<<fixed<<setprecision(2)<<f<<" nota(s) de R$ 2,00"<<endl;
cout<<fixed<<setprecision(2)<<g<<" nota(s) de R$ 1,00"<<endl;
system("pause");
return 0;    

}
