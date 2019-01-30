#include <iostream>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    c=1;
    while(c!=n+1){
       if(n%c==0){
       cout<<c<<endl;
       }           
       c++; 
    }
    return 0;
    
    }
