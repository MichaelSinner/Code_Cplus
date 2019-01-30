#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    int x,f;
    cin>>x;
    for(f=1;f<=x;f++){
      if(f%2==0){
         cout<<f<<"^2"<<" = "<<f*f<<endl;
      }                
    }
    return 0;

}
