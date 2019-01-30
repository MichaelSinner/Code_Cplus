#include <iostream>
using namespace std;
int main(){
    int x,f;
    int p=0,i=0,pos=0,neg=0;
    for(f=0;f<=4;f++){
        cin>>x;
        if(x!=0){
        if(x>0)
        pos++;else neg++;}
        if(x%2==0)
        p++; else i++;         
    }
    cout<<p<<" valor(es) par(es)"<<endl;
    cout<<i<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;    
    cout<<neg<<" valor(es) negativo(s)"<<endl;    
    return 0;
    }
