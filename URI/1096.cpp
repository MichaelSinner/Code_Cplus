#include <iostream>
using namespace std;
int main(){
    double i,j=1.0;

    for(i=0;i<=2;i=i+0.2){
                        
         cout<<"I="<<i<<" J="<<j<<endl;
         cout<<"I="<<i<<" J="<<j+1.0<<endl;
         cout<<"I="<<i<<" J="<<j+2.0<<endl;
             j=j+0.2;
             
    }
system("pause");
}
