#include <iostream>
using namespace std;
int main(){
    int n,f,d;
    int in=0,out=0;
    cin>>n;
    for(f=1;f<=n;f++){
     cin>>d;
     if(d>=10&&d<=20){
      in++;               
     }else{
           out++;
           }
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
    return 0;
}
