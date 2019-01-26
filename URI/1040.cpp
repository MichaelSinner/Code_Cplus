#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main(){
float n1,n2,n3,n4,n5;
float media=0;

     scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
     media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;
     cout<<fixed<<setprecision(1)<<"Media: "<<media<<endl;
     if (media >= 7.0)
     cout<<"Aluno aprovado."<<endl;
     else if (media >= 5.0){
          cout<<"Aluno em exame."<<endl;
          scanf("%f", &n5);
          cout<<setprecision(1)<<"Nota do exame: "<<n5<<endl;
                       if (n5 + media / 2.0 > 5.0)
                        cout<<"Aluno aprovado."<<endl;
                        else
                        cout<<"Aluno reprovado."<<endl;
                        cout<<setprecision(1)<<"Media final: "<<(n5 + media) / 2.0<<endl;
     } else
     cout<<"Aluno reprovado."<<endl;
     
     


return 0;    
}
