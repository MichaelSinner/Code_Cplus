#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    int hi,hf,mi,mf,m,h;
    cin>>hi>>mi>>hf>>mf;
    h=hf-hi;
    if(hf-hi<0){
                h=24+hf-hi;
                }
    m=mf-mi;
    if(mf-mi<0){
                m=60+mf-mi;
                h--;
                }
    if(hf==hi&&mf==mi){
              cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
              }else{
                    cout<<"O JOGO DUROU "<<h<<" HORA(S)"<<" E "<<m<<" MINUTO(S)"<<endl;
                    }

              return 0;

    }
