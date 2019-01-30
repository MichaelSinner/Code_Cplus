#include <iostream>
using namespace std;
int main(){
    int n,f,d;
    cin>>n;
    for(f=1;f<=n;f++){
     cin>>d;
     if(d!=0){
        if(d%2==0){
         cout<<"EVEN ";
        }else{
              cout<<"ODD ";
        }
        if(d>0){
         cout<<" POSITIVE "<<endl;
        }else{
              cout<<" NEGATIVE "<<endl;
              }
      
       
              
      
     }else{cout<<"NULL"<<endl;}
     }
    
return 0;
}
