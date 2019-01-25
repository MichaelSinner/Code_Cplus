#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
int main(){
    int coda,codb;
    int np1,np2;
    float p1,p2;
    cin>>coda>>np1>>p1;
    cin>>codb>>np2>>p2;
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<(np1*p1)+(np2*p2)<<endl;
    system("pause");
    return 0;
    }
