#include <iostream>
using namespace std;
int main(){
    int n;
    int A=0,G=0,D=0;
    while(scanf("%d",&n)&&n!=4){
    if(n==1) A++;
    if(n==2) G++;
    if(n==3) D++;
    }
   
   cout<<"MUITO OBRIGADO"<<endl; 
      cout<<"Alcool: "<<A<<endl;
         cout<<"Gasolina: "<<G<<endl;
            cout<<"Diesel: "<<D<<endl;
            
            system("pause");
            return 0;
}
