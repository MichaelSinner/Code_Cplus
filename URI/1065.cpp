#include <iostream>

using namespace std;
int main(){
    int n,i;
    int c=0;
    for(i=0;i<=4;i++){
       cin>>n;
       if(n%2==0){
                 c++;
       }
                      
     }
    cout<<c<<" valores pares"<<endl;

    return 0;
}
