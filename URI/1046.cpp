#include <iostream>
using namespace std;
int main(){
    int hi,hf,h;
    cin>>hi>>hf;
    h=hf-hi;
    if(hf-hi<0){
                h=24+hf-hi;
                }
    if(hf==hi){
              cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
              }else{
                    cout<<"O JOGO DUROU "<<h<<" HORA(S)"<<endl;
                    }
                    return 0;

    }
