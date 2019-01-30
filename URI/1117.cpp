#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double n;
    double sum=0;
    int c=0;
    while(c!=2){
           cin>>n;
           if(n>0.0&&n<=10.0){
           sum=sum+n;
           c++;            
           }else{
           cout<<"nota invalida"<<endl;
           }               
    }
    cout<<fixed<<setprecision(2)<<"media = "<<sum/2<<endl;
}
