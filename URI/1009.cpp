#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
double a,b;
string nombre;
cin>>nombre>>a>>b;
cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<a+(b*15)/100<<endl;

return 0;
}
