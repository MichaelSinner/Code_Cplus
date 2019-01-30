#include <iostream>
using namespace std;
int main(){
 int n,x,i,pos;
 cin>>n;
 int v[n];
 for(i=0;i<n;i++) {
 cin>>v[i];                 
 }
x=v[0];
for(int f=0;f<n;f++){
        if(v[f]<x){
        x=v[f];        
        pos=f;   
        }

}
    
cout<<"Menor valor: "<<x<<endl;
cout<<"Posicao: "<<pos<<endl;
return 0;    
}
