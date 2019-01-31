#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    char o;
    int i,j;
    float s=0,n;
    cin>>o;
    for(i=0;i<=11;i++){
        for(j=0;j<=11;j++){
           cin>>n;
           if(j<i) s+=n;                
        }                   
             
    }
    if(o=='S'){
       cout<<fixed<<setprecision(1)<<s<<endl;
    }else{
          cout<<fixed<<setprecision(1)<<s/66<<endl;
          }
    system("pause");
    return 0;
    
    }
