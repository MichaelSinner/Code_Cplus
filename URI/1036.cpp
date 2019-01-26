#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double A,B,C,delta;
    cin>>A>>B>>C;
    delta =(B*B)-4*A*C;
    if(delta>=0&&A!=0){
                           cout<<fixed<<setprecision(5)<<"R1 = "<<((B*-1)+sqrt(delta))/(2*A)<<endl;
                           cout<<fixed<<setprecision(5)<<"R2 = "<<((B*-1)-sqrt(delta))/(2*A)<<endl;
                           }else{
                                 cout<<"Impossivel calcular"<<endl;
                                 }

    return 0;
    }
