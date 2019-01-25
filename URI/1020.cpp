#include <iostream>
using namespace std;

int main(){
int h, a = 0, m = 0, d = 0;
cin>>h;
if (h >= 365){
a = h / (365);
h %= (365);
}
if (h >= 30){
m = h / 30;
h %= 30;
}
d = h;
cout<<a<<" ano(s)"<<endl;
cout<<m<<" mes(es)"<<endl;
cout<<d<<" dia(s)"<<endl;

return 0;
}
