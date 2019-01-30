#include <iostream>
using namespace std;
int main(){
    int a,b,f;
    cin>>a>>b;
    if(a<b){
       for(f=a+1;f<b;f++){
        if(f%5==2||f%5==3){
        cout<<f<<endl;
        }                  
       }
    }
    if(a>b){
       for(f=b+1;f<a;f++){
        if(f%5==2||f%5==3){
        cout<<f<<endl;
        }                  

       }
    }
    return 0;
}
