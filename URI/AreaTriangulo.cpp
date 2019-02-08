#include <iostream>

using namespace std;

     int areaTriangulo(int base, int altura);
      int main(){
               int base = 0;    
               int altura = 0;
               cout<<"Ingrese la base : "<<endl;
               cin>>base;
               cout<<"Ingrese la altura : "<<endl;
               cin>>altura;
               cout<<"El area del traingulo es : "<<areaTriangulo(base,altura)<<endl;
               
               system("pause");
                return 0;
             }
       int areaTriangulo(int base, int altura){                     
             int respuesta = ((base*altura)/2);
             return respuesta;
             
             }

             
