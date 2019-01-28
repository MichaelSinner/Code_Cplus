#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    double a=0.0;
    double b=0.0;
    double c=0.0;
    cin>>a>>b>>c;
    if(a>=b+c){
    cout<<"NAO FORMA TRIANGULO"<<endl;
               }
    if((a*a)==(b*b)+(c*c)){
    cout<<"TRIANGULO RETANGULO"<<endl;
                     }
    if((a*a)>(b*b)+(c*c)){
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
                     }
   if((a*a)<(b*b)+(c*c)){
    cout<<"TRIANGULO ACUTANGULO"<<endl;
                     }
    if(a==b&&b==c){
    cout<<"TRIANGULO EQUILATERO"<<endl;
                 }
    if((a==b&&b!=c)||(a==c&&c!=b)||(b==c&&c!=a)){
    cout<<"TRIANGULO ISOSCELES"<<endl;
                 }
    system("pause");
    return 0;
    }
