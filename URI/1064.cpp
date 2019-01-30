#include <iostream>
using namespace std;
int main(){
    double n,cn;
    int i;
    int c=0;
    
    
    for(i=0;i<=5;i++){
                      cin>>n;
                      if(n>=0){
                               cn=n+cn;
                               c++;
                               }
                      }
    
    cout<<c<<" valores positivos"<<endl;
    cout<<cn/c<<endl;

    return 0;
    }
